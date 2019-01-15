#include "stdafx.h"
#include "QtGuiApplication1.h"
#include <QtWidgets/QApplication>
#include "pch.h"
#include <iostream>
#include "WC.h"
#include"FilesFound.h"

using namespace std;

void PrintUsage() {
	cout << "Usage: wc.exe [paramter] [file]" << endl;
	exit(1);
}

int main(int argc, char *argv[])
{
	int param_count = 0;
	bool c_flag = false, w_flag = false, l_flag = false, a_flag = false, s_flag = false, x_flag = false;
	for (int i = 0; i < argc - 1; i++) {
		if (argv[i + 1][0] == '-') {
			param_count++;
			if (strlen(argv[i + 1]) != 2) {
				PrintUsage();
			}
			switch (argv[i + 1][1]) {
			case 'c': c_flag = true; break;
			case 'w': w_flag = true; break;
			case 'a': a_flag = true; break;
			case 'l': l_flag = true; break;
			case 's': s_flag = true; break;
			case 'x': x_flag = true; break;
			default:
				cout << "Unsupported arg!" << endl;
				exit(1);
			}
		}
		else {
			break;
		}
	}
	if (x_flag) {
		QApplication a(argc, argv);
		Interface w;
		w.show();
		return a.exec();
	}
	else {
		if (argc < 3) {
			PrintUsage();
		}
		if (param_count < 1 || param_count + 1 >= argc) {
			PrintUsage();
		}
		WC wc(c_flag = c_flag, w_flag = w_flag, l_flag = l_flag, a_flag = a_flag);
		int w_total = 0, c_total = 0, l_total = 0;
		Result result;
		FilesFound filesfound(s_flag);
		for (int i = param_count + 1; i < argc; i++) {
			FILE *f;
			vector<string> files = filesfound.find_files(string(argv[i]));
			for (int j = 0; j < files.size(); j++) {
				fopen_s(&f, files[j].c_str(), "r");
				if (f == NULL) {
					cout << "open file failed" << endl;
					exit(1);
				}
				result = wc.Tell(f);
				if (l_flag) {
					printf("%d ", result.line_count);
				}
				if (w_flag) {
					printf("%d ", result.word_count);
				}
				if (c_flag) {
					printf("%d ", result.char_count);
				}
				if (a_flag) {
					printf("%d %d %d ", result.code_count, result.comment_count, result.empty_count);
				}
				cout << files[j] << endl;
			}
		}
	}
}
