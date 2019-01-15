#include "stdafx.h"
#include "FilesFound.h"

FilesFound::FilesFound(bool s_flag)
	:s_flag(s_flag){}


FilesFound::~FilesFound()
{
}

bool FilesFound::is_match(string& input_name, string& file_name)
{
	int in_len = input_name.length();
	int file_len = file_name.length();
	bool **dp = new bool*[in_len + 1];
	for (int i = 0; i <= in_len; i++) {
		dp[i] = new bool[file_len + 1];
	}
	dp[0][0] = true;
	for (int i = 1; i <= file_len; i++) {
		dp[0][i] = false;
	}
	for (int i = 1; i <= in_len; i++) {
		if (input_name[i-1] == '*') {
			dp[i][0] = dp[i - 1][0];
		}
		else {
			dp[i][0] = false;
		}
		for (int j = 1; j <= file_len; j++) {
			if (input_name[i-1] == '*') {
				dp[i][j] = dp[i - 1][j - 1] || dp[i][j - 1] || dp[i - 1][j];
			}
			else if (input_name[i] == '?') {
				dp[i][j] = dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = dp[i - 1][j - 1] && (input_name[i-1] == file_name[j-1]);
			}
		}	
	}
	bool state = dp[in_len][file_len];
	for (int i = 0; i <= in_len; i++) {
		delete[] dp[i];
	}
	delete dp;
	return state;
}

vector<string> FilesFound::find_files(string input_name)
{
	vector<string> files;
	fs::path root_path = fs::current_path();
	if (s_flag) {
		fs::directory_iterator end;
		for (fs::directory_iterator iter(root_path); iter != end; iter++) {
			if (fs::is_directory(iter->path())) {
				continue;
			}
			string filename = iter->path().filename().string();
			if (is_match(input_name,filename)) {
				files.push_back(filename);
			}
		}
	}
	else {
		fs::recursive_directory_iterator end;
		for (fs::recursive_directory_iterator iter(root_path); iter != end; iter++) {
			if (fs::is_directory(iter->path())) {
				continue;
			}
			string filename = iter->path().filename().string();
			if (is_match(input_name, filename)) {
				files.push_back(filename);
			}
		}
	}
	return files;
}
