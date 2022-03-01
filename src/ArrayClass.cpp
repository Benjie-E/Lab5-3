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
#include "ArrayClass.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
static int sizeIncrement{20};

string ArrayClass::getFileName() {
	string file;
	cout << "Type file name:" << endl;
	cin >> file;
	return file;
}

void ArrayClass::resetArray() {
	delete dArray;
	dArray=new string[sizeIncrement];
	arraySize=sizeIncrement;
	arrayLength=0;
}

ArrayClass::ArrayClass() {
	resetArray();
}
ArrayClass::~ArrayClass(){
	delete dArray;
}
void ArrayClass::readFile(string file) {
	ifstream inFile(file);
	if (inFile.good()) {
		string temp;
		while (!inFile.eof()) {
			getline(inFile,temp);
			addWord(temp);
		}
	}else
	{
		cout << "File not found: " << file << endl;
	}
	//cout << printArray();
}
const string ArrayClass::printArray(){
	stringstream buffer;
	for(int i=0;i<arrayLength;i++){
		buffer<<*(dArray+i)<<endl;
	}
	buffer << arrayLength;
	return buffer.str();
}

void ArrayClass::addWord(string word){
	if(arraySize>arrayLength){
		*(dArray+arrayLength++)=word;
	}else{
		setSize(arraySize+sizeIncrement);
		addWord(word);
	}
}
void ArrayClass::setSize(int size) {
	string* temp = new string[size];
	copy(dArray,min(dArray+arrayLength,dArray+size),temp);
	delete dArray;
	dArray=temp;
	if(size<arrayLength)
		arrayLength=size;
	arraySize = size;
}

void ArrayClass::addTyping() {
	cout << "Type words one per line and type quit to finish:" << endl;
	string word;
	do{
		cin >> word;
		addWord(word);
	}while(word!="quit");
}
