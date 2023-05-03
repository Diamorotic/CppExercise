#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <deque>

using namespace std;

class CciCppEx1 {
	string filePath;
	const int linesToRead;
public:
	CciCppEx1(string path, int lines) : filePath(path), linesToRead(lines) {}
	void execute();
};

