#pragma once
#include<filesystem>
#include<vector>
#include<string>
using namespace std;
namespace fs = std::filesystem;

class FilesFound
{
public:
	FilesFound(bool s_flag);
	~FilesFound();
	vector<string> find_files(string input_name);
private:
	bool s_flag;
	bool is_match(string& input_name,string& file_name);
};

