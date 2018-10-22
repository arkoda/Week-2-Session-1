//Function prototpyes //FileName: CamelCase.cpp
//Description: 
//Author:
//Date: 02/10/2018

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

	string s;
	int counter = 0;
	cout << "PLease enter a squence of words: ";
	cin >> s;

//s will have the followig properties;
	// its a concatation of one or more words
	//all letters in the first word are lowercase
	//for each of the subsequet words, th first ltter is uppercase and the rest of the letters are lowercase
	
	for (int i = 0; i < s.length(); ++i) {
		char a = s[i];
		if (isupper(a)) {
			++counter;
		}
	}
	cout << "You have entered " << counter << " words" << endl;
		
	return 0;
	}