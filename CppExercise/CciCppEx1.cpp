#include "CciCppEx1.h"

void CciCppEx1::execute() {
	ifstream fileToRead(filePath);
	deque<string> res;
	for (string line; getline(fileToRead, line);) {
		res.push_back(line);
		if (res.size() > linesToRead) res.pop_front();
	}
	for (auto x : res) cout << x << endl;
}