//============================================================================
// Name        : NewAlgorithm.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define N 100000
#define WORD_LENGTH sizeof(int)*8

void setbit(unsigned int* bits, unsigned int i){
	bits[i/WORD_LENGTH] |= 1<<(i%WORD_LENGTH);
}

int main() {
	int s = sizeof(int)*8;
	cout << s;
	cout << endl; // prints !!!Hello World!!!
	return 0;
}
