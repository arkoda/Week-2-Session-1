//Function prototpyes //FileName: CaeserCipher.cpp
//Description:
//Author: Arthur Loginov
//Date: 03/10/2018


#include <iostream>
#include <string>

using namespace std;

int main() {

	string s, encoded_string;
	int k;

	//asking the user to enter a string, and storing the string in variable s. 
	cout << "Please enter a string that you'd like to encrypt: ";
	cin >> s;

	cout << "Please enter the number of letters to rotate: ";
	cin >> k;

	//rotate the given string by a fixed number.
	if (0 <= k <= 100) {
		rotate(s.begin(), s.begin() + k, s.end());
	}
	
	//print the result.
	cout << "Your encrypted message is: " << s << endl;

	return 0;
}

