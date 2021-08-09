#ifndef PLUGBOARD_H
#define PLUGBOARD_H
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Plugboard {
	vector<char> characters;
public:
	vector<char> pairVector1;     //  Vectors whose positions match up 
	vector<char> pairVector2;	  //	to their pair character
	//vector<char> charactersCopy = characters;
	
	//Encrption function for plugboard, switch letter with pair if pair exists
	char encrypt(char IN) {
		char OUT;

		for (int i = 0; i < pairVector1.size(); i++) {
			if (IN == pairVector1[i]) {
				OUT = pairVector2[i];
				break;
			}
			else if (IN == pairVector2[i]) {
				OUT = pairVector1[i];
				break;
			}
			else {
				OUT = IN;
			}
		}

		return OUT;
	}

	//Set character vector  
	void setCharacters() {
		string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		for (int i = 0; i < 26; i++) {
			characters.push_back(alphabet[i]);
		}
	}
	
	//Prompt user and create plugboard connections
	void setPairs() {
		cout << "***** PLEASE SET THE PAIRS FOR THE PLUGBOARD *****\n\n";
		int numPairs = 0; //Keeps track of how many pairs are made so far 
		char temp, temp2; //temporary stores user input
		bool exists = false;	  //keep track if user enters a character not present in the vector 
		bool OK = false;

		while (numPairs < 10) {
			//Prints out the remaining values of the vector 
			for (int i = 0; i < characters.size(); i++) {
				cout << characters[i] << " ";
			}
			cout << " - REMAINING CHARACTERS";

			//Prompt user for pair and store in temp variables 
			cout << "\nEnter the Character for Pair # " << numPairs + 1 << " seperated by a space: ";
			cin >> temp >> temp2;

			//if user enters the same letter twice, like A A
			while (temp == temp2) {
				cout << "\nERROR: RECHECK PAIR INPUT\n";
				cout << "\nEnter the Character for Pair # " << numPairs + 1 << " seperated by a space: ";
				cin >> temp >> temp2;
			}

			//if characters entered exist insert into pair vectors and erase from character vector
			if ((std::find(characters.begin(), characters.end(), temp) != characters.end()) && (std::find(characters.begin(), characters.end(), temp2) != characters.end())) {
				exists = true;
				pairVector1.push_back(temp);
				pairVector2.push_back(temp2);
				for (int i = 0; i < characters.size(); i++) {
					if (characters[i] == temp) {
						characters.erase(characters.begin() + i);
					}
				}
				for (int i = 0; i < characters.size(); i++) {
					if (characters[i] == temp2) {
						characters.erase(characters.begin() + i);
					}
				}
				numPairs++;
			}
			else {
				cout << "\nERROR: RECHECK PAIR INPUT\n";
			}
			cout << "---------------------------------------------------------------------------" << endl;
		}
		//Print out the Pairs 
		cout << "\n***** PAIRS *****\n";
		for (int i = 0; i < 10; i++) {
			cout << "     " << pairVector1[i] << "  -  " << pairVector2[i] << endl;
		}
	}
	
	void clear_pairs() {
		pairVector1.clear();
		pairVector2.clear();
		characters.clear();
	}

};

#endif
