#include "CciCppEx2.h"

void CciCppEx2::execute(char *input) {
	for(size_t i=0, j=strlen(input)-1; j>i; i++,j--) {
		std::swap(input[i], input[j]);
	}
}

void CciCppEx2::printArr(char *input) {
	size_t inputSize = strlen(input);
	for (size_t i=0; i<inputSize; i++) {
		std::cout <<input[i];
	}
	std::cout <<std::endl;
}
