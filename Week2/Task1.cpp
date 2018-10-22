//Function prototpyes //FileName: Task1.cpp
//Description: 
//Author: Arthur Loginov
//Date: 02/10/2018


#include <iostream>
#include <string>

using namespace std;

int main() {

	//Task 1
	string s1;
	string s2;

	cout << "Please enter your first word: ";
	cin >> s1;

	cout << "Please enter your second word: ";
	cin >> s2;

	if (s1 == s2) {

		cout << "This pleases Chuck Norris!" << endl;
	} 
	else {

		cout << "I pity the fool" << endl;
	}

	system("Pause");
	return 0;
}