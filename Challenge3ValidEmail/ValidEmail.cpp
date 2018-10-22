/*Function prototpyes //FileName: validEmail.cpp
//Description: The email must be formatted correctly, a valid email address contains
[1] a '@' symbol and[2] a '.' period. Additionally, the '.' period must apear after the '@' symbol.
Furthermore, there must be some characters after the '.' */
//Author: Arthur Loginov
//Date: 03/10/2018

#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
	string email;
	bool valid{ 0 };
	
	regex validEmail("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\./\\w+))+");

	while (!valid) {
		//ask the user for a valid email address.
		cout << "Please enter a valid email address: ";
		cin >> email;
		getline(cin, email);
		//if the email is valid, thank them.
		if (regex_match(email, validEmail)) {
			cout << "You have entered a valid email address" << endl;
			valid = true;
		}
		else {    //else ask them to enter a valid email address.
			cout << "Please enter a valid email address: \n";
		}
	}
	return 0;
}