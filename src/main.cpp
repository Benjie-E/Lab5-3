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
using namespace std;
static ArrayClass array;
string toLower(string& s) {
	for(char& c:s) {
		c = ::tolower(c);
		};
	return s;
}
void inputType() {
	string test;
	cout << "Would you like to enter words from a file or typing:"<<endl;
label:
	cin >> test;
	if (toLower(test) == "file") {
		array.readFile(array.getFileName());
	}
	else if (toLower(test) == "typing") {
		array.addTyping();
	}
	else {
		cout << "Please enter 'file' or 'typing':";
		goto label;
	}
}
void menu() {
	string test;
	cout <<endl<< "Would you like to:"<<endl\
			<<"1)Create or add to an array"<<endl\
			<<"2)Change the array size"<<endl\
			<<"3)Print Array Information"<<endl\
			<<"4)Exit the program"<<endl;
cin >> test;
cout <<test;
try{
	switch (stoi(test)){
	case 1:
		inputType();
		menu();
		break;
	case 2:
		{cout << "what size"<<endl;
		string size;
		cin >> size;
		array.setSize(stoi(size));}
		menu();
		break;
	case 3:
		cout << "there is space for " << array.getSize() <<" words\n\
				list of words so far:\n"<<array.printArray();
		menu();
		break;
	case 4:
		exit(5);
		break;
	default:
		menu();
		break;
	}
	}catch(...){
		cout << "NOT A NUMBER";
		menu();
	}
}
int main() {
	menu();
}
