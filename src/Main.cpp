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
#include <iostream>
#include <string>
#include "FileReader.h"
using namespace std;

string toLower(string& s) {
	for(char& c:s) {
		c = ::tolower(c);
		};
	return s;
}
void inputType() {
	string test;
	cout << "Would you like to enter words from a file or typing:";
label:
	cin >> test;
	if (toLower(test) == "file") {

	}
	else if (toLower(test) == "typing") {

	}
	else {
		cout << "Please enter 'file' or typing':";
		goto label;
	}
}
void menu() {
	string test;
	cout << "Would you like to enter words from a file or typing:";
label:
	cin >> test;
	if (toLower(test) == "file") {

	}
	else if (toLower(test) == "typing") {

	}
	else {
		cout << "Please enter 'file' or typing':";
		goto label;
	}
}
int main() {
	inputType();
}
