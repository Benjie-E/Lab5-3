/*
 Author:       Benjie
 Class:        CSI-240-03
 Assignment:   Lab 5-3
 Date Assigned:2/14/2022
 Due Date:     2/25/2022 14:30
 Description:
 Dynamic Array Challenge
 Certification of Authenticity:
 I certify that this is entirely my own work, except where I have given
 fully-documented references to the work of others. I understand the
 definition and consequences of plagiarism and acknowledge that the assessor
 of this assignment may, for the purpose of assessing this assignment:
 - Reproduce this assignment and provide a copy to another member of
 academic staff; and/or
 - Communicate a copy of this assignment to a plagiarism checking
 service (which may then retain a copy of this assignment on its
 database for the purpose of future plagiarism checking)
 */
#pragma once
#include <string>
using namespace std;

class ArrayClass {
public:
	ArrayClass();
	~ArrayClass();
	string getFileName();
	void readFile(string file);

	void addTyping();

	const string printArray();
	void setSize(int size);
	int getSize(){return arraySize;};
private:
	void addWord(string word);
	void resetArray();

	string* dArray;
	int arrayLength; //how much is in array
	int arraySize; //how big array is total
};

