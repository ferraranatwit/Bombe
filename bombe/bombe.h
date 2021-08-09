#ifndef BOMBE_H
#define BOMBE_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <list>
#include <algorithm>
#include <stdio.h>
#include <cstring>
#include <cmath>   

//Plugboard class for the enigma for Bombe allowing multiple calls for testing PB
class PlugboardForBombe {
public:
	char input[13];
	char output[13];
	char ref[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	int inputed;
	PlugboardForBombe() {
		inputed = 0;
	}
	PlugboardForBombe(char a, char b) {
		inputed = 1;
		input[0] = a;
		output[0] = b;
	}
	PlugboardForBombe(char a, char b, char c, char d) {
		inputed = 2;
		input[0] = a;
		output[0] = b;
		input[1] = c;
		output[1] = d;
	}
	PlugboardForBombe(char a, char b, char c, char d, char e, char f) {
		inputed = 3;
		input[0] = a;
		output[0] = b;
		input[1] = c;
		output[1] = d;
		input[2] = e;
		output[2] = f;
	}
	PlugboardForBombe(char a, char b, char c, char d, char e, char f, char g, char h) {
		inputed = 4;
		input[0] = a;
		output[0] = b;
		input[1] = c;
		output[1] = d;
		input[2] = e;
		output[2] = f;
		input[3] = g;
		output[3] = h;

	}
	PlugboardForBombe(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j) {
		inputed = 5;
		input[0] = a;
		output[0] = b;
		input[1] = c;
		output[1] = d;
		input[2] = e;
		output[2] = f;
		input[3] = g;
		output[3] = h;
		input[4] = i;
		output[4] = j;
	}
	PlugboardForBombe(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l) {
		inputed = 6;
		input[0] = a;
		output[0] = b;
		input[1] = c;
		output[1] = d;
		input[2] = e;
		output[2] = f;
		input[3] = g;
		output[3] = h;
		input[4] = i;
		output[4] = j;
		input[5] = k;
		output[5] = l;
	}
	PlugboardForBombe(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n) {
		inputed = 7;
		input[0] = a;
		output[0] = b;
		input[1] = c;
		output[1] = d;
		input[2] = e;
		output[2] = f;
		input[3] = g;
		output[3] = h;
		input[4] = i;
		output[4] = j;
		input[5] = k;
		output[5] = l;
		input[6] = m;
		output[6] = n;
	}
	PlugboardForBombe(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p) {
		inputed = 8;
		input[0] = a;
		output[0] = b;
		input[1] = c;
		output[1] = d;
		input[2] = e;
		output[2] = f;
		input[3] = g;
		output[3] = h;
		input[4] = i;
		output[4] = j;
		input[5] = k;
		output[5] = l;
		input[6] = m;
		output[6] = n;
		input[7] = o;
		output[7] = p;
	}
	PlugboardForBombe(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p, char q, char r) {
		inputed = 9;
		input[0] = a;
		output[0] = b;
		input[1] = c;
		output[1] = d;
		input[2] = e;
		output[2] = f;
		input[3] = g;
		output[3] = h;
		input[4] = i;
		output[4] = j;
		input[5] = k;
		output[5] = l;
		input[6] = m;
		output[6] = n;
		input[7] = o;
		output[7] = p;
		input[8] = q;
		output[8] = r;
	}
	PlugboardForBombe(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p, char q, char r, char s, char t) {
		inputed = 10;
		input[0] = a;
		output[0] = b;
		input[1] = c;
		output[1] = d;
		input[2] = e;
		output[2] = f;
		input[3] = g;
		output[3] = h;
		input[4] = i;
		output[4] = j;
		input[5] = k;
		output[5] = l;
		input[6] = m;
		output[6] = n;
		input[7] = o;
		output[7] = p;
		input[8] = q;
		output[8] = r;
		input[9] = s;
		output[9] = t;
	}
	PlugboardForBombe(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p, char q, char r, char s, char t, char u, char v) {
		inputed = 11;
		input[0] = a;
		output[0] = b;
		input[1] = c;
		output[1] = d;
		input[2] = e;
		output[2] = f;
		input[3] = g;
		output[3] = h;
		input[4] = i;
		output[4] = j;
		input[5] = k;
		output[5] = l;
		input[6] = m;
		output[6] = n;
		input[7] = o;
		output[7] = p;
		input[8] = q;
		output[8] = r;
		input[9] = s;
		output[9] = t;
		input[10] = u;
		output[10] = v;
	}
	PlugboardForBombe(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p, char q, char r, char s, char t, char u, char v, char w, char x) {
		inputed = 12;
		input[0] = a;
		output[0] = b;
		input[1] = c;
		output[1] = d;
		input[2] = e;
		output[2] = f;
		input[3] = g;
		output[3] = h;
		input[4] = i;
		output[4] = j;
		input[5] = k;
		output[5] = l;
		input[6] = m;
		output[6] = n;
		input[7] = o;
		output[7] = p;
		input[8] = q;
		output[8] = r;
		input[9] = s;
		output[9] = t;
		input[10] = u;
		output[10] = v;
		input[11] = w;
		output[11] = x;
	}
	PlugboardForBombe(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p, char q, char r, char s, char t, char u, char v, char w, char x, char y, char z) {
		inputed = 13;
		input[0] = a;
		output[0] = b;
		input[1] = c;
		output[1] = d;
		input[2] = e;
		output[2] = f;
		input[3] = g;
		output[3] = h;
		input[4] = i;
		output[4] = j;
		input[5] = k;
		output[5] = l;
		input[6] = m;
		output[6] = n;
		input[7] = o;
		output[7] = p;
		input[8] = q;
		output[8] = r;
		input[9] = s;
		output[9] = t;
		input[10] = u;
		output[10] = v;
		input[11] = w;
		output[11] = x;
		input[12] = y;
		output[12] = z;
	}
	~PlugboardForBombe() {

	}
	//printsPB
	void printPB() {
		for (int i = 0; i < inputed; i++) {
			std::cout << input[i] << output[i] << " ";
		}
	}
	//get functions
	char getInput(int pos) {
		return input[pos];
	}
	char getOutput(int pos) {
		return output[pos];
	}
	//set plugboard setting
	void setSetting(int pos, char a, char b) {
		input[pos] = a;
		output[pos] = b;
	}
	//gets the input
	int getInputed() {
		return inputed;
	}
	//reflects one PB char to another
	char reflect(char c) {
		if (inputed == 0) {
			return c;
		}
		for (int i = 0; i < inputed; i++) {
			//std::cout << input[i];
			//std::cout << output[i];
			if (c == input[i]) {
				//std::cout << "test";
				return output[i];
			}
			if (c == output[i]) {
				return input[i];
			}
		}
		//std::cout <<"test2";
		return c;
	}
};
//rotor class
class RotorsForBombe {
public:
	char input[26];
	char output[26];
	int rotorPosition;
	char reflected;
	int arrayPosition;
	int rotorNumber;





	RotorsForBombe() {
		rotorPosition = 0;
	}
	RotorsForBombe(int x) {
		rotorPosition = 0;
		rotorNumber = x;
	}

	~RotorsForBombe() {
	}
	void setRotorNumber(int x) {
		rotorNumber = x;
	}
	void setRotorPosition(int x) {
		rotorPosition = x;
	}

	//////////////////////////////////////////////////////////////////////////
	/* Initializes input and output arrays*/
	//////////////////////////////////////////////////////////////////////////
	void setInputArray(char rotorArr[26]) {
		char alphabet[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
		for (int i = 0; i < 26; i++) {
			input[i] = alphabet[i];
			output[i] = rotorArr[i];
		}
	}

	//////////////////////////////////////////////////////////////////////////
	/* Prints rotor array for testing purposes*/
	//////////////////////////////////////////////////////////////////////////
	void printRotor() {
		//for(int i=0; i <26; i++){
		//	std::cout << input[i];
		//}
		std::cout << std::endl;
		for (int i = 0; i < 26; i++) {
			std::cout << output[i];
		}
	}

	//////////////////////////////////////////////////////////////////////////
	/* returns current rotor position*/
	//////////////////////////////////////////////////////////////////////////
	int getPosition() {
		return rotorPosition;
	}

	int getTurnOver(char x) {
		switch (rotorNumber) {
		case 1:
			return 17;
		case 2:
			return 4;
		case 3:
			return 22;
		case 4:
			return 10;
		case 5:
			return 26;
		case 6:
			return 26;
		case 7:
			return 26;
		default:
			return 0;

		}
	}
	//////////////////////////////////////////////////////////////////////////
	/* increases rotor position, acts as if it spins*/
	//////////////////////////////////////////////////////////////////////////
	void rotorTurn() {
		rotorPosition++;
		if (rotorPosition == 26) {
			rotorPosition = 0;	//sets it back to 1 once it hits 26
		}
	}

	/////////////////////////////////////////////////////////////////////////////////////////
	/* takes the inputed char, and reflects based on which rotor it is for testing purposes*/
	/////////////////////////////////////////////////////////////////////////////////////////
	char reflect(char inputChar) {
		arrayPosition = 0;
		for (int i = 0; i < 26; i++) {
			if (input[i] == inputChar) {
				return output[i];
			}
			arrayPosition++;
		}
		return 0;
	}

	//////////////////////////////////////////////////////////////////////////
	/* does the same backwarsd*/
	//////////////////////////////////////////////////////////////////////////
	char antiReflect(char inputChar) {
		arrayPosition = 0;
		for (int i = 0; i < 26; i++) {
			if (output[i] == inputChar) {
				return input[i];
			}
			arrayPosition++;
		}
		return 0;
	}

	//////////////////////////////////////////////////////////////////////////
	/*			the following get the char and also get the place in array for inputs and outputs	*/
	//////////////////////////////////////////////////////////////////////////
	char getChar(int num) {
		return input[num];
	}
	char getOutChar(int num) {
		return output[num];
	}
	int getRotorNumber() {
		return rotorNumber;
	}
	int getCharSpot(char c) {
		arrayPosition = 0;
		for (int i = 0; i < 26; i++) {
			if (input[i] == c) {
				return arrayPosition;
			}
			arrayPosition++;
		}
		return 0;
	}
	int getOutCharSpot(char c) {
		arrayPosition = 0;
		for (int i = 0; i < 26; i++) {
			if (output[i] == c) {
				return arrayPosition;
			}
			arrayPosition++;
		}
		return 0;
	}




	//////////////////////////////////////////////////////////////////////////
	/* the reflects do the enigma tasks*/
	//////////////////////////////////////////////////////////////////////////
	char firstReflect(char in, int step) {
		int tempNumb;
		char tempChar;
		int i = getCharSpot(in); // O step 6
		tempNumb = i + step; // 0(A) -> 1(B)

		if (tempNumb >= 26) {
			int tempVar = tempNumb % 26;
			tempNumb = 0 + tempVar;
		}

		tempChar = getChar(tempNumb); //1 -> B 
		tempChar = reflect(tempChar); // B -> D
		tempNumb = getCharSpot(tempChar); //D -> 4
		tempNumb = tempNumb - step; //3

		if (tempNumb < 0) {
			tempNumb = (tempNumb) * (-1);
			tempNumb = 26 - tempNumb;
		}

		tempChar = getChar(tempNumb); //3 -> C (A->C)




		return tempChar;
	}
	char finalReflect(char in, int step) {
		int tempNumb;
		char tempChar;
		int i = getCharSpot(in); // E -> (4)
		tempNumb = i + step; //4+1 = 5

		if (tempNumb >= 26) {
			int tempVar = tempNumb % 26;
			tempNumb = 0 + tempVar;
		}

		//std::cout << "testNum 1: " << tempNumb << std::endl;
		tempChar = getChar(tempNumb); //F
		tempChar = antiReflect(tempChar); //C 
		tempNumb = getCharSpot(tempChar); //2
		tempNumb = tempNumb - step; //2-1

		if (tempNumb < 0) {
			tempNumb = (tempNumb) * (-1);
			tempNumb = 26 - tempNumb;
		}

		//std::cout << "testNum 2: " << tempNumb << std::endl;
		tempChar = getChar(tempNumb); //B
		return tempChar;
	}

};

//reflector
class ReflectorForBombe {
private:
	int arrayPosition;
	char refArray[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	char reflectorArray[26] = { 'Y','R','U','H','Q','S','L','D','P','X','N','G','O','K','M','I','E','B','F','Z','C','W','V','J','A','T' };// not final, needs to match enigmas reflector
public:
	ReflectorForBombe() {
	}
	~ReflectorForBombe() {

	}
	char reflect(char in) {
		arrayPosition = 0;
		for (int i = 0; i < 26; i++) {
			if (refArray[i] == in) {
				return reflectorArray[i];
			}
			arrayPosition++;
		}
	}
};
//enigma
class EnigmaForBombe {
public:
	RotorsForBombe* rotorOne;
	RotorsForBombe* rotorTwo;
	RotorsForBombe* rotorThree;
	ReflectorForBombe reflectorB;
	PlugboardForBombe* plugB;
	int tempForRotorsForBombe = 0;
	int arrayPosition = 0;
	int steppedOne = 0;
	int steppedTwo = 0;
	int testNum = 0;
	int steppedThree = 0;
	int inputed = 0;

	//multiple constructors for enigma with diffrent PB settings for testing

	char input[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	EnigmaForBombe() {
		plugB = new PlugboardForBombe();
	}
	EnigmaForBombe(RotorsForBombe* one, RotorsForBombe* two, RotorsForBombe* three) {
		rotorOne = one;
		rotorTwo = two;
		rotorThree = three;
		plugB = new PlugboardForBombe();
	}
	EnigmaForBombe(RotorsForBombe* one, RotorsForBombe* two, RotorsForBombe* three, char a, char b) {
		inputed = 1;
		rotorOne = one;
		rotorTwo = two;
		rotorThree = three;
		plugB = new PlugboardForBombe(a, b);
	}
	EnigmaForBombe(RotorsForBombe* one, RotorsForBombe* two, RotorsForBombe* three, char a, char b, char c, char d) {
		inputed = 2;
		rotorOne = one;
		rotorTwo = two;
		rotorThree = three;
		plugB = new PlugboardForBombe(a, b, c, d);
	}
	EnigmaForBombe(RotorsForBombe* one, RotorsForBombe* two, RotorsForBombe* three, char a, char b, char c, char d, char e, char f) {
		inputed = 3;
		rotorOne = one;
		rotorTwo = two;
		rotorThree = three;
		plugB = new PlugboardForBombe(a, b, c, d, e, f);
	}
	EnigmaForBombe(RotorsForBombe* one, RotorsForBombe* two, RotorsForBombe* three, char a, char b, char c, char d, char e, char f, char g, char h) {
		inputed = 4;
		rotorOne = one;
		rotorTwo = two;
		rotorThree = three;
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h);
	}
	EnigmaForBombe(RotorsForBombe* one, RotorsForBombe* two, RotorsForBombe* three, char a, char b, char c, char d, char e, char f, char g, char h, char i, char j) {
		inputed = 5;
		rotorOne = one;
		rotorTwo = two;
		rotorThree = three;
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j);
	}
	EnigmaForBombe(RotorsForBombe* one, RotorsForBombe* two, RotorsForBombe* three, char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l) {
		inputed = 6;
		rotorOne = one;
		rotorTwo = two;
		rotorThree = three;
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j, k, l);
	}
	EnigmaForBombe(RotorsForBombe* one, RotorsForBombe* two, RotorsForBombe* three, char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n) {
		inputed = 7;
		rotorOne = one;
		rotorTwo = two;
		rotorThree = three;
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j, k, l, m, n);
	}
	EnigmaForBombe(RotorsForBombe* one, RotorsForBombe* two, RotorsForBombe* three, char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p) {
		inputed = 8;
		rotorOne = one;
		rotorTwo = two;
		rotorThree = three;
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
	}
	EnigmaForBombe(RotorsForBombe* one, RotorsForBombe* two, RotorsForBombe* three, char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p, char q, char r) {
		inputed = 9;
		rotorOne = one;
		rotorTwo = two;
		rotorThree = three;
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r);
	}
	EnigmaForBombe(RotorsForBombe* one, RotorsForBombe* two, RotorsForBombe* three, char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p, char q, char r, char s, char t) {
		inputed = 10;
		rotorOne = one;
		rotorTwo = two;
		rotorThree = three;
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t);
	}
	EnigmaForBombe(RotorsForBombe* one, RotorsForBombe* two, RotorsForBombe* three, char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p, char q, char r, char s, char t, char u, char v) {
		inputed = 11;
		rotorOne = one;
		rotorTwo = two;
		rotorThree = three;
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v);
	}
	EnigmaForBombe(RotorsForBombe* one, RotorsForBombe* two, RotorsForBombe* three, char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p, char q, char r, char s, char t, char u, char v, char w, char x) {
		inputed = 12;
		rotorOne = one;
		rotorTwo = two;
		rotorThree = three;
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x);
	}
	EnigmaForBombe(RotorsForBombe* one, RotorsForBombe* two, RotorsForBombe* three, char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p, char q, char r, char s, char t, char u, char v, char w, char x, char y, char z) {
		inputed = 13;
		rotorOne = one;
		rotorTwo = two;
		rotorThree = three;
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z);
	}
	~EnigmaForBombe() {

	}
	void setPB(char a, char b) {
		plugB = new PlugboardForBombe(a, b);
	}
	void setPB(char a, char b, char c, char d) {
		plugB = new PlugboardForBombe(a, b, c, d);
	}
	void setPB(char a, char b, char c, char d, char e, char f) {
		plugB = new PlugboardForBombe(a, b, c, d, e, f);
	}
	void setPB(char a, char b, char c, char d, char e, char f, char g, char h) {
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h);
	}
	void setPB(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j) {
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j);
	}
	void setPB(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l) {
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j, k, l);
	}
	void setPB(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n) {
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j, k, l, m, n);
	}
	void setPB(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p) {
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
	}
	void setPB(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p, char q, char r) {
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r);
	}
	void setPB(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p, char q, char r, char s, char t) {
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t);
	}
	void setPB(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p, char q, char r, char s, char t, char u, char v) {
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v);
	}
	void setPB(RotorsForBombe* one, RotorsForBombe* two, RotorsForBombe* three, char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p, char q, char r, char s, char t, char u, char v, char w, char x) {
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x);
	}
	void setPB(char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p, char q, char r, char s, char t, char u, char v, char w, char x, char y, char z) {
		plugB = new PlugboardForBombe(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z);
	}
	void printAllRotorsForBombe() {
		rotorOne->printRotor();
		rotorTwo->printRotor();
		rotorThree->printRotor();
	}
	//sets rotors
	void setRotorsForBombe(RotorsForBombe* one, RotorsForBombe* two, RotorsForBombe* three) {
		rotorOne = one;
		rotorTwo = two;
		rotorThree = three;
	}
	//gets the step
	void findStep(int one, int two, int three) {
		steppedOne = one;
		steppedTwo = two;
		steppedThree = three;
		//std::cout << std::endl << steppedOne << std::endl << steppedTwo<< std::endl << steppedThree << std::endl << std::endl;	
	}
	//set and get functions
	void setRotorsForBombePositions(int x, int y, int z) {
		rotorOne->setRotorPosition(x);
		rotorTwo->setRotorPosition(y);
		rotorThree->setRotorPosition(z);
	}


	int getRotorOneNumb() {
		int tempN1 = rotorOne->getRotorNumber();
		return tempN1;
	}
	int getRotorTwoNumb() {
		int tempN2 = rotorTwo->getRotorNumber();
		return tempN2;
	}
	int getRotorThreeNumb() {
		int tempN3 = rotorThree->getRotorNumber();
		return tempN3;
	}

	//prints rotor numbers
	void printRotorNumbers() {
		std::string r1;
		std::string r2;
		std::string r3;
		switch (rotorOne->getRotorNumber()) {
		case 1:
			r1 = "I";
			break;
		case 2:
			r1 = "II";
			break;
		case 3:
			r1 = "III";
			break;
		case 4:
			r1 = "IV";
			break;
		case 5:
			r1 = "V";
			break;
		case 6:
			r1 = "VI";
			break;
		case 7:
			r1 = "VII";
			break;
		case 8:
			r1 = "VIII";
			break;
		}
		switch (rotorTwo->getRotorNumber()) {
		case 1:
			r2 = "I";
			break;
		case 2:
			r2 = "II";
			break;
		case 3:
			r2 = "III";
			break;
		case 4:
			r2 = "IV";
			break;
		case 5:
			r2 = "V";
			break;
		case 6:
			r2 = "VI";
			break;
		case 7:
			r2 = "VII";
			break;
		case 8:
			r2 = "VIII";
			break;
		}
		switch (rotorThree->getRotorNumber()) {
		case 1:
			r3 = "I";
			break;
		case 2:
			r3 = "II";
			break;
		case 3:
			r3 = "III";
			break;
		case 4:
			r3 = "IV";
			break;
		case 5:
			r3 = "V";
			break;
		case 6:
			r3 = "VI";
			break;
		case 7:
			r3 = "VII";
			break;
		case 8:
			r3 = "VIII";
			break;
		}
		std::cout << r1 << " " << r2 << " " << r3 << std::endl;
	}
	//////////////////////////////////////////////////////////////////////////
	/* take input and reflects final output*/
	//////////////////////////////////////////////////////////////////////////
	char inOut(char in) {
		rotorThree->rotorTurn();
		if (rotorThree->getPosition() == rotorThree->getTurnOver(rotorThree->getRotorNumber())) {
			rotorTwo->rotorTurn();
		}
		else if (rotorTwo->getPosition() == rotorTwo->getTurnOver(rotorTwo->getRotorNumber())) {
			rotorTwo->rotorTurn();
			rotorOne->rotorTurn();
		}


		//std::cout << rotorThree->getTurnOver(rotorThree->getRotorNumber()) <<std::endl;
		//std::cout << rotorTwo->getPosition() + 1 <<std::endl;
		//std::cout << rotorTwo->getTurnOver(rotorTwo->getRotorNumber()) <<std::endl;



		//step will eventually be looped below in runRotorsForBombe
		findStep(rotorOne->getPosition(), rotorTwo->getPosition(), rotorThree->getPosition());
		char tempChar;
		///////////////////////////////////////////////
		/* to see all the steps uncomment couts below*/
		///////////////////////////////////////////////
		tempChar = plugB->reflect(in);
		//std::cout << "PB: " << tempChar << std::endl;
		tempChar = rotorThree->firstReflect(tempChar, steppedThree);
		//std::cout << "First Reflect: " << tempChar << std::endl;
		tempChar = rotorTwo->firstReflect(tempChar, steppedTwo);
		//std::cout << "Second Reflect: " << tempChar << std::endl;
		tempChar = rotorOne->firstReflect(tempChar, steppedOne);
		//std::cout << "Third Reflect: " << tempChar << std::endl;
		tempChar = reflectorB.reflect(tempChar);
		//std::cout<< std::endl<< "ReflectorForBombe: " << tempChar << std::endl <<std::endl;
		tempChar = rotorOne->finalReflect(tempChar, steppedOne);
		//std::cout<< "First AntiReflect: " << tempChar << std::endl;
		tempChar = rotorTwo->finalReflect(tempChar, steppedTwo);
		//std::cout<< "Second AntiReflect: " << tempChar << std::endl;
		tempChar = rotorThree->finalReflect(tempChar, steppedThree);
		//std::cout<< "Third AntiReflect: " << tempChar << std::endl;
		tempChar = plugB->reflect(tempChar);
		//std::cout << "PB: " << tempChar << std::endl;

		return tempChar;
	}



	//////////////////////////////////////////////////////////////////////////
	/* Runs through every combination of the rotor wheels*/
	//////////////////////////////////////////////////////////////////////////
	void runRotorsForBombe() {
		for (int i = 0; i < 26; i++) {
			for (int j = 0; j < 26; j++) {
				for (int k = 0; k < 26; k++) {

					// prints ever position of the rotor making sure it runs through every possiblity
					std::cout << rotorOne->getPosition() << " ";
					std::cout << rotorTwo->getPosition() << " ";
					std::cout << rotorThree->getPosition() << std::endl;
					rotorThree->rotorTurn();

					//Here is where each rotor setting would be tested
					//testRotorPosition()

				}
				//Rotor 2

				rotorTwo->rotorTurn();
			}
			//Rotor 1

			rotorOne->rotorTurn();
		}
	}

	void testRotorPosition() {
		//algo to check current rotor settings and determine POSSIBLE plugboard settings
	}
	void initialSettings() {
		rotorOne->setRotorPosition(0);
		rotorTwo->setRotorPosition(0);
		rotorThree->setRotorPosition(0);
	}
};

//each enigma settings is a guess

class Guess {
public:
	int rotorOneC;
	int rotorTwoC;
	int rotorThreeC;
	int rotorOneP;
	int rotorTwoP;
	int rotorThreeP;
	std::string ogMsg;
	std::string msg;
	double ioc;
	std::string pairOne, pairTwo;
	double distanceIOC;
	int noOfTrigrams;
	char input[13];
	char output[13];
	int inputed;
	double sortVar;
	Guess() {
		inputed = 0;
		noOfTrigrams = 0;

	}
	Guess(int c1, int c2, int c3, int p1, int p2, int p3, std::string s, double i, std::string og) {
		rotorOneC = c1;
		inputed = 0;
		rotorTwoC = c2;
		rotorThreeC = c3;
		rotorOneP = p1;
		rotorTwoP = p2;
		rotorThreeP = p3;
		msg = s;
		ogMsg = og;
		noOfTrigrams = 0;
		ioc = i;

	}
	~Guess() {

	}
	int getNoOfTrigrams() {
		return noOfTrigrams;
	}
	std::string printRotorNum(int x) {
		std::string r1;
		switch (x) {
		case 1:
			r1 = "I";
			break;
		case 2:
			r1 = "II";
			break;
		case 3:
			r1 = "III";
			break;
		case 4:
			r1 = "IV";
			break;
		case 5:
			r1 = "V";
			break;
		case 6:
			r1 = "VI";
			break;
		case 7:
			r1 = "VII";
			break;
		case 8:
			r1 = "VIII";
			break;
			return r1;
		}
	}
	void setAll(int c1, int c2, int c3, int p1, int p2, int p3, std::string s, double i, std::string og) {
		rotorOneC = c1;
		rotorTwoC = c2;
		ogMsg = og;
		rotorThreeC = c3;
		rotorOneP = p1;
		noOfTrigrams = 0;
		rotorTwoP = p2;
		rotorThreeP = p3;
		msg = s;
		ioc = i;
		//find IOC
		if (ioc > 0.0667) {
			distanceIOC = ioc - 0.0667;
		}
		else if (ioc < 0.0667) {
			distanceIOC = .0667 - ioc;
		}
		else {
			distanceIOC = 0;
		}
		//finds number of trigrams
		for (int i = 0; i < msg.length(); i++) {
			if ((msg[i] == 'T' && msg[i + 1] == 'H' && msg[i + 2] == 'E') ||
				(msg[i] == 'A' && msg[i + 1] == 'N' && msg[i + 2] == 'D') ||
				(msg[i] == 'H' && msg[i + 1] == 'E' && msg[i + 2] == 'R') ||
				(msg[i] == 'O' && msg[i + 1] == 'U' && msg[i + 2] == 'T') ||
				(msg[i] == 'D' && msg[i + 1] == 'A' && msg[i + 2] == 'Y') ||
				(msg[i] == 'I' && msg[i + 1] == 'C' && msg[i + 2] == 'E') ||
				(msg[i] == 'T' && msg[i + 1] == 'H' && msg[i + 2] == 'A') ||
				(msg[i] == 'I' && msg[i + 1] == 'N' && msg[i + 2] == 'G') ||
				(msg[i] == 'F' && msg[i + 1] == 'O' && msg[i + 2] == 'R') ||
				(msg[i] == 'I' && msg[i + 1] == 'O' && msg[i + 2] == 'N') ||
				(msg[i] == 'N' && msg[i + 1] == 'C' && msg[i + 2] == 'E') ||
				(msg[i] == 'W' && msg[i + 1] == 'E' && msg[i + 2] == 'A') ||
				(msg[i] == 'H' && msg[i + 1] == 'A' && msg[i + 2] == 'S')) {
				noOfTrigrams = noOfTrigrams + 1;
			}
		}
		sortVar = noOfTrigrams - distanceIOC;
		//test
	}
	int getRotorOneC() {
		return rotorOneC;
	}
	int getRotorTwoC() {
		return rotorTwoC;
	}
	double getSortVar() {
		return sortVar;
	}
	int getRotorThreeC() {
		return rotorThreeC;
	}
	int getRotorOneP() {
		return rotorOneP;
	}
	int getRotorTwoP() {
		return rotorTwoP;
	}
	int getRotorThreeP() {
		return rotorThreeP;
	}
	void printPB() {
		for (int i = 0; i < inputed; i++) {
			std::cout << input[i] << output[i] << " ";
		}
	}
	//returns PB as string
	std::string getPBString() {
		std::string temp = "";
		char temp2 = ' ';
		for (int i = 0; i < inputed; i++) {
			temp.push_back(input[i]);
			temp.push_back(output[i]);
			temp.push_back(temp2);
		}
		return temp;
	}
	void printAll() {
		std::cout << printRotorNum(rotorOneC) << " " << printRotorNum(rotorTwoC) << " " << printRotorNum(rotorThreeC) << " | " << rotorOneP << " " << rotorTwoP << " " << rotorThreeP << " | " << ioc << " | " << msg;
		if (inputed != 0) {
			for (int i = 0; i < 1; i++) {
				std::cout << input[i] << output[i] << " ";
			}
		}
		else {

		}
		std::cout << std::endl;

	}
	double getIoc() {
		return ioc;
	}
	std::string getMsg() {
		return msg;
	}
	void setSetting(int pos, char a, char b) {
		std::string temp = "";
		temp.push_back(a);
		temp.push_back(b);
		input[pos] = a;
		output[pos] = b;
		switch (pos) {
		case 0:
			pairOne = temp;
			break;
		case 1:
			pairTwo = temp;
			break;
		}
	}
};
//comment
class Bombe {

public:
	char rotorOne[26] = { 'E','K','M','F','L','G','D','Q','V','Z','N','T','O','W','Y','H','X','U','S','P','A','I','B','R','C','J' };
	char rotorTwo[26] = { 'A','J','D','K','S','I','R','U','X','B','L','H','W','T','M','C','Q','G','Z','N','P','Y','F','V','O','E' };
	char rotorThree[26] = { 'B','D','F','H','J','L','C','P','R','T','X','V','Z','N','Y','E','I','W','G','A','K','M','U','S','Q','O' };
	char rotorFour[26] = { 'E','S','O','V','P','Z','J','A','Y','Q','U','I','R','H','X','L','N','F','T','G','K','D','C','M','W','B' };
	char rotorFive[26] = { 'V','Z','B','R','G','I','T','Y','U','P','S','D','N','H','L','X','A','W','M','J','Q','O','F','E','C','K' };
	char rotorSix[26] = { 'J','P','G','V','O','U','M','F','Y','Q','B','E','N','H','Z','R','D','K','A','S','X','L','I','C','T','W' };
	char rotorSeven[26] = { 'N','Z','J','H','G','R','C','X','M','Y','S','W','B','O','U','F','A','I','V','L','P','E','K','Q','D','T' };
	char rotorEight[26] = { 'F','K','Q','H','T','L','X','O','C','B','J','S','P','D','Z','R','A','M','E','W','N','I','U','Y','G','V' };
	EnigmaForBombe enArr[55];
	EnigmaForBombe theOne;
	std::string theString;
	int test1;
	int test2;
	int test3;
	//lists for each plugboard guess
	std::list<Guess> veryInitialList;
	std::list<Guess> initialList;
	std::list<Guess> initialListNarrow;
	std::list<Guess> initialListSorted;
	std::list<Guess> initialListPlugboardForBombe;
	std::list<Guess> initialListPlugboardForBombeFirst;
	std::list<Guess> initialListPlugboardForBombeSecond;
	std::list<Guess> initialListPlugboardForBombeThird;
	std::list<Guess> initialListPlugboardForBombeFour;
	std::list<Guess> initialListPlugboardForBombeFive;
	std::list<Guess> initialListPlugboardForBombeSix;
	std::list<Guess> initialListPlugboardForBombeSeven;
	std::list<Guess> initialListPlugboardForBombeEight;
	std::list<Guess> initialListPlugboardForBombeNine;
	std::list<Guess> initialListPlugboardForBombeOneZero;
	std::list<Guess> initialListPlugboardForBombeOneOne;
	std::list<Guess> initialListPlugboardForBombeOneTwo;
	std::list<Guess> initialListPlugboardForBombeOneThree;
	std::list<Guess> plugboardSorted;
	std::list<Guess> plugBoardFirstSorted;
	std::list<Guess> plugBoardSecondSorted;
	std::list<Guess> plugBoardThirdSorted;
	std::list<Guess> plugBoardFourSorted;
	std::list<Guess> plugBoardFiveSorted;
	std::list<Guess> plugBoardSixSorted;
	std::list<Guess> plugBoardSevenSorted;
	std::list<Guess> plugBoardEightSorted;
	std::list<Guess> plugBoardNineSorted;
	std::list<Guess> plugBoardOneZeroSorted;
	std::list<Guess> plugBoardOneOneSorted;
	std::list<Guess> plugBoardOneTwoSorted;
	std::list<Guess> plugBoardOneThreeSorted;
	std::vector<std::string> possibleCribForMenu;
	std::vector<std::string> possibleMSGForMenu;

	Bombe() {
		//rotorI->setInputArray(rotorOne);
		//rotorII->setInputArray(rotorTwo);
		//rotorIII->setInputArray(rotorThree);

		//RotorsForBombe *rotorO = new RotorsForBombe();
		//RotorsForBombe *rotorT = new RotorsForBombe();
		//RotorsForBombe *rotorTH = new RotorsForBombe();


		///////////////////////////////////////////////////////////////////////////////////////////////////////////
		/*the code below takes the array of 55 enigmas, and load them with all possible rotor combinations*/
		//////////////////////////////////////////////////////////////////////////////////////////////////////////


		//reimplemented code from here https://stackoverflow.com/questions/12991758/creating-all-possible-k-combinations-of-n-items-in-c
		//in order to do the 3 out of 8 combinations

		int N = 8;
		int K = 3;
		int tempVar = 0;
		int testTotal = 0;
		std::string bitmask(K, 1); // K leading 1's
		bitmask.resize(N, 0); // N-K trailing 0's
		// print integers and permute bitmask
		RotorsForBombe* rotorO1 = new RotorsForBombe();
		RotorsForBombe* rotorT1 = new RotorsForBombe();
		RotorsForBombe* rotorTH1 = new RotorsForBombe();
		do {
			RotorsForBombe* rotorO = new RotorsForBombe();
			RotorsForBombe* rotorT = new RotorsForBombe();
			RotorsForBombe* rotorTH = new RotorsForBombe();


			//std::cout << testTotal << ": ";
			for (int i = 0; i < N; ++i) // [0..N-1] integers
			{
				if (bitmask[i]) {
					//std::cout << " " << i;
					if (tempVar == 0) {
						switch (i) {
						case 0:
							//std::cout << " " << i;
							rotorO->setInputArray(rotorOne);
							rotorO->setRotorNumber(1);
							rotorO1->setInputArray(rotorOne);
							rotorO1->setRotorNumber(1);
							tempVar++;
							break;
						case 1:
							//std::cout << " " << i;
							rotorO->setInputArray(rotorTwo);
							rotorO->setRotorNumber(2);
							tempVar++;
							break;
						case 2:
							// std::cout << " " << i;
							rotorO->setInputArray(rotorThree);
							rotorO->setRotorNumber(3);
							tempVar++;
							break;
						case 3:
							// std::cout << " " << i;
							rotorO->setInputArray(rotorFour);
							rotorO->setRotorNumber(4);
							tempVar++;
							break;
						case 4:
							//std::cout << " " << i;
							rotorO->setInputArray(rotorFive);
							rotorO->setRotorNumber(5);
							tempVar++;
							break;
						case 5:
							//std::cout << " " << i;
							rotorO->setInputArray(rotorSix);
							rotorO->setRotorNumber(6);
							tempVar++;
							break;
						case 6:
							//std::cout << " " << i;
							rotorO->setInputArray(rotorSeven);
							rotorO->setRotorNumber(7);
							tempVar++;
							break;
						case 7:
							//std::cout << " " << i;
							rotorO->setInputArray(rotorEight);
							rotorO->setRotorNumber(8);
							tempVar++;
							break;
						}
					}
					else if (tempVar == 1) {
						switch (i) {
						case 0:
							//std::cout << " " << i;
							rotorT->setInputArray(rotorOne);
							rotorT->setRotorNumber(1);
							tempVar++;
							break;
						case 1:
							//std::cout << " " << i;
							rotorT->setInputArray(rotorTwo);
							rotorT->setRotorNumber(2);
							rotorT1->setInputArray(rotorTwo);
							rotorT1->setRotorNumber(2);
							tempVar++;
							break;
						case 2:
							//std::cout << " " << i;
							rotorT->setInputArray(rotorThree);
							rotorT->setRotorNumber(3);
							tempVar++;
							break;
						case 3:
							//std::cout << " " << i;
							rotorT->setInputArray(rotorFour);
							rotorT->setRotorNumber(4);
							tempVar++;
							break;
						case 4:
							//std::cout << " " << i;
							rotorT->setInputArray(rotorFive);
							rotorT->setRotorNumber(5);
							tempVar++;
							break;
						case 5:
							//std::cout << " " << i;
							rotorT->setInputArray(rotorSix);
							rotorT->setRotorNumber(6);
							tempVar++;
							break;
						case 6:
							//std::cout << " " << i;
							rotorT->setInputArray(rotorSeven);
							rotorT->setRotorNumber(7);
							tempVar++;
							break;
						case 7:
							//std::cout << " " << i;
							rotorT->setInputArray(rotorEight);
							rotorT->setRotorNumber(8);
							tempVar++;
							break;
						}
					}
					else if (tempVar == 2) {
						switch (i) {
						case 0:
							//std::cout << " " << i;
							rotorTH->setInputArray(rotorOne);
							rotorTH->setRotorNumber(1);
							tempVar = 0;
							break;
						case 1:
							//std::cout << " " << i;
							rotorTH->setInputArray(rotorTwo);
							rotorTH->setRotorNumber(2);
							tempVar = 0;
							break;
						case 2:
							//std::cout << " " << i;
							rotorTH->setInputArray(rotorThree);
							rotorTH->setRotorNumber(3);
							rotorTH1->setInputArray(rotorThree);
							rotorTH1->setRotorNumber(3);
							tempVar = 0;
							break;
						case 3:
							//std::cout << " " << i;
							rotorTH->setInputArray(rotorFour);
							rotorTH->setRotorNumber(4);
							tempVar = 0;
							break;
						case 4:
							//std::cout << " " << i;
							rotorTH->setInputArray(rotorFive);
							rotorTH->setRotorNumber(5);
							tempVar = 0;
							break;
						case 5:
							//std::cout << " " << i;
							rotorTH->setInputArray(rotorSix);
							rotorTH->setRotorNumber(6);
							tempVar = 0;
							break;
						case 6:
							//std::cout << " " << i;
							rotorTH->setInputArray(rotorSeven);
							rotorTH->setRotorNumber(7);
							tempVar = 0;
							break;
						case 7:
							//std::cout << " " << i;
							rotorTH->setInputArray(rotorEight);
							rotorTH->setRotorNumber(8);
							tempVar = 0;
							break;
						}
					}


				}
			}
			//std::cout << std::endl;
			//rotorO->printRotor();
			//rotorT->printRotor();
		   // rotorTH->printRotor();
			//std::cout << std::endl;
		   // std::cout << std::endl;
			enArr[testTotal].setRotorsForBombe(rotorO, rotorT, rotorTH);


			//enArray[testTotal]->setRotorsForBombe(rotorI,rotorII,rotorIII);

			testTotal++;
		} while (std::prev_permutation(bitmask.begin(), bitmask.end()));

		theOne.setRotorsForBombe(rotorO1, rotorT1, rotorTH1);



		///////////////////////////////////////////////////////////////////////////////////////////////////////////
		/* for now the algo is only for one rotor setting */
		//////////////////////////////////////////////////////////////////////////////////////////////////////////

		//get encrypted msg from user
		//using WEATHERREPORT as the crib create menu


		//possibleEncryptions
	}
	~Bombe() {

	}

	std::string printRotorNum(int x) {
		std::string r1;
		switch (x) {
		case 1:
			r1 = "I";
			break;
		case 2:
			r1 = "II";
			break;
		case 3:
			r1 = "III";
			break;
		case 4:
			r1 = "IV";
			break;
		case 5:
			r1 = "V";
			break;
		case 6:
			r1 = "VI";
			break;
		case 7:
			r1 = "VII";
			break;
		case 8:
			r1 = "VIII";
			break;
			return r1;
		}
	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	/* This tests if msg i == crib i*/
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
	int testPossibleEncryption(std::string msg, std::string crib) {
		int togBit = 0;
		for (int i = 0; i < crib.length(); i++) {
			if (crib[i] == msg[i]) {
				togBit = 1;
			}
			if (crib[i] == crib[i + 1]) {
				if (msg[i] == msg[i + 1]) {
					togBit = 1;
				}
			}
		}
		if (togBit == 1) {
			return 0;
		}
		else {
			return 1;
		}
	}
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	/* runs through the test possb encrypt putting all possible in list*/
	//////////////////////////////////////////////////////////////////////////////////////////////////////////
	void checkPossible(std::string msg, std::string crib) {
		int compareTest = 0;
		//for(int j = 0;j < msg.length(); j++){
		for (int i = 0; crib.length() <= msg.length(); i++) {
			//std::cout << std::endl << msg << std::endl;
			//std::cout << crib << std::endl;
			if (testPossibleEncryption(msg, crib) == 1) {
				//msg.erase(msg.begin());
				//add msg, and crib up to crib[msg.length] to possible encryptions
				//std::cout << std::endl << msg << std::endl;

				std::string tempStr = msg;
				tempStr.erase(crib.length(), msg.length());
				std::cout << std::endl << tempStr << std::endl;
				std::cout << crib << std::endl;
				possibleMSGForMenu.push_back(tempStr);



			}
			else {
			}
			msg.erase(msg.begin());
		}
		//}


	}
	//finds the Index of coincidence
	double IoC(std::string s) {
		double topIC = 0;
		double botIC = 0;
		double IC = 0;
		int intArr[27] = { 0 };
		for (int i = 0; i < s.length(); i++) {
			switch (s[i]) {
			case 'A':
				intArr[1]++;
				break;
			case 'B':
				intArr[2]++;
				break;
			case 'C':
				intArr[3]++;
				break;
			case 'D':
				intArr[4]++;
				break;
			case 'E':
				intArr[5]++;
				break;
			case 'F':
				intArr[6]++;
				break;
			case 'G':
				intArr[7]++;
				break;
			case 'H':
				intArr[8]++;
				break;
			case 'I':
				intArr[9]++;
				break;
			case 'J':
				intArr[10]++;
				break;
			case 'K':
				intArr[11]++;
				break;
			case 'L':
				intArr[12]++;
				break;
			case 'M':
				intArr[13]++;
				break;
			case 'N':
				intArr[14]++;
				break;
			case 'O':
				intArr[15]++;
				break;
			case 'P':
				intArr[16]++;
				break;
			case 'Q':
				intArr[17]++;
				break;
			case 'R':
				intArr[18]++;
				break;
			case 'S':
				intArr[19]++;
				break;
			case 'T':
				intArr[20]++;
				break;
			case 'U':
				intArr[21]++;
				break;
			case 'V':
				intArr[22]++;
				break;
			case 'W':
				intArr[23]++;
				break;
			case 'X':
				intArr[24]++;
				break;
			case 'Y':
				intArr[25]++;
				break;
			case 'Z':
				intArr[26]++;
				break;
			default:
				intArr[0]++;
				break;
			}
		}


		for (int i = 1; i <= 26; i++) {
			if (intArr[i] == 0) {

			}
			else {
				topIC += intArr[i] * (intArr[i] - 1);
			}
			//std::cout << intArr[i] << std::endl;
		}
		for (int i = 1; i <= 26; i++) {
			botIC += intArr[i];
			//std::cout << intArr[i] << std::endl;
		}
		IC = topIC / (botIC * (botIC - 1));
		return IC;
	}
	//finds best combination
	void getBestCombination(EnigmaForBombe e, std::string s) {
		std::string test;

		double tempIOC;
		e.initialSettings();

		test = "";
		for (int i = 0; i < s.length(); i++) {
			test.push_back(e.inOut(s[i]));
		}
		tempIOC = IoC(test);

		int tempNum1 = e.getRotorOneNumb();
		int tempNum2 = e.getRotorTwoNumb();
		int tempNum3 = e.getRotorThreeNumb();

		Guess testTwo;
		testTwo.setAll(tempNum1, tempNum2, tempNum3, 0, 0, 0, test, tempIOC, s);

		veryInitialList.push_back(testTwo);




	}


	//test rotor Combinations

	void testRotorCombination(EnigmaForBombe e, std::string s) {
		std::string test;
		static int count = 0;

		double tempIOC;
		e.initialSettings();
		for (int x = 0; x <= 25; x++) {
			for (int y = 0; y <= 25; y++) {
				for (int z = 0; z <= 25; z++) {
					test = "";
					e.setRotorsForBombePositions(x, y, z);
					for (int i = 0; i < s.length(); i++) {
						test.push_back(e.inOut(s[i]));
					}
					tempIOC = IoC(test);

					int tempNum1 = e.getRotorOneNumb();
					int tempNum2 = e.getRotorTwoNumb();
					int tempNum3 = e.getRotorThreeNumb();

					Guess testTwo;
					testTwo.setAll(tempNum1, tempNum2, tempNum3, x, y, z, test, tempIOC, s);

					initialList.push_back(testTwo);

				}
			}
		}
	}
	//sorts the list
	void sortLists(std::list<Guess>& l, std::list<Guess>& o, int x) {
		/*
		std::cout << l.size();
		int countT = 0;
		for (std::list<Guess>::iterator it=l.begin(); it != l.end(); ++it){
			o.push_back(*it);
			countT++;
			if(countT == 100){
				break;
			}
		}
		*/

		for (int i = 0; i < x; i++) {
			std::list<Guess>::iterator maxGuess = l.begin();
			for (std::list<Guess>::iterator it = l.begin(); it != l.end(); ++it) {
				if ((it->sortVar > maxGuess->sortVar)) {
					maxGuess = it;
				}//else if((it->distanceIOC < maxGuess->distanceIOC)){
				//	maxGuess = it;
				//}
			}
			o.push_back(*maxGuess);
			l.erase(maxGuess);

		}

	}
	void sortListsIOC(std::list<Guess>& l, std::list<Guess>& o, int x) {
		/*
		std::cout << l.size();
		int countT = 0;
		for (std::list<Guess>::iterator it=l.begin(); it != l.end(); ++it){
			o.push_back(*it);
			countT++;
			if(countT == 100){
				break;
			}
		}
		*/

		for (int i = 0; i < x; i++) {
			std::list<Guess>::iterator maxGuess2 = l.begin();
			for (std::list<Guess>::iterator it = l.begin(); it != l.end(); ++it) {
				if ((it->distanceIOC < maxGuess2->distanceIOC)) {
					maxGuess2 = it;
				}//else if((it->distanceIOC < maxGuess->distanceIOC)){
				//	maxGuess = it;
				//}
			}
			o.push_back(*maxGuess2);
			l.erase(maxGuess2);

		}

	}

	//Runs through all the Plugboard combinations, and sorts through each iteration. tried using both recurssion and interherence and couldnt get the switch cases to be modular,
	//everytime i created a function for them they

	void testRotorCombinationPB() {
		//sortLists();

		int testInt = 0;

		sortLists(initialListNarrow, initialListSorted, 5000);
		std::cout << "Running through PB settings: " << std::endl;

		for (std::list<Guess>::iterator it = initialListSorted.begin(); it != initialListSorted.end(); ++it) {
			EnigmaForBombe tempE;
			RotorsForBombe* r1Temp = new RotorsForBombe();
			RotorsForBombe* r2Temp = new RotorsForBombe();
			RotorsForBombe* r3Temp = new RotorsForBombe();
			int p1 = it->rotorOneP;
			int p2 = it->rotorTwoP;
			int p3 = it->rotorThreeP;
			int tempNum1 = it->rotorOneC;
			int tempNum2 = it->rotorTwoC;
			int tempNum3 = it->rotorThreeC;
			std::string MSG = it->msg;
			std::string ogMsg = it->ogMsg;
			char rotorOne[26] = { 'E','K','M','F','L','G','D','Q','V','Z','N','T','O','W','Y','H','X','U','S','P','A','I','B','R','C','J' };
			char rotorTwo[26] = { 'A','J','D','K','S','I','R','U','X','B','L','H','W','T','M','C','Q','G','Z','N','P','Y','F','V','O','E' };
			char rotorThree[26] = { 'B','D','F','H','J','L','C','P','R','T','X','V','Z','N','Y','E','I','W','G','A','K','M','U','S','Q','O' };
			char rotorFour[26] = { 'E','S','O','V','P','Z','J','A','Y','Q','U','I','R','H','X','L','N','F','T','G','K','D','C','M','W','B' };
			char rotorFive[26] = { 'V','Z','B','R','G','I','T','Y','U','P','S','D','N','H','L','X','A','W','M','J','Q','O','F','E','C','K' };
			char rotorSix[26] = { 'J','P','G','V','O','U','M','F','Y','Q','B','E','N','H','Z','R','D','K','A','S','X','L','I','C','T','W' };
			char rotorSeven[26] = { 'N','Z','J','H','G','R','C','X','M','Y','S','W','B','O','U','F','A','I','V','L','P','E','K','Q','D','T' };
			char rotorEight[26] = { 'F','K','Q','H','T','L','X','O','C','B','J','S','P','D','Z','R','A','M','E','W','N','I','U','Y','G','V' };

			switch (it->rotorOneC) {
			case 1:
				r1Temp->setInputArray(rotorOne);
				r1Temp->setRotorNumber(1);
				break;
			case 2:
				r1Temp->setInputArray(rotorTwo);
				r1Temp->setRotorNumber(2);
				break;
			case 3:
				r1Temp->setInputArray(rotorThree);
				r1Temp->setRotorNumber(3);
				break;
			case 4:
				r1Temp->setInputArray(rotorFour);
				r1Temp->setRotorNumber(4);
				break;
			case 5:
				r1Temp->setInputArray(rotorFive);
				r1Temp->setRotorNumber(5);
				break;
			case 6:
				r1Temp->setInputArray(rotorSix);
				r1Temp->setRotorNumber(6);
				break;
			case 7:
				r1Temp->setInputArray(rotorSeven);
				r1Temp->setRotorNumber(7);
				break;
			case 8:
				r1Temp->setInputArray(rotorEight);
				r1Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorTwoC) {
			case 1:
				r2Temp->setInputArray(rotorOne);
				r2Temp->setRotorNumber(1);
				break;
			case 2:
				r2Temp->setInputArray(rotorTwo);
				r2Temp->setRotorNumber(2);
				break;
			case 3:
				r2Temp->setInputArray(rotorThree);
				r2Temp->setRotorNumber(3);
				break;
			case 4:
				r2Temp->setInputArray(rotorFour);
				r2Temp->setRotorNumber(4);
				break;
			case 5:
				r2Temp->setInputArray(rotorFive);
				r2Temp->setRotorNumber(5);
				break;
			case 6:
				r2Temp->setInputArray(rotorSix);
				r2Temp->setRotorNumber(6);
				break;
			case 7:
				r2Temp->setInputArray(rotorSeven);
				r2Temp->setRotorNumber(7);
				break;
			case 8:
				r2Temp->setInputArray(rotorEight);
				r2Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorThreeC) {
			case 1:
				r3Temp->setInputArray(rotorOne);
				r3Temp->setRotorNumber(1);
				break;
			case 2:
				r3Temp->setInputArray(rotorTwo);
				r3Temp->setRotorNumber(2);
				break;
			case 3:
				r3Temp->setInputArray(rotorThree);
				r3Temp->setRotorNumber(3);
				break;
			case 4:
				r3Temp->setInputArray(rotorFour);
				r3Temp->setRotorNumber(4);
				break;
			case 5:
				r3Temp->setInputArray(rotorFive);
				r3Temp->setRotorNumber(5);
				break;
			case 6:
				r3Temp->setInputArray(rotorSix);
				r3Temp->setRotorNumber(6);
				break;
			case 7:
				r3Temp->setInputArray(rotorSeven);
				r3Temp->setRotorNumber(7);
				break;
			case 8:
				r3Temp->setInputArray(rotorEight);
				r3Temp->setRotorNumber(8);
				break;
			}
			tempE.setRotorsForBombe(r1Temp, r2Temp, r3Temp);
			tempE.setRotorsForBombePositions(p1, p2, p3);





			Guess initialGuess;
			char A = 'A';
			char B = 'A';
			//std::list<char> alp = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
			std::list<char> alp;
			std::list<char> alp1;
			int dontDoBit = 0;
			initialGuess.setAll(tempNum1, tempNum2, tempNum3, p1, p1, p3, MSG, it->ioc, ogMsg);
			initialListPlugboardForBombe.push_back(initialGuess);
			for (int i = 0; i < 26; i++) {
				for (int j = 0; j < 26; j++) {
					std::list<char>::iterator it3 = alp1.begin();
					for (std::list<char>::iterator it2 = alp.begin(); it2 != alp.end(); ++it2) {
						if (((char)(A + i) == *it2 && (char)(B + j) == *it3) || ((char)(B + j) == *it2 && (char)(A + i) == *it3)) {
							dontDoBit = 1;
							break;
						}
						else {
							dontDoBit = 0;


						}
						it3++;
					}
					if (((char)(A + i) != (char)(B + j)) && dontDoBit == 0) {
						alp.push_back((char)(A + i));
						alp1.push_back((char)(B + j));
						std::string test = "";
						tempE.plugB->input[0] = (char)(A + i);
						tempE.plugB->output[0] = (char)(B + j);
						tempE.plugB->inputed = 1;
						//std::cout << tempE.rotorOne->rotorNumber << " " << tempE.rotorTwo->rotorNumber << " " << tempE.rotorThree->rotorNumber << " | ";
						//tempE.plugB->printPB();
						//std::cout << std::endl;
						//std::cout << it->rotorOneC << " " << it->rotorTwoC << " "<<it->rotorThreeC << std::endl;
						for (int i = 0; i < ogMsg.length(); i++) {
							test.push_back(tempE.inOut(ogMsg[i]));
						}
						double tempIoC = IoC(test);
						Guess tGuess;
						tGuess.setAll(it->rotorOneC, it->rotorTwoC, it->rotorThreeC, it->rotorOneP, it->rotorTwoP, it->rotorThreeP, test, tempIoC, ogMsg);
						tGuess.setSetting(0, (char)(A + i), (char)(B + j));
						tGuess.inputed = 1;

						tempE.setRotorsForBombePositions(p1, p2, p3);
						if (tGuess.getSortVar() > initialGuess.getSortVar() && tGuess.distanceIOC < initialGuess.distanceIOC && initialGuess.msg != tGuess.msg) {
							initialListPlugboardForBombe.push_back(tGuess);
							//initialListPlugboardForBombeFirst.push_back(tGuess);	
						}
						initialListPlugboardForBombeFirst.push_back(tGuess);

					}
				}
			}


		}

		sortLists(initialListPlugboardForBombeFirst, plugBoardFirstSorted, 500);
		std::cout << "\t" << initialListPlugboardForBombeFirst.size() << ": Posibilities For One Plugboard Setting" << std::endl;

		for (std::list<Guess>::iterator it = plugBoardFirstSorted.begin(); it != plugBoardFirstSorted.end(); ++it) {
			//std::cout <<testI <<std::endl;
			//testI--;
			EnigmaForBombe tempE;
			RotorsForBombe* r1Temp = new RotorsForBombe();
			RotorsForBombe* r2Temp = new RotorsForBombe();
			RotorsForBombe* r3Temp = new RotorsForBombe();
			int p1 = it->rotorOneP;
			int p2 = it->rotorTwoP;
			int p3 = it->rotorThreeP;
			int tempNum1 = it->rotorOneC;
			int tempNum2 = it->rotorTwoC;
			int tempNum3 = it->rotorThreeC;
			char input[13];
			char output[13];
			std::string MSG = it->msg;
			std::string ogMsg = it->ogMsg;
			char rotorOne[26] = { 'E','K','M','F','L','G','D','Q','V','Z','N','T','O','W','Y','H','X','U','S','P','A','I','B','R','C','J' };
			char rotorTwo[26] = { 'A','J','D','K','S','I','R','U','X','B','L','H','W','T','M','C','Q','G','Z','N','P','Y','F','V','O','E' };
			char rotorThree[26] = { 'B','D','F','H','J','L','C','P','R','T','X','V','Z','N','Y','E','I','W','G','A','K','M','U','S','Q','O' };
			char rotorFour[26] = { 'E','S','O','V','P','Z','J','A','Y','Q','U','I','R','H','X','L','N','F','T','G','K','D','C','M','W','B' };
			char rotorFive[26] = { 'V','Z','B','R','G','I','T','Y','U','P','S','D','N','H','L','X','A','W','M','J','Q','O','F','E','C','K' };
			char rotorSix[26] = { 'J','P','G','V','O','U','M','F','Y','Q','B','E','N','H','Z','R','D','K','A','S','X','L','I','C','T','W' };
			char rotorSeven[26] = { 'N','Z','J','H','G','R','C','X','M','Y','S','W','B','O','U','F','A','I','V','L','P','E','K','Q','D','T' };
			char rotorEight[26] = { 'F','K','Q','H','T','L','X','O','C','B','J','S','P','D','Z','R','A','M','E','W','N','I','U','Y','G','V' };

			switch (it->rotorOneC) {
			case 1:
				r1Temp->setInputArray(rotorOne);
				r1Temp->setRotorNumber(1);
				break;
			case 2:
				r1Temp->setInputArray(rotorTwo);
				r1Temp->setRotorNumber(2);
				break;
			case 3:
				r1Temp->setInputArray(rotorThree);
				r1Temp->setRotorNumber(3);
				break;
			case 4:
				r1Temp->setInputArray(rotorFour);
				r1Temp->setRotorNumber(4);
				break;
			case 5:
				r1Temp->setInputArray(rotorFive);
				r1Temp->setRotorNumber(5);
				break;
			case 6:
				r1Temp->setInputArray(rotorSix);
				r1Temp->setRotorNumber(6);
				break;
			case 7:
				r1Temp->setInputArray(rotorSeven);
				r1Temp->setRotorNumber(7);
				break;
			case 8:
				r1Temp->setInputArray(rotorEight);
				r1Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorTwoC) {
			case 1:
				r2Temp->setInputArray(rotorOne);
				r2Temp->setRotorNumber(1);
				break;
			case 2:
				r2Temp->setInputArray(rotorTwo);
				r2Temp->setRotorNumber(2);
				break;
			case 3:
				r2Temp->setInputArray(rotorThree);
				r2Temp->setRotorNumber(3);
				break;
			case 4:
				r2Temp->setInputArray(rotorFour);
				r2Temp->setRotorNumber(4);
				break;
			case 5:
				r2Temp->setInputArray(rotorFive);
				r2Temp->setRotorNumber(5);
				break;
			case 6:
				r2Temp->setInputArray(rotorSix);
				r2Temp->setRotorNumber(6);
				break;
			case 7:
				r2Temp->setInputArray(rotorSeven);
				r2Temp->setRotorNumber(7);
				break;
			case 8:
				r2Temp->setInputArray(rotorEight);
				r2Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorThreeC) {
			case 1:
				r3Temp->setInputArray(rotorOne);
				r3Temp->setRotorNumber(1);
				break;
			case 2:
				r3Temp->setInputArray(rotorTwo);
				r3Temp->setRotorNumber(2);
				break;
			case 3:
				r3Temp->setInputArray(rotorThree);
				r3Temp->setRotorNumber(3);
				break;
			case 4:
				r3Temp->setInputArray(rotorFour);
				r3Temp->setRotorNumber(4);
				break;
			case 5:
				r3Temp->setInputArray(rotorFive);
				r3Temp->setRotorNumber(5);
				break;
			case 6:
				r3Temp->setInputArray(rotorSix);
				r3Temp->setRotorNumber(6);
				break;
			case 7:
				r3Temp->setInputArray(rotorSeven);
				r3Temp->setRotorNumber(7);
				break;
			case 8:
				r3Temp->setInputArray(rotorEight);
				r3Temp->setRotorNumber(8);
				break;
			}
			tempE.setRotorsForBombe(r1Temp, r2Temp, r3Temp);
			tempE.setRotorsForBombePositions(p1, p2, p3);

			Guess initialGuess = *it;

			char A = 'A';
			char B = 'A';
			//std::list<char> alp = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
			std::list<std::string> pairsOne; //i[0]
			std::list<std::string> pairsTwo;
			std::list<char> alp; //i[0]
			std::list<char> alp1; //o[0]
			int dontDoBit = 0;
			int dontDoBit2 = 0;
			for (int i = 0; i < 26; i++) {
				for (int j = 0; j < 26; j++) {
					std::list<char>::iterator it3 = alp1.begin();
					for (std::list<char>::iterator it2 = alp.begin(); it2 != alp.end(); ++it2) {
						if (((char)(A + i) == *it2 && (char)(B + j) == *it3) || ((char)(B + j) == *it2 && (char)(A + i) == *it3)) {
							dontDoBit = 1;
							break;
						}
						else {

							if ((char)(A + i) == initialGuess.input[0] || (char)(B + j) == initialGuess.output[0] || (char)(A + i) == initialGuess.output[0] || (char)(B + j) == initialGuess.input[0]) {
								dontDoBit = 1;
								break;
							}
							else {
								dontDoBit = 0;
							}
						}
						it3++;

					}

					if (((char)(A + i) != (char)(B + j)) && (char)(A + i) != initialGuess.input[0] && (char)(A + i) != initialGuess.output[0] && (char)(B + j) != initialGuess.input[0] && (char)(B + j) != initialGuess.output[0] && dontDoBit == 0 && dontDoBit2 == 0) {
						alp.push_back((char)(A + i));
						alp1.push_back((char)(B + j));



						std::string tempPl = "";
						tempPl.push_back((char)(A + i));
						tempPl.push_back((char)(B + j));
						std::string tempP2 = "";
						tempP2.push_back(initialGuess.input[0]);
						tempP2.push_back(initialGuess.output[0]);
						pairsOne.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsOne.push_back(tempPl);
						for (int i = 0; i < it->inputed; i++) {
							tempE.plugB->input[i] = it->input[i];
							tempE.plugB->output[i] = it->output[i];
						}
						std::string test = "";
						//tempE.plugB->input[0] = it->input[0];
						//tempE.plugB->output[0] = it->output[0];
						tempE.plugB->input[1] = (char)(A + i);
						tempE.plugB->output[1] = (char)(B + j);
						tempE.plugB->inputed = 2;
						//std::cout << tempE.rotorOne->rotorNumber << " " << tempE.rotorTwo->rotorNumber << " " << tempE.rotorThree->rotorNumber << " | ";
						//tempE.plugB->printPB();
						//std::cout << std::endl;
						//std::cout << it->rotorOneC << " " << it->rotorTwoC << " "<<it->rotorThreeC << std::endl;
						for (int i = 0; i < ogMsg.length(); i++) {
							test.push_back(tempE.inOut(ogMsg[i]));
						}
						double tempIoC = IoC(test);
						Guess tGuess;
						tGuess.setAll(it->rotorOneC, it->rotorTwoC, it->rotorThreeC, it->rotorOneP, it->rotorTwoP, it->rotorThreeP, test, tempIoC, ogMsg);
						tGuess.inputed = 2;
						for (int i = 0; i < it->inputed; i++) {
							tGuess.setSetting(i, it->input[i], it->output[i]);
						}
						//tGuess.setSetting(0,it->input[0],it->output[0]);
						tGuess.setSetting(1, (char)(A + i), (char)(B + j));



						tempE.setRotorsForBombePositions(p1, p2, p3);
						if (tGuess.getSortVar() > initialGuess.getSortVar() && tGuess.distanceIOC < initialGuess.distanceIOC && initialGuess.msg != tGuess.msg) {
							initialListPlugboardForBombe.push_back(tGuess);

							//initialListPlugboardForBombeSecond.push_back(tGuess);	
						}
						initialListPlugboardForBombeSecond.push_back(tGuess);
					}
				}
			}


		}


		sortLists(initialListPlugboardForBombeSecond, plugBoardSecondSorted, 500);
		std::cout << "\t" << initialListPlugboardForBombeSecond.size() << ": Posibilities For Two Plugboard Setting" << std::endl;

		for (std::list<Guess>::iterator it = plugBoardSecondSorted.begin(); it != plugBoardSecondSorted.end(); ++it) {
			//std::cout <<testI <<std::endl;
			//testI--;
			EnigmaForBombe tempE;
			RotorsForBombe* r1Temp = new RotorsForBombe();
			RotorsForBombe* r2Temp = new RotorsForBombe();
			RotorsForBombe* r3Temp = new RotorsForBombe();
			int p1 = it->rotorOneP;
			int p2 = it->rotorTwoP;
			int p3 = it->rotorThreeP;
			int tempNum1 = it->rotorOneC;
			int tempNum2 = it->rotorTwoC;
			int tempNum3 = it->rotorThreeC;
			char input[13];
			char output[13];
			std::string MSG = it->msg;
			std::string ogMsg = it->ogMsg;
			char rotorOne[26] = { 'E','K','M','F','L','G','D','Q','V','Z','N','T','O','W','Y','H','X','U','S','P','A','I','B','R','C','J' };
			char rotorTwo[26] = { 'A','J','D','K','S','I','R','U','X','B','L','H','W','T','M','C','Q','G','Z','N','P','Y','F','V','O','E' };
			char rotorThree[26] = { 'B','D','F','H','J','L','C','P','R','T','X','V','Z','N','Y','E','I','W','G','A','K','M','U','S','Q','O' };
			char rotorFour[26] = { 'E','S','O','V','P','Z','J','A','Y','Q','U','I','R','H','X','L','N','F','T','G','K','D','C','M','W','B' };
			char rotorFive[26] = { 'V','Z','B','R','G','I','T','Y','U','P','S','D','N','H','L','X','A','W','M','J','Q','O','F','E','C','K' };
			char rotorSix[26] = { 'J','P','G','V','O','U','M','F','Y','Q','B','E','N','H','Z','R','D','K','A','S','X','L','I','C','T','W' };
			char rotorSeven[26] = { 'N','Z','J','H','G','R','C','X','M','Y','S','W','B','O','U','F','A','I','V','L','P','E','K','Q','D','T' };
			char rotorEight[26] = { 'F','K','Q','H','T','L','X','O','C','B','J','S','P','D','Z','R','A','M','E','W','N','I','U','Y','G','V' };

			switch (it->rotorOneC) {
			case 1:
				r1Temp->setInputArray(rotorOne);
				r1Temp->setRotorNumber(1);
				break;
			case 2:
				r1Temp->setInputArray(rotorTwo);
				r1Temp->setRotorNumber(2);
				break;
			case 3:
				r1Temp->setInputArray(rotorThree);
				r1Temp->setRotorNumber(3);
				break;
			case 4:
				r1Temp->setInputArray(rotorFour);
				r1Temp->setRotorNumber(4);
				break;
			case 5:
				r1Temp->setInputArray(rotorFive);
				r1Temp->setRotorNumber(5);
				break;
			case 6:
				r1Temp->setInputArray(rotorSix);
				r1Temp->setRotorNumber(6);
				break;
			case 7:
				r1Temp->setInputArray(rotorSeven);
				r1Temp->setRotorNumber(7);
				break;
			case 8:
				r1Temp->setInputArray(rotorEight);
				r1Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorTwoC) {
			case 1:
				r2Temp->setInputArray(rotorOne);
				r2Temp->setRotorNumber(1);
				break;
			case 2:
				r2Temp->setInputArray(rotorTwo);
				r2Temp->setRotorNumber(2);
				break;
			case 3:
				r2Temp->setInputArray(rotorThree);
				r2Temp->setRotorNumber(3);
				break;
			case 4:
				r2Temp->setInputArray(rotorFour);
				r2Temp->setRotorNumber(4);
				break;
			case 5:
				r2Temp->setInputArray(rotorFive);
				r2Temp->setRotorNumber(5);
				break;
			case 6:
				r2Temp->setInputArray(rotorSix);
				r2Temp->setRotorNumber(6);
				break;
			case 7:
				r2Temp->setInputArray(rotorSeven);
				r2Temp->setRotorNumber(7);
				break;
			case 8:
				r2Temp->setInputArray(rotorEight);
				r2Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorThreeC) {
			case 1:
				r3Temp->setInputArray(rotorOne);
				r3Temp->setRotorNumber(1);
				break;
			case 2:
				r3Temp->setInputArray(rotorTwo);
				r3Temp->setRotorNumber(2);
				break;
			case 3:
				r3Temp->setInputArray(rotorThree);
				r3Temp->setRotorNumber(3);
				break;
			case 4:
				r3Temp->setInputArray(rotorFour);
				r3Temp->setRotorNumber(4);
				break;
			case 5:
				r3Temp->setInputArray(rotorFive);
				r3Temp->setRotorNumber(5);
				break;
			case 6:
				r3Temp->setInputArray(rotorSix);
				r3Temp->setRotorNumber(6);
				break;
			case 7:
				r3Temp->setInputArray(rotorSeven);
				r3Temp->setRotorNumber(7);
				break;
			case 8:
				r3Temp->setInputArray(rotorEight);
				r3Temp->setRotorNumber(8);
				break;
			}
			tempE.setRotorsForBombe(r1Temp, r2Temp, r3Temp);
			tempE.setRotorsForBombePositions(p1, p2, p3);

			Guess initialGuess = *it;

			char A = 'A';
			char B = 'A';
			//std::list<char> alp = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
			std::list<std::string> pairsOne; //i[0]
			std::list<std::string> pairsTwo;
			std::list<char> alp; //i[0]
			std::list<char> alp1; //o[0]
			int dontDoBit = 0;
			int dontDoBit2 = 0;
			int dontDoBit3 = 0;
			for (int i = 0; i < 26; i++) {
				for (int j = 0; j < 26; j++) {
					std::list<char>::iterator it3 = alp1.begin();
					for (std::list<char>::iterator it2 = alp.begin(); it2 != alp.end(); ++it2) {
						if (((char)(A + i) == *it2 && (char)(B + j) == *it3) || ((char)(B + j) == *it2 && (char)(A + i) == *it3)) {
							dontDoBit = 1;
							break;
						}
						else {

							if ((char)(A + i) == initialGuess.input[0] || (char)(B + j) == initialGuess.output[0] || (char)(A + i) == initialGuess.output[0] || (char)(B + j) == initialGuess.input[0] ||
								(char)(A + i) == initialGuess.input[1] || (char)(B + j) == initialGuess.output[1] || (char)(A + i) == initialGuess.output[1] || (char)(B + j) == initialGuess.input[1]) {
								dontDoBit = 1;
								break;
							}
							else {
								dontDoBit = 0;
							}
						}
						it3++;

					}

					if (((char)(A + i) != (char)(B + j)) && (char)(A + i) != initialGuess.input[0] && (char)(A + i) != initialGuess.output[0] && (char)(B + j) != initialGuess.input[0] && (char)(B + j) != initialGuess.output[0] &&
						(char)(A + i) != initialGuess.input[1] && (char)(A + i) != initialGuess.output[1] && (char)(B + j) != initialGuess.input[1] && (char)(B + j) != initialGuess.output[1] && dontDoBit == 0 && dontDoBit2 == 0) {
						alp.push_back((char)(A + i));
						alp1.push_back((char)(B + j));



						std::string tempPl = "";
						tempPl.push_back((char)(A + i));
						tempPl.push_back((char)(B + j));
						std::string tempP2 = "";
						tempP2.push_back(initialGuess.input[0]);
						tempP2.push_back(initialGuess.output[0]);
						pairsOne.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsOne.push_back(tempPl);
						for (int i = 0; i < it->inputed; i++) {
							tempE.plugB->input[i] = it->input[i];
							tempE.plugB->output[i] = it->output[i];
						}
						std::string test = "";
						//tempE.plugB->input[0] = it->input[0];
						//tempE.plugB->output[0] = it->output[0];
						tempE.plugB->input[2] = (char)(A + i);
						tempE.plugB->output[2] = (char)(B + j);
						tempE.plugB->inputed = 3;
						//std::cout << tempE.rotorOne->rotorNumber << " " << tempE.rotorTwo->rotorNumber << " " << tempE.rotorThree->rotorNumber << " | ";
						//tempE.plugB->printPB();
						//std::cout << std::endl;
						//std::cout << it->rotorOneC << " " << it->rotorTwoC << " "<<it->rotorThreeC << std::endl;
						for (int i = 0; i < ogMsg.length(); i++) {
							test.push_back(tempE.inOut(ogMsg[i]));
						}
						double tempIoC = IoC(test);
						Guess tGuess;
						tGuess.setAll(it->rotorOneC, it->rotorTwoC, it->rotorThreeC, it->rotorOneP, it->rotorTwoP, it->rotorThreeP, test, tempIoC, ogMsg);
						tGuess.inputed = 3;
						for (int i = 0; i < it->inputed; i++) {
							tGuess.setSetting(i, it->input[i], it->output[i]);
						}
						//tGuess.setSetting(0,it->input[0],it->output[0]);
						tGuess.setSetting(2, (char)(A + i), (char)(B + j));



						tempE.setRotorsForBombePositions(p1, p2, p3);
						if (tGuess.getSortVar() > initialGuess.getSortVar() && tGuess.distanceIOC < initialGuess.distanceIOC && initialGuess.msg != tGuess.msg) {
							initialListPlugboardForBombe.push_back(tGuess);

							//initialListPlugboardForBombeSecond.push_back(tGuess);	
						}
						initialListPlugboardForBombeThird.push_back(tGuess);
					}
				}
			}


		}



		sortLists(initialListPlugboardForBombeThird, plugBoardThirdSorted, 500);
		std::cout << "\t" << initialListPlugboardForBombeThird.size() << ": Posibilities For Three Plugboard Setting" << std::endl;

		for (std::list<Guess>::iterator it = plugBoardThirdSorted.begin(); it != plugBoardThirdSorted.end(); ++it) {
			//std::cout <<testI <<std::endl;
			//testI--;
			EnigmaForBombe tempE;
			RotorsForBombe* r1Temp = new RotorsForBombe();
			RotorsForBombe* r2Temp = new RotorsForBombe();
			RotorsForBombe* r3Temp = new RotorsForBombe();
			int p1 = it->rotorOneP;
			int p2 = it->rotorTwoP;
			int p3 = it->rotorThreeP;
			int tempNum1 = it->rotorOneC;
			int tempNum2 = it->rotorTwoC;
			int tempNum3 = it->rotorThreeC;
			char input[13];
			char output[13];
			std::string MSG = it->msg;
			std::string ogMsg = it->ogMsg;
			char rotorOne[26] = { 'E','K','M','F','L','G','D','Q','V','Z','N','T','O','W','Y','H','X','U','S','P','A','I','B','R','C','J' };
			char rotorTwo[26] = { 'A','J','D','K','S','I','R','U','X','B','L','H','W','T','M','C','Q','G','Z','N','P','Y','F','V','O','E' };
			char rotorThree[26] = { 'B','D','F','H','J','L','C','P','R','T','X','V','Z','N','Y','E','I','W','G','A','K','M','U','S','Q','O' };
			char rotorFour[26] = { 'E','S','O','V','P','Z','J','A','Y','Q','U','I','R','H','X','L','N','F','T','G','K','D','C','M','W','B' };
			char rotorFive[26] = { 'V','Z','B','R','G','I','T','Y','U','P','S','D','N','H','L','X','A','W','M','J','Q','O','F','E','C','K' };
			char rotorSix[26] = { 'J','P','G','V','O','U','M','F','Y','Q','B','E','N','H','Z','R','D','K','A','S','X','L','I','C','T','W' };
			char rotorSeven[26] = { 'N','Z','J','H','G','R','C','X','M','Y','S','W','B','O','U','F','A','I','V','L','P','E','K','Q','D','T' };
			char rotorEight[26] = { 'F','K','Q','H','T','L','X','O','C','B','J','S','P','D','Z','R','A','M','E','W','N','I','U','Y','G','V' };

			switch (it->rotorOneC) {
			case 1:
				r1Temp->setInputArray(rotorOne);
				r1Temp->setRotorNumber(1);
				break;
			case 2:
				r1Temp->setInputArray(rotorTwo);
				r1Temp->setRotorNumber(2);
				break;
			case 3:
				r1Temp->setInputArray(rotorThree);
				r1Temp->setRotorNumber(3);
				break;
			case 4:
				r1Temp->setInputArray(rotorFour);
				r1Temp->setRotorNumber(4);
				break;
			case 5:
				r1Temp->setInputArray(rotorFive);
				r1Temp->setRotorNumber(5);
				break;
			case 6:
				r1Temp->setInputArray(rotorSix);
				r1Temp->setRotorNumber(6);
				break;
			case 7:
				r1Temp->setInputArray(rotorSeven);
				r1Temp->setRotorNumber(7);
				break;
			case 8:
				r1Temp->setInputArray(rotorEight);
				r1Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorTwoC) {
			case 1:
				r2Temp->setInputArray(rotorOne);
				r2Temp->setRotorNumber(1);
				break;
			case 2:
				r2Temp->setInputArray(rotorTwo);
				r2Temp->setRotorNumber(2);
				break;
			case 3:
				r2Temp->setInputArray(rotorThree);
				r2Temp->setRotorNumber(3);
				break;
			case 4:
				r2Temp->setInputArray(rotorFour);
				r2Temp->setRotorNumber(4);
				break;
			case 5:
				r2Temp->setInputArray(rotorFive);
				r2Temp->setRotorNumber(5);
				break;
			case 6:
				r2Temp->setInputArray(rotorSix);
				r2Temp->setRotorNumber(6);
				break;
			case 7:
				r2Temp->setInputArray(rotorSeven);
				r2Temp->setRotorNumber(7);
				break;
			case 8:
				r2Temp->setInputArray(rotorEight);
				r2Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorThreeC) {
			case 1:
				r3Temp->setInputArray(rotorOne);
				r3Temp->setRotorNumber(1);
				break;
			case 2:
				r3Temp->setInputArray(rotorTwo);
				r3Temp->setRotorNumber(2);
				break;
			case 3:
				r3Temp->setInputArray(rotorThree);
				r3Temp->setRotorNumber(3);
				break;
			case 4:
				r3Temp->setInputArray(rotorFour);
				r3Temp->setRotorNumber(4);
				break;
			case 5:
				r3Temp->setInputArray(rotorFive);
				r3Temp->setRotorNumber(5);
				break;
			case 6:
				r3Temp->setInputArray(rotorSix);
				r3Temp->setRotorNumber(6);
				break;
			case 7:
				r3Temp->setInputArray(rotorSeven);
				r3Temp->setRotorNumber(7);
				break;
			case 8:
				r3Temp->setInputArray(rotorEight);
				r3Temp->setRotorNumber(8);
				break;
			}
			tempE.setRotorsForBombe(r1Temp, r2Temp, r3Temp);
			tempE.setRotorsForBombePositions(p1, p2, p3);

			Guess initialGuess = *it;

			char A = 'A';
			char B = 'A';
			//std::list<char> alp = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
			std::list<std::string> pairsOne; //i[0]
			std::list<std::string> pairsTwo;
			std::list<char> alp; //i[0]
			std::list<char> alp1; //o[0]
			int dontDoBit = 0;
			int dontDoBit2 = 0;
			for (int i = 0; i < 26; i++) {
				for (int j = 0; j < 26; j++) {
					std::list<char>::iterator it3 = alp1.begin();
					for (std::list<char>::iterator it2 = alp.begin(); it2 != alp.end(); ++it2) {
						if (((char)(A + i) == *it2 && (char)(B + j) == *it3) || ((char)(B + j) == *it2 && (char)(A + i) == *it3)) {
							dontDoBit = 1;
							break;
						}
						else {

							if ((char)(A + i) == initialGuess.input[0] || (char)(B + j) == initialGuess.output[0] || (char)(A + i) == initialGuess.output[0] || (char)(B + j) == initialGuess.input[0] ||
								(char)(A + i) == initialGuess.input[1] || (char)(B + j) == initialGuess.output[1] || (char)(A + i) == initialGuess.output[1] || (char)(B + j) == initialGuess.input[1] ||
								(char)(A + i) == initialGuess.input[2] || (char)(B + j) == initialGuess.output[2] || (char)(A + i) == initialGuess.output[2] || (char)(B + j) == initialGuess.input[2]) {
								dontDoBit = 1;
								break;
							}
							else {
								dontDoBit = 0;
							}
						}
						it3++;

					}
					std::string tempPair = "";
					tempPair.push_back(initialGuess.input[0]);
					tempPair.push_back(initialGuess.output[0]);
					std::string tempPair2 = "";
					tempPair2.push_back((char)(A + i));
					tempPair2.push_back((char)(B + j));

					std::list<std::string>::iterator it5 = pairsTwo.begin();
					for (std::list<std::string>::iterator it4 = pairsOne.begin(); it4 != pairsOne.end(); ++it4) {
						if (*it4 == tempPair && *it5 == tempPair2 || *it4 == tempPair2 && *it5 == tempPair) {
							dontDoBit2 = 1;
							break;
						}
						else {
							dontDoBit2 = 0;
						}
						it5++;
					}
					if (((char)(A + i) != (char)(B + j)) && (char)(A + i) != initialGuess.input[0] && (char)(A + i) != initialGuess.output[0] && (char)(B + j) != initialGuess.input[0] && (char)(B + j) != initialGuess.output[0] &&
						(char)(A + i) != initialGuess.input[1] && (char)(A + i) != initialGuess.output[1] && (char)(B + j) != initialGuess.input[1] && (char)(B + j) != initialGuess.output[1] &&
						(char)(A + i) != initialGuess.input[2] && (char)(A + i) != initialGuess.output[2] && (char)(B + j) != initialGuess.input[2] && (char)(B + j) != initialGuess.output[2] && dontDoBit == 0 && dontDoBit2 == 0) {
						alp.push_back((char)(A + i));
						alp1.push_back((char)(B + j));



						std::string tempPl = "";
						tempPl.push_back((char)(A + i));
						tempPl.push_back((char)(B + j));
						std::string tempP2 = "";
						tempP2.push_back(initialGuess.input[0]);
						tempP2.push_back(initialGuess.output[0]);
						pairsOne.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsOne.push_back(tempPl);
						for (int i = 0; i < it->inputed; i++) {
							tempE.plugB->input[i] = it->input[i];
							tempE.plugB->output[i] = it->output[i];
						}
						std::string test = "";
						//tempE.plugB->input[0] = it->input[0];
						//tempE.plugB->output[0] = it->output[0];
						tempE.plugB->input[3] = (char)(A + i);
						tempE.plugB->output[3] = (char)(B + j);
						tempE.plugB->inputed = 4;
						//std::cout << tempE.rotorOne->rotorNumber << " " << tempE.rotorTwo->rotorNumber << " " << tempE.rotorThree->rotorNumber << " | ";
						//tempE.plugB->printPB();
						//std::cout << std::endl;
						//std::cout << it->rotorOneC << " " << it->rotorTwoC << " "<<it->rotorThreeC << std::endl;
						for (int i = 0; i < ogMsg.length(); i++) {
							test.push_back(tempE.inOut(ogMsg[i]));
						}
						double tempIoC = IoC(test);
						Guess tGuess;
						tGuess.setAll(it->rotorOneC, it->rotorTwoC, it->rotorThreeC, it->rotorOneP, it->rotorTwoP, it->rotorThreeP, test, tempIoC, ogMsg);
						tGuess.inputed = 4;
						for (int i = 0; i < it->inputed; i++) {
							tGuess.setSetting(i, it->input[i], it->output[i]);
						}
						//tGuess.setSetting(0,it->input[0],it->output[0]);
						tGuess.setSetting(3, (char)(A + i), (char)(B + j));



						tempE.setRotorsForBombePositions(p1, p2, p3);
						if (tGuess.getSortVar() > initialGuess.getSortVar() && tGuess.distanceIOC < initialGuess.distanceIOC && initialGuess.msg != tGuess.msg) {
							initialListPlugboardForBombe.push_back(tGuess);

							//initialListPlugboardForBombeSecond.push_back(tGuess);	
						}
						initialListPlugboardForBombeFour.push_back(tGuess);
					}
				}
			}


		}


		sortLists(initialListPlugboardForBombeFour, plugBoardFourSorted, 500);
		std::cout << "\t" << initialListPlugboardForBombeFour.size() << ": Posibilities For Four Plugboard Setting" << std::endl;

		for (std::list<Guess>::iterator it = plugBoardFourSorted.begin(); it != plugBoardFourSorted.end(); ++it) {
			//std::cout <<testI <<std::endl;
			//testI--;	
			EnigmaForBombe tempE;
			RotorsForBombe* r1Temp = new RotorsForBombe();
			RotorsForBombe* r2Temp = new RotorsForBombe();
			RotorsForBombe* r3Temp = new RotorsForBombe();
			int p1 = it->rotorOneP;
			int p2 = it->rotorTwoP;
			int p3 = it->rotorThreeP;
			int tempNum1 = it->rotorOneC;
			int tempNum2 = it->rotorTwoC;
			int tempNum3 = it->rotorThreeC;
			char input[13];
			char output[13];
			std::string MSG = it->msg;
			std::string ogMsg = it->ogMsg;
			char rotorOne[26] = { 'E','K','M','F','L','G','D','Q','V','Z','N','T','O','W','Y','H','X','U','S','P','A','I','B','R','C','J' };
			char rotorTwo[26] = { 'A','J','D','K','S','I','R','U','X','B','L','H','W','T','M','C','Q','G','Z','N','P','Y','F','V','O','E' };
			char rotorThree[26] = { 'B','D','F','H','J','L','C','P','R','T','X','V','Z','N','Y','E','I','W','G','A','K','M','U','S','Q','O' };
			char rotorFour[26] = { 'E','S','O','V','P','Z','J','A','Y','Q','U','I','R','H','X','L','N','F','T','G','K','D','C','M','W','B' };
			char rotorFive[26] = { 'V','Z','B','R','G','I','T','Y','U','P','S','D','N','H','L','X','A','W','M','J','Q','O','F','E','C','K' };
			char rotorSix[26] = { 'J','P','G','V','O','U','M','F','Y','Q','B','E','N','H','Z','R','D','K','A','S','X','L','I','C','T','W' };
			char rotorSeven[26] = { 'N','Z','J','H','G','R','C','X','M','Y','S','W','B','O','U','F','A','I','V','L','P','E','K','Q','D','T' };
			char rotorEight[26] = { 'F','K','Q','H','T','L','X','O','C','B','J','S','P','D','Z','R','A','M','E','W','N','I','U','Y','G','V' };

			switch (it->rotorOneC) {
			case 1:
				r1Temp->setInputArray(rotorOne);
				r1Temp->setRotorNumber(1);
				break;
			case 2:
				r1Temp->setInputArray(rotorTwo);
				r1Temp->setRotorNumber(2);
				break;
			case 3:
				r1Temp->setInputArray(rotorThree);
				r1Temp->setRotorNumber(3);
				break;
			case 4:
				r1Temp->setInputArray(rotorFour);
				r1Temp->setRotorNumber(4);
				break;
			case 5:
				r1Temp->setInputArray(rotorFive);
				r1Temp->setRotorNumber(5);
				break;
			case 6:
				r1Temp->setInputArray(rotorSix);
				r1Temp->setRotorNumber(6);
				break;
			case 7:
				r1Temp->setInputArray(rotorSeven);
				r1Temp->setRotorNumber(7);
				break;
			case 8:
				r1Temp->setInputArray(rotorEight);
				r1Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorTwoC) {
			case 1:
				r2Temp->setInputArray(rotorOne);
				r2Temp->setRotorNumber(1);
				break;
			case 2:
				r2Temp->setInputArray(rotorTwo);
				r2Temp->setRotorNumber(2);
				break;
			case 3:
				r2Temp->setInputArray(rotorThree);
				r2Temp->setRotorNumber(3);
				break;
			case 4:
				r2Temp->setInputArray(rotorFour);
				r2Temp->setRotorNumber(4);
				break;
			case 5:
				r2Temp->setInputArray(rotorFive);
				r2Temp->setRotorNumber(5);
				break;
			case 6:
				r2Temp->setInputArray(rotorSix);
				r2Temp->setRotorNumber(6);
				break;
			case 7:
				r2Temp->setInputArray(rotorSeven);
				r2Temp->setRotorNumber(7);
				break;
			case 8:
				r2Temp->setInputArray(rotorEight);
				r2Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorThreeC) {
			case 1:
				r3Temp->setInputArray(rotorOne);
				r3Temp->setRotorNumber(1);
				break;
			case 2:
				r3Temp->setInputArray(rotorTwo);
				r3Temp->setRotorNumber(2);
				break;
			case 3:
				r3Temp->setInputArray(rotorThree);
				r3Temp->setRotorNumber(3);
				break;
			case 4:
				r3Temp->setInputArray(rotorFour);
				r3Temp->setRotorNumber(4);
				break;
			case 5:
				r3Temp->setInputArray(rotorFive);
				r3Temp->setRotorNumber(5);
				break;
			case 6:
				r3Temp->setInputArray(rotorSix);
				r3Temp->setRotorNumber(6);
				break;
			case 7:
				r3Temp->setInputArray(rotorSeven);
				r3Temp->setRotorNumber(7);
				break;
			case 8:
				r3Temp->setInputArray(rotorEight);
				r3Temp->setRotorNumber(8);
				break;
			}
			tempE.setRotorsForBombe(r1Temp, r2Temp, r3Temp);
			tempE.setRotorsForBombePositions(p1, p2, p3);

			Guess initialGuess = *it;

			char A = 'A';
			char B = 'A';
			//std::list<char> alp = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
			std::list<std::string> pairsOne; //i[0]
			std::list<std::string> pairsTwo;
			std::list<char> alp; //i[0]
			std::list<char> alp1; //o[0]
			int dontDoBit = 0;
			int dontDoBit2 = 0;
			for (int i = 0; i < 26; i++) {
				for (int j = 0; j < 26; j++) {
					std::list<char>::iterator it3 = alp1.begin();
					for (std::list<char>::iterator it2 = alp.begin(); it2 != alp.end(); ++it2) {
						if (((char)(A + i) == *it2 && (char)(B + j) == *it3) || ((char)(B + j) == *it2 && (char)(A + i) == *it3)) {
							dontDoBit = 1;
							break;
						}
						else {

							if ((char)(A + i) == initialGuess.input[0] || (char)(B + j) == initialGuess.output[0] || (char)(A + i) == initialGuess.output[0] || (char)(B + j) == initialGuess.input[0] ||
								(char)(A + i) == initialGuess.input[1] || (char)(B + j) == initialGuess.output[1] || (char)(A + i) == initialGuess.output[1] || (char)(B + j) == initialGuess.input[1] ||
								(char)(A + i) == initialGuess.input[2] || (char)(B + j) == initialGuess.output[2] || (char)(A + i) == initialGuess.output[2] || (char)(B + j) == initialGuess.input[2] ||
								(char)(A + i) == initialGuess.input[3] || (char)(B + j) == initialGuess.output[3] || (char)(A + i) == initialGuess.output[3] || (char)(B + j) == initialGuess.input[3]) {
								dontDoBit = 1;
								break;
							}
							else {
								dontDoBit = 0;
							}
						}
						it3++;

					}
					std::string tempPair = "";
					tempPair.push_back(initialGuess.input[0]);
					tempPair.push_back(initialGuess.output[0]);
					std::string tempPair2 = "";
					tempPair2.push_back((char)(A + i));
					tempPair2.push_back((char)(B + j));

					std::list<std::string>::iterator it5 = pairsTwo.begin();
					for (std::list<std::string>::iterator it4 = pairsOne.begin(); it4 != pairsOne.end(); ++it4) {
						if (*it4 == tempPair && *it5 == tempPair2 || *it4 == tempPair2 && *it5 == tempPair) {
							dontDoBit2 = 1;
							break;
						}
						else {
							dontDoBit2 = 0;
						}
						it5++;
					}
					if (((char)(A + i) != (char)(B + j)) && (char)(A + i) != initialGuess.input[0] && (char)(A + i) != initialGuess.output[0] && (char)(B + j) != initialGuess.input[0] && (char)(B + j) != initialGuess.output[0] &&
						(char)(A + i) != initialGuess.input[1] && (char)(A + i) != initialGuess.output[1] && (char)(B + j) != initialGuess.input[1] && (char)(B + j) != initialGuess.output[1] &&
						(char)(A + i) != initialGuess.input[2] && (char)(A + i) != initialGuess.output[2] && (char)(B + j) != initialGuess.input[2] && (char)(B + j) != initialGuess.output[2] &&
						(char)(A + i) != initialGuess.input[3] && (char)(A + i) != initialGuess.output[3] && (char)(B + j) != initialGuess.input[3] && (char)(B + j) != initialGuess.output[3] && dontDoBit == 0 && dontDoBit2 == 0) {
						alp.push_back((char)(A + i));
						alp1.push_back((char)(B + j));



						std::string tempPl = "";
						tempPl.push_back((char)(A + i));
						tempPl.push_back((char)(B + j));
						std::string tempP2 = "";
						tempP2.push_back(initialGuess.input[0]);
						tempP2.push_back(initialGuess.output[0]);
						pairsOne.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsOne.push_back(tempPl);
						for (int i = 0; i < it->inputed; i++) {
							tempE.plugB->input[i] = it->input[i];
							tempE.plugB->output[i] = it->output[i];
						}
						std::string test = "";
						//tempE.plugB->input[0] = it->input[0];
						//tempE.plugB->output[0] = it->output[0];
						tempE.plugB->input[4] = (char)(A + i);
						tempE.plugB->output[4] = (char)(B + j);
						tempE.plugB->inputed = 5;
						//std::cout << tempE.rotorOne->rotorNumber << " " << tempE.rotorTwo->rotorNumber << " " << tempE.rotorThree->rotorNumber << " | ";
						//tempE.plugB->printPB();
						//std::cout << std::endl;
						//std::cout << it->rotorOneC << " " << it->rotorTwoC << " "<<it->rotorThreeC << std::endl;
						for (int i = 0; i < ogMsg.length(); i++) {
							test.push_back(tempE.inOut(ogMsg[i]));
						}
						double tempIoC = IoC(test);
						Guess tGuess;
						tGuess.setAll(it->rotorOneC, it->rotorTwoC, it->rotorThreeC, it->rotorOneP, it->rotorTwoP, it->rotorThreeP, test, tempIoC, ogMsg);
						tGuess.inputed = 5;
						for (int i = 0; i < it->inputed; i++) {
							tGuess.setSetting(i, it->input[i], it->output[i]);
						}
						//tGuess.setSetting(0,it->input[0],it->output[0]);
						tGuess.setSetting(4, (char)(A + i), (char)(B + j));



						tempE.setRotorsForBombePositions(p1, p2, p3);
						if (tGuess.getSortVar() > initialGuess.getSortVar() && tGuess.distanceIOC < initialGuess.distanceIOC && initialGuess.msg != tGuess.msg) {
							initialListPlugboardForBombe.push_back(tGuess);

							//initialListPlugboardForBombeSecond.push_back(tGuess);	
						}
						initialListPlugboardForBombeFive.push_back(tGuess);
					}
				}
			}


		}

		sortLists(initialListPlugboardForBombeFive, plugBoardFiveSorted, 500);
		std::cout << "\t" << initialListPlugboardForBombeFive.size() << ": Posibilities For Five Plugboard Setting" << std::endl;

		for (std::list<Guess>::iterator it = plugBoardFiveSorted.begin(); it != plugBoardFiveSorted.end(); ++it) {
			//std::cout <<testI <<std::endl;
			//testI--;	
			EnigmaForBombe tempE;
			RotorsForBombe* r1Temp = new RotorsForBombe();
			RotorsForBombe* r2Temp = new RotorsForBombe();
			RotorsForBombe* r3Temp = new RotorsForBombe();
			int p1 = it->rotorOneP;
			int p2 = it->rotorTwoP;
			int p3 = it->rotorThreeP;
			int tempNum1 = it->rotorOneC;
			int tempNum2 = it->rotorTwoC;
			int tempNum3 = it->rotorThreeC;
			char input[13];
			char output[13];
			std::string MSG = it->msg;
			std::string ogMsg = it->ogMsg;
			char rotorOne[26] = { 'E','K','M','F','L','G','D','Q','V','Z','N','T','O','W','Y','H','X','U','S','P','A','I','B','R','C','J' };
			char rotorTwo[26] = { 'A','J','D','K','S','I','R','U','X','B','L','H','W','T','M','C','Q','G','Z','N','P','Y','F','V','O','E' };
			char rotorThree[26] = { 'B','D','F','H','J','L','C','P','R','T','X','V','Z','N','Y','E','I','W','G','A','K','M','U','S','Q','O' };
			char rotorFour[26] = { 'E','S','O','V','P','Z','J','A','Y','Q','U','I','R','H','X','L','N','F','T','G','K','D','C','M','W','B' };
			char rotorFive[26] = { 'V','Z','B','R','G','I','T','Y','U','P','S','D','N','H','L','X','A','W','M','J','Q','O','F','E','C','K' };
			char rotorSix[26] = { 'J','P','G','V','O','U','M','F','Y','Q','B','E','N','H','Z','R','D','K','A','S','X','L','I','C','T','W' };
			char rotorSeven[26] = { 'N','Z','J','H','G','R','C','X','M','Y','S','W','B','O','U','F','A','I','V','L','P','E','K','Q','D','T' };
			char rotorEight[26] = { 'F','K','Q','H','T','L','X','O','C','B','J','S','P','D','Z','R','A','M','E','W','N','I','U','Y','G','V' };

			switch (it->rotorOneC) {
			case 1:
				r1Temp->setInputArray(rotorOne);
				r1Temp->setRotorNumber(1);
				break;
			case 2:
				r1Temp->setInputArray(rotorTwo);
				r1Temp->setRotorNumber(2);
				break;
			case 3:
				r1Temp->setInputArray(rotorThree);
				r1Temp->setRotorNumber(3);
				break;
			case 4:
				r1Temp->setInputArray(rotorFour);
				r1Temp->setRotorNumber(4);
				break;
			case 5:
				r1Temp->setInputArray(rotorFive);
				r1Temp->setRotorNumber(5);
				break;
			case 6:
				r1Temp->setInputArray(rotorSix);
				r1Temp->setRotorNumber(6);
				break;
			case 7:
				r1Temp->setInputArray(rotorSeven);
				r1Temp->setRotorNumber(7);
				break;
			case 8:
				r1Temp->setInputArray(rotorEight);
				r1Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorTwoC) {
			case 1:
				r2Temp->setInputArray(rotorOne);
				r2Temp->setRotorNumber(1);
				break;
			case 2:
				r2Temp->setInputArray(rotorTwo);
				r2Temp->setRotorNumber(2);
				break;
			case 3:
				r2Temp->setInputArray(rotorThree);
				r2Temp->setRotorNumber(3);
				break;
			case 4:
				r2Temp->setInputArray(rotorFour);
				r2Temp->setRotorNumber(4);
				break;
			case 5:
				r2Temp->setInputArray(rotorFive);
				r2Temp->setRotorNumber(5);
				break;
			case 6:
				r2Temp->setInputArray(rotorSix);
				r2Temp->setRotorNumber(6);
				break;
			case 7:
				r2Temp->setInputArray(rotorSeven);
				r2Temp->setRotorNumber(7);
				break;
			case 8:
				r2Temp->setInputArray(rotorEight);
				r2Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorThreeC) {
			case 1:
				r3Temp->setInputArray(rotorOne);
				r3Temp->setRotorNumber(1);
				break;
			case 2:
				r3Temp->setInputArray(rotorTwo);
				r3Temp->setRotorNumber(2);
				break;
			case 3:
				r3Temp->setInputArray(rotorThree);
				r3Temp->setRotorNumber(3);
				break;
			case 4:
				r3Temp->setInputArray(rotorFour);
				r3Temp->setRotorNumber(4);
				break;
			case 5:
				r3Temp->setInputArray(rotorFive);
				r3Temp->setRotorNumber(5);
				break;
			case 6:
				r3Temp->setInputArray(rotorSix);
				r3Temp->setRotorNumber(6);
				break;
			case 7:
				r3Temp->setInputArray(rotorSeven);
				r3Temp->setRotorNumber(7);
				break;
			case 8:
				r3Temp->setInputArray(rotorEight);
				r3Temp->setRotorNumber(8);
				break;
			}
			tempE.setRotorsForBombe(r1Temp, r2Temp, r3Temp);
			tempE.setRotorsForBombePositions(p1, p2, p3);

			Guess initialGuess = *it;

			char A = 'A';
			char B = 'A';
			//std::list<char> alp = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
			std::list<std::string> pairsOne; //i[0]
			std::list<std::string> pairsTwo;
			std::list<char> alp; //i[0]
			std::list<char> alp1; //o[0]
			int dontDoBit = 0;
			int dontDoBit2 = 0;
			for (int i = 0; i < 26; i++) {
				for (int j = 0; j < 26; j++) {
					std::list<char>::iterator it3 = alp1.begin();
					for (std::list<char>::iterator it2 = alp.begin(); it2 != alp.end(); ++it2) {
						if (((char)(A + i) == *it2 && (char)(B + j) == *it3) || ((char)(B + j) == *it2 && (char)(A + i) == *it3)) {
							dontDoBit = 1;
							break;
						}
						else {

							if ((char)(A + i) == initialGuess.input[0] || (char)(B + j) == initialGuess.output[0] || (char)(A + i) == initialGuess.output[0] || (char)(B + j) == initialGuess.input[0] ||
								(char)(A + i) == initialGuess.input[1] || (char)(B + j) == initialGuess.output[1] || (char)(A + i) == initialGuess.output[1] || (char)(B + j) == initialGuess.input[1] ||
								(char)(A + i) == initialGuess.input[2] || (char)(B + j) == initialGuess.output[2] || (char)(A + i) == initialGuess.output[2] || (char)(B + j) == initialGuess.input[2] ||
								(char)(A + i) == initialGuess.input[3] || (char)(B + j) == initialGuess.output[3] || (char)(A + i) == initialGuess.output[3] || (char)(B + j) == initialGuess.input[3] ||
								(char)(A + i) == initialGuess.input[4] || (char)(B + j) == initialGuess.output[4] || (char)(A + i) == initialGuess.output[4] || (char)(B + j) == initialGuess.input[4]) {
								dontDoBit = 1;
								break;
							}
							else {
								dontDoBit = 0;
							}
						}
						it3++;

					}
					std::string tempPair = "";
					tempPair.push_back(initialGuess.input[0]);
					tempPair.push_back(initialGuess.output[0]);
					std::string tempPair2 = "";
					tempPair2.push_back((char)(A + i));
					tempPair2.push_back((char)(B + j));

					std::list<std::string>::iterator it5 = pairsTwo.begin();
					for (std::list<std::string>::iterator it4 = pairsOne.begin(); it4 != pairsOne.end(); ++it4) {
						if (*it4 == tempPair && *it5 == tempPair2 || *it4 == tempPair2 && *it5 == tempPair) {
							dontDoBit2 = 1;
							break;
						}
						else {
							dontDoBit2 = 0;
						}
						it5++;
					}
					if (((char)(A + i) != (char)(B + j)) && (char)(A + i) != initialGuess.input[0] && (char)(A + i) != initialGuess.output[0] && (char)(B + j) != initialGuess.input[0] && (char)(B + j) != initialGuess.output[0] &&
						(char)(A + i) != initialGuess.input[1] && (char)(A + i) != initialGuess.output[1] && (char)(B + j) != initialGuess.input[1] && (char)(B + j) != initialGuess.output[1] &&
						(char)(A + i) != initialGuess.input[2] && (char)(A + i) != initialGuess.output[2] && (char)(B + j) != initialGuess.input[2] && (char)(B + j) != initialGuess.output[2] &&
						(char)(A + i) != initialGuess.input[3] && (char)(A + i) != initialGuess.output[3] && (char)(B + j) != initialGuess.input[3] && (char)(B + j) != initialGuess.output[3] &&
						(char)(A + i) != initialGuess.input[4] && (char)(A + i) != initialGuess.output[4] && (char)(B + j) != initialGuess.input[4] && (char)(B + j) != initialGuess.output[4] && dontDoBit == 0 && dontDoBit2 == 0) {
						alp.push_back((char)(A + i));
						alp1.push_back((char)(B + j));



						std::string tempPl = "";
						tempPl.push_back((char)(A + i));
						tempPl.push_back((char)(B + j));
						std::string tempP2 = "";
						tempP2.push_back(initialGuess.input[0]);
						tempP2.push_back(initialGuess.output[0]);
						pairsOne.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsOne.push_back(tempPl);
						for (int i = 0; i < it->inputed; i++) {
							tempE.plugB->input[i] = it->input[i];
							tempE.plugB->output[i] = it->output[i];
						}
						std::string test = "";
						//tempE.plugB->input[0] = it->input[0];
						//tempE.plugB->output[0] = it->output[0];
						tempE.plugB->input[5] = (char)(A + i);
						tempE.plugB->output[5] = (char)(B + j);
						tempE.plugB->inputed = 6;
						//std::cout << tempE.rotorOne->rotorNumber << " " << tempE.rotorTwo->rotorNumber << " " << tempE.rotorThree->rotorNumber << " | ";
						//tempE.plugB->printPB();
						//std::cout << std::endl;
						//std::cout << it->rotorOneC << " " << it->rotorTwoC << " "<<it->rotorThreeC << std::endl;
						for (int i = 0; i < ogMsg.length(); i++) {
							test.push_back(tempE.inOut(ogMsg[i]));
						}
						double tempIoC = IoC(test);
						Guess tGuess;
						tGuess.setAll(it->rotorOneC, it->rotorTwoC, it->rotorThreeC, it->rotorOneP, it->rotorTwoP, it->rotorThreeP, test, tempIoC, ogMsg);
						tGuess.inputed = 6;
						for (int i = 0; i < it->inputed; i++) {
							tGuess.setSetting(i, it->input[i], it->output[i]);
						}
						//tGuess.setSetting(0,it->input[0],it->output[0]);
						tGuess.setSetting(5, (char)(A + i), (char)(B + j));



						tempE.setRotorsForBombePositions(p1, p2, p3);
						if (tGuess.getSortVar() > initialGuess.getSortVar() && tGuess.distanceIOC < initialGuess.distanceIOC && initialGuess.msg != tGuess.msg) {
							initialListPlugboardForBombe.push_back(tGuess);

							//initialListPlugboardForBombeSecond.push_back(tGuess);	
						}
						initialListPlugboardForBombeSix.push_back(tGuess);
					}
				}
			}


		}

		sortLists(initialListPlugboardForBombeSix, plugBoardSixSorted, 500);
		std::cout << "\t" << initialListPlugboardForBombeSix.size() << ": Posibilities For Six Plugboard Setting" << std::endl;

		for (std::list<Guess>::iterator it = plugBoardSixSorted.begin(); it != plugBoardSixSorted.end(); ++it) {
			//std::cout <<testI <<std::endl;
			//testI--;	
			EnigmaForBombe tempE;
			RotorsForBombe* r1Temp = new RotorsForBombe();
			RotorsForBombe* r2Temp = new RotorsForBombe();
			RotorsForBombe* r3Temp = new RotorsForBombe();
			int p1 = it->rotorOneP;
			int p2 = it->rotorTwoP;
			int p3 = it->rotorThreeP;
			int tempNum1 = it->rotorOneC;
			int tempNum2 = it->rotorTwoC;
			int tempNum3 = it->rotorThreeC;
			char input[13];
			char output[13];
			std::string MSG = it->msg;
			std::string ogMsg = it->ogMsg;
			char rotorOne[26] = { 'E','K','M','F','L','G','D','Q','V','Z','N','T','O','W','Y','H','X','U','S','P','A','I','B','R','C','J' };
			char rotorTwo[26] = { 'A','J','D','K','S','I','R','U','X','B','L','H','W','T','M','C','Q','G','Z','N','P','Y','F','V','O','E' };
			char rotorThree[26] = { 'B','D','F','H','J','L','C','P','R','T','X','V','Z','N','Y','E','I','W','G','A','K','M','U','S','Q','O' };
			char rotorFour[26] = { 'E','S','O','V','P','Z','J','A','Y','Q','U','I','R','H','X','L','N','F','T','G','K','D','C','M','W','B' };
			char rotorFive[26] = { 'V','Z','B','R','G','I','T','Y','U','P','S','D','N','H','L','X','A','W','M','J','Q','O','F','E','C','K' };
			char rotorSix[26] = { 'J','P','G','V','O','U','M','F','Y','Q','B','E','N','H','Z','R','D','K','A','S','X','L','I','C','T','W' };
			char rotorSeven[26] = { 'N','Z','J','H','G','R','C','X','M','Y','S','W','B','O','U','F','A','I','V','L','P','E','K','Q','D','T' };
			char rotorEight[26] = { 'F','K','Q','H','T','L','X','O','C','B','J','S','P','D','Z','R','A','M','E','W','N','I','U','Y','G','V' };

			switch (it->rotorOneC) {
			case 1:
				r1Temp->setInputArray(rotorOne);
				r1Temp->setRotorNumber(1);
				break;
			case 2:
				r1Temp->setInputArray(rotorTwo);
				r1Temp->setRotorNumber(2);
				break;
			case 3:
				r1Temp->setInputArray(rotorThree);
				r1Temp->setRotorNumber(3);
				break;
			case 4:
				r1Temp->setInputArray(rotorFour);
				r1Temp->setRotorNumber(4);
				break;
			case 5:
				r1Temp->setInputArray(rotorFive);
				r1Temp->setRotorNumber(5);
				break;
			case 6:
				r1Temp->setInputArray(rotorSix);
				r1Temp->setRotorNumber(6);
				break;
			case 7:
				r1Temp->setInputArray(rotorSeven);
				r1Temp->setRotorNumber(7);
				break;
			case 8:
				r1Temp->setInputArray(rotorEight);
				r1Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorTwoC) {
			case 1:
				r2Temp->setInputArray(rotorOne);
				r2Temp->setRotorNumber(1);
				break;
			case 2:
				r2Temp->setInputArray(rotorTwo);
				r2Temp->setRotorNumber(2);
				break;
			case 3:
				r2Temp->setInputArray(rotorThree);
				r2Temp->setRotorNumber(3);
				break;
			case 4:
				r2Temp->setInputArray(rotorFour);
				r2Temp->setRotorNumber(4);
				break;
			case 5:
				r2Temp->setInputArray(rotorFive);
				r2Temp->setRotorNumber(5);
				break;
			case 6:
				r2Temp->setInputArray(rotorSix);
				r2Temp->setRotorNumber(6);
				break;
			case 7:
				r2Temp->setInputArray(rotorSeven);
				r2Temp->setRotorNumber(7);
				break;
			case 8:
				r2Temp->setInputArray(rotorEight);
				r2Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorThreeC) {
			case 1:
				r3Temp->setInputArray(rotorOne);
				r3Temp->setRotorNumber(1);
				break;
			case 2:
				r3Temp->setInputArray(rotorTwo);
				r3Temp->setRotorNumber(2);
				break;
			case 3:
				r3Temp->setInputArray(rotorThree);
				r3Temp->setRotorNumber(3);
				break;
			case 4:
				r3Temp->setInputArray(rotorFour);
				r3Temp->setRotorNumber(4);
				break;
			case 5:
				r3Temp->setInputArray(rotorFive);
				r3Temp->setRotorNumber(5);
				break;
			case 6:
				r3Temp->setInputArray(rotorSix);
				r3Temp->setRotorNumber(6);
				break;
			case 7:
				r3Temp->setInputArray(rotorSeven);
				r3Temp->setRotorNumber(7);
				break;
			case 8:
				r3Temp->setInputArray(rotorEight);
				r3Temp->setRotorNumber(8);
				break;
			}
			tempE.setRotorsForBombe(r1Temp, r2Temp, r3Temp);
			tempE.setRotorsForBombePositions(p1, p2, p3);

			Guess initialGuess = *it;

			char A = 'A';
			char B = 'A';
			//std::list<char> alp = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
			std::list<std::string> pairsOne; //i[0]
			std::list<std::string> pairsTwo;
			std::list<char> alp; //i[0]
			std::list<char> alp1; //o[0]
			int dontDoBit = 0;
			int dontDoBit2 = 0;
			for (int i = 0; i < 26; i++) {
				for (int j = 0; j < 26; j++) {
					std::list<char>::iterator it3 = alp1.begin();
					for (std::list<char>::iterator it2 = alp.begin(); it2 != alp.end(); ++it2) {
						if (((char)(A + i) == *it2 && (char)(B + j) == *it3) || ((char)(B + j) == *it2 && (char)(A + i) == *it3)) {
							dontDoBit = 1;
							break;
						}
						else {

							if ((char)(A + i) == initialGuess.input[0] || (char)(B + j) == initialGuess.output[0] || (char)(A + i) == initialGuess.output[0] || (char)(B + j) == initialGuess.input[0] ||
								(char)(A + i) == initialGuess.input[1] || (char)(B + j) == initialGuess.output[1] || (char)(A + i) == initialGuess.output[1] || (char)(B + j) == initialGuess.input[1] ||
								(char)(A + i) == initialGuess.input[2] || (char)(B + j) == initialGuess.output[2] || (char)(A + i) == initialGuess.output[2] || (char)(B + j) == initialGuess.input[2] ||
								(char)(A + i) == initialGuess.input[3] || (char)(B + j) == initialGuess.output[3] || (char)(A + i) == initialGuess.output[3] || (char)(B + j) == initialGuess.input[3] ||
								(char)(A + i) == initialGuess.input[4] || (char)(B + j) == initialGuess.output[4] || (char)(A + i) == initialGuess.output[4] || (char)(B + j) == initialGuess.input[4] ||
								(char)(A + i) == initialGuess.input[5] || (char)(B + j) == initialGuess.output[5] || (char)(A + i) == initialGuess.output[5] || (char)(B + j) == initialGuess.input[5]) {
								dontDoBit = 1;
								break;
							}
							else {
								dontDoBit = 0;
							}
						}
						it3++;

					}
					std::string tempPair = "";
					tempPair.push_back(initialGuess.input[0]);
					tempPair.push_back(initialGuess.output[0]);
					std::string tempPair2 = "";
					tempPair2.push_back((char)(A + i));
					tempPair2.push_back((char)(B + j));

					std::list<std::string>::iterator it5 = pairsTwo.begin();
					for (std::list<std::string>::iterator it4 = pairsOne.begin(); it4 != pairsOne.end(); ++it4) {
						if (*it4 == tempPair && *it5 == tempPair2 || *it4 == tempPair2 && *it5 == tempPair) {
							dontDoBit2 = 1;
							break;
						}
						else {
							dontDoBit2 = 0;
						}
						it5++;
					}
					if (((char)(A + i) != (char)(B + j)) && (char)(A + i) != initialGuess.input[0] && (char)(A + i) != initialGuess.output[0] && (char)(B + j) != initialGuess.input[0] && (char)(B + j) != initialGuess.output[0] &&
						(char)(A + i) != initialGuess.input[1] && (char)(A + i) != initialGuess.output[1] && (char)(B + j) != initialGuess.input[1] && (char)(B + j) != initialGuess.output[1] &&
						(char)(A + i) != initialGuess.input[2] && (char)(A + i) != initialGuess.output[2] && (char)(B + j) != initialGuess.input[2] && (char)(B + j) != initialGuess.output[2] &&
						(char)(A + i) != initialGuess.input[3] && (char)(A + i) != initialGuess.output[3] && (char)(B + j) != initialGuess.input[3] && (char)(B + j) != initialGuess.output[3] &&
						(char)(A + i) != initialGuess.input[4] && (char)(A + i) != initialGuess.output[4] && (char)(B + j) != initialGuess.input[4] && (char)(B + j) != initialGuess.output[4] &&
						(char)(A + i) != initialGuess.input[5] && (char)(A + i) != initialGuess.output[5] && (char)(B + j) != initialGuess.input[5] && (char)(B + j) != initialGuess.output[5] && dontDoBit == 0 && dontDoBit2 == 0) {
						alp.push_back((char)(A + i));
						alp1.push_back((char)(B + j));



						std::string tempPl = "";
						tempPl.push_back((char)(A + i));
						tempPl.push_back((char)(B + j));
						std::string tempP2 = "";
						tempP2.push_back(initialGuess.input[0]);
						tempP2.push_back(initialGuess.output[0]);
						pairsOne.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsOne.push_back(tempPl);
						for (int i = 0; i < it->inputed; i++) {
							tempE.plugB->input[i] = it->input[i];
							tempE.plugB->output[i] = it->output[i];
						}
						std::string test = "";
						//tempE.plugB->input[0] = it->input[0];
						//tempE.plugB->output[0] = it->output[0];
						tempE.plugB->input[6] = (char)(A + i);
						tempE.plugB->output[6] = (char)(B + j);
						tempE.plugB->inputed = 7;
						//std::cout << tempE.rotorOne->rotorNumber << " " << tempE.rotorTwo->rotorNumber << " " << tempE.rotorThree->rotorNumber << " | ";
						//tempE.plugB->printPB();
						//std::cout << std::endl;
						//std::cout << it->rotorOneC << " " << it->rotorTwoC << " "<<it->rotorThreeC << std::endl;
						for (int i = 0; i < ogMsg.length(); i++) {
							test.push_back(tempE.inOut(ogMsg[i]));
						}
						double tempIoC = IoC(test);
						Guess tGuess;
						tGuess.setAll(it->rotorOneC, it->rotorTwoC, it->rotorThreeC, it->rotorOneP, it->rotorTwoP, it->rotorThreeP, test, tempIoC, ogMsg);
						tGuess.inputed = 7;
						for (int i = 0; i < it->inputed; i++) {
							tGuess.setSetting(i, it->input[i], it->output[i]);
						}
						//tGuess.setSetting(0,it->input[0],it->output[0]);
						tGuess.setSetting(6, (char)(A + i), (char)(B + j));



						tempE.setRotorsForBombePositions(p1, p2, p3);
						if (tGuess.getSortVar() > initialGuess.getSortVar() && tGuess.distanceIOC < initialGuess.distanceIOC && initialGuess.msg != tGuess.msg) {
							initialListPlugboardForBombe.push_back(tGuess);

							//initialListPlugboardForBombeSecond.push_back(tGuess);	
						}
						initialListPlugboardForBombeSeven.push_back(tGuess);
					}
				}
			}


		}
		sortLists(initialListPlugboardForBombeSeven, plugBoardSevenSorted, 500);
		std::cout << "\t" << initialListPlugboardForBombeSeven.size() << ": Posibilities For Seven Plugboard Setting" << std::endl;

		for (std::list<Guess>::iterator it = plugBoardSevenSorted.begin(); it != plugBoardSevenSorted.end(); ++it) {
			//std::cout <<testI <<std::endl;
			//testI--;	
			EnigmaForBombe tempE;
			RotorsForBombe* r1Temp = new RotorsForBombe();
			RotorsForBombe* r2Temp = new RotorsForBombe();
			RotorsForBombe* r3Temp = new RotorsForBombe();
			int p1 = it->rotorOneP;
			int p2 = it->rotorTwoP;
			int p3 = it->rotorThreeP;
			int tempNum1 = it->rotorOneC;
			int tempNum2 = it->rotorTwoC;
			int tempNum3 = it->rotorThreeC;
			char input[13];
			char output[13];
			std::string MSG = it->msg;
			std::string ogMsg = it->ogMsg;
			char rotorOne[26] = { 'E','K','M','F','L','G','D','Q','V','Z','N','T','O','W','Y','H','X','U','S','P','A','I','B','R','C','J' };
			char rotorTwo[26] = { 'A','J','D','K','S','I','R','U','X','B','L','H','W','T','M','C','Q','G','Z','N','P','Y','F','V','O','E' };
			char rotorThree[26] = { 'B','D','F','H','J','L','C','P','R','T','X','V','Z','N','Y','E','I','W','G','A','K','M','U','S','Q','O' };
			char rotorFour[26] = { 'E','S','O','V','P','Z','J','A','Y','Q','U','I','R','H','X','L','N','F','T','G','K','D','C','M','W','B' };
			char rotorFive[26] = { 'V','Z','B','R','G','I','T','Y','U','P','S','D','N','H','L','X','A','W','M','J','Q','O','F','E','C','K' };
			char rotorSix[26] = { 'J','P','G','V','O','U','M','F','Y','Q','B','E','N','H','Z','R','D','K','A','S','X','L','I','C','T','W' };
			char rotorSeven[26] = { 'N','Z','J','H','G','R','C','X','M','Y','S','W','B','O','U','F','A','I','V','L','P','E','K','Q','D','T' };
			char rotorEight[26] = { 'F','K','Q','H','T','L','X','O','C','B','J','S','P','D','Z','R','A','M','E','W','N','I','U','Y','G','V' };

			switch (it->rotorOneC) {
			case 1:
				r1Temp->setInputArray(rotorOne);
				r1Temp->setRotorNumber(1);
				break;
			case 2:
				r1Temp->setInputArray(rotorTwo);
				r1Temp->setRotorNumber(2);
				break;
			case 3:
				r1Temp->setInputArray(rotorThree);
				r1Temp->setRotorNumber(3);
				break;
			case 4:
				r1Temp->setInputArray(rotorFour);
				r1Temp->setRotorNumber(4);
				break;
			case 5:
				r1Temp->setInputArray(rotorFive);
				r1Temp->setRotorNumber(5);
				break;
			case 6:
				r1Temp->setInputArray(rotorSix);
				r1Temp->setRotorNumber(6);
				break;
			case 7:
				r1Temp->setInputArray(rotorSeven);
				r1Temp->setRotorNumber(7);
				break;
			case 8:
				r1Temp->setInputArray(rotorEight);
				r1Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorTwoC) {
			case 1:
				r2Temp->setInputArray(rotorOne);
				r2Temp->setRotorNumber(1);
				break;
			case 2:
				r2Temp->setInputArray(rotorTwo);
				r2Temp->setRotorNumber(2);
				break;
			case 3:
				r2Temp->setInputArray(rotorThree);
				r2Temp->setRotorNumber(3);
				break;
			case 4:
				r2Temp->setInputArray(rotorFour);
				r2Temp->setRotorNumber(4);
				break;
			case 5:
				r2Temp->setInputArray(rotorFive);
				r2Temp->setRotorNumber(5);
				break;
			case 6:
				r2Temp->setInputArray(rotorSix);
				r2Temp->setRotorNumber(6);
				break;
			case 7:
				r2Temp->setInputArray(rotorSeven);
				r2Temp->setRotorNumber(7);
				break;
			case 8:
				r2Temp->setInputArray(rotorEight);
				r2Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorThreeC) {
			case 1:
				r3Temp->setInputArray(rotorOne);
				r3Temp->setRotorNumber(1);
				break;
			case 2:
				r3Temp->setInputArray(rotorTwo);
				r3Temp->setRotorNumber(2);
				break;
			case 3:
				r3Temp->setInputArray(rotorThree);
				r3Temp->setRotorNumber(3);
				break;
			case 4:
				r3Temp->setInputArray(rotorFour);
				r3Temp->setRotorNumber(4);
				break;
			case 5:
				r3Temp->setInputArray(rotorFive);
				r3Temp->setRotorNumber(5);
				break;
			case 6:
				r3Temp->setInputArray(rotorSix);
				r3Temp->setRotorNumber(6);
				break;
			case 7:
				r3Temp->setInputArray(rotorSeven);
				r3Temp->setRotorNumber(7);
				break;
			case 8:
				r3Temp->setInputArray(rotorEight);
				r3Temp->setRotorNumber(8);
				break;
			}
			tempE.setRotorsForBombe(r1Temp, r2Temp, r3Temp);
			tempE.setRotorsForBombePositions(p1, p2, p3);

			Guess initialGuess = *it;

			char A = 'A';
			char B = 'A';
			//std::list<char> alp = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
			std::list<std::string> pairsOne; //i[0]
			std::list<std::string> pairsTwo;
			std::list<char> alp; //i[0]
			std::list<char> alp1; //o[0]
			int dontDoBit = 0;
			int dontDoBit2 = 0;
			for (int i = 0; i < 26; i++) {
				for (int j = 0; j < 26; j++) {
					std::list<char>::iterator it3 = alp1.begin();
					for (std::list<char>::iterator it2 = alp.begin(); it2 != alp.end(); ++it2) {
						if (((char)(A + i) == *it2 && (char)(B + j) == *it3) || ((char)(B + j) == *it2 && (char)(A + i) == *it3)) {
							dontDoBit = 1;
							break;
						}
						else {

							if ((char)(A + i) == initialGuess.input[0] || (char)(B + j) == initialGuess.output[0] || (char)(A + i) == initialGuess.output[0] || (char)(B + j) == initialGuess.input[0] ||
								(char)(A + i) == initialGuess.input[1] || (char)(B + j) == initialGuess.output[1] || (char)(A + i) == initialGuess.output[1] || (char)(B + j) == initialGuess.input[1] ||
								(char)(A + i) == initialGuess.input[2] || (char)(B + j) == initialGuess.output[2] || (char)(A + i) == initialGuess.output[2] || (char)(B + j) == initialGuess.input[2] ||
								(char)(A + i) == initialGuess.input[3] || (char)(B + j) == initialGuess.output[3] || (char)(A + i) == initialGuess.output[3] || (char)(B + j) == initialGuess.input[3] ||
								(char)(A + i) == initialGuess.input[4] || (char)(B + j) == initialGuess.output[4] || (char)(A + i) == initialGuess.output[4] || (char)(B + j) == initialGuess.input[4] ||
								(char)(A + i) == initialGuess.input[5] || (char)(B + j) == initialGuess.output[5] || (char)(A + i) == initialGuess.output[5] || (char)(B + j) == initialGuess.input[5] ||
								(char)(A + i) == initialGuess.input[6] || (char)(B + j) == initialGuess.output[6] || (char)(A + i) == initialGuess.output[6] || (char)(B + j) == initialGuess.input[6]) {
								dontDoBit = 1;
								break;
							}
							else {
								dontDoBit = 0;
							}
						}
						it3++;

					}
					std::string tempPair = "";
					tempPair.push_back(initialGuess.input[0]);
					tempPair.push_back(initialGuess.output[0]);
					std::string tempPair2 = "";
					tempPair2.push_back((char)(A + i));
					tempPair2.push_back((char)(B + j));

					std::list<std::string>::iterator it5 = pairsTwo.begin();
					for (std::list<std::string>::iterator it4 = pairsOne.begin(); it4 != pairsOne.end(); ++it4) {
						if (*it4 == tempPair && *it5 == tempPair2 || *it4 == tempPair2 && *it5 == tempPair) {
							dontDoBit2 = 1;
							break;
						}
						else {
							dontDoBit2 = 0;
						}
						it5++;
					}
					if (((char)(A + i) != (char)(B + j)) && (char)(A + i) != initialGuess.input[0] && (char)(A + i) != initialGuess.output[0] && (char)(B + j) != initialGuess.input[0] && (char)(B + j) != initialGuess.output[0] &&
						(char)(A + i) != initialGuess.input[1] && (char)(A + i) != initialGuess.output[1] && (char)(B + j) != initialGuess.input[1] && (char)(B + j) != initialGuess.output[1] &&
						(char)(A + i) != initialGuess.input[2] && (char)(A + i) != initialGuess.output[2] && (char)(B + j) != initialGuess.input[2] && (char)(B + j) != initialGuess.output[2] &&
						(char)(A + i) != initialGuess.input[3] && (char)(A + i) != initialGuess.output[3] && (char)(B + j) != initialGuess.input[3] && (char)(B + j) != initialGuess.output[3] &&
						(char)(A + i) != initialGuess.input[4] && (char)(A + i) != initialGuess.output[4] && (char)(B + j) != initialGuess.input[4] && (char)(B + j) != initialGuess.output[4] &&
						(char)(A + i) != initialGuess.input[5] && (char)(A + i) != initialGuess.output[5] && (char)(B + j) != initialGuess.input[5] && (char)(B + j) != initialGuess.output[5] &&
						(char)(A + i) != initialGuess.input[6] && (char)(A + i) != initialGuess.output[6] && (char)(B + j) != initialGuess.input[6] && (char)(B + j) != initialGuess.output[6] && dontDoBit == 0 && dontDoBit2 == 0) {
						alp.push_back((char)(A + i));
						alp1.push_back((char)(B + j));



						std::string tempPl = "";
						tempPl.push_back((char)(A + i));
						tempPl.push_back((char)(B + j));
						std::string tempP2 = "";
						tempP2.push_back(initialGuess.input[0]);
						tempP2.push_back(initialGuess.output[0]);
						pairsOne.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsOne.push_back(tempPl);
						for (int i = 0; i < it->inputed; i++) {
							tempE.plugB->input[i] = it->input[i];
							tempE.plugB->output[i] = it->output[i];
						}
						std::string test = "";
						//tempE.plugB->input[0] = it->input[0];
						//tempE.plugB->output[0] = it->output[0];
						tempE.plugB->input[7] = (char)(A + i);
						tempE.plugB->output[7] = (char)(B + j);
						tempE.plugB->inputed = 8;
						//std::cout << tempE.rotorOne->rotorNumber << " " << tempE.rotorTwo->rotorNumber << " " << tempE.rotorThree->rotorNumber << " | ";
						//tempE.plugB->printPB();
						//std::cout << std::endl;
						//std::cout << it->rotorOneC << " " << it->rotorTwoC << " "<<it->rotorThreeC << std::endl;
						for (int i = 0; i < ogMsg.length(); i++) {
							test.push_back(tempE.inOut(ogMsg[i]));
						}
						double tempIoC = IoC(test);
						Guess tGuess;
						tGuess.setAll(it->rotorOneC, it->rotorTwoC, it->rotorThreeC, it->rotorOneP, it->rotorTwoP, it->rotorThreeP, test, tempIoC, ogMsg);
						tGuess.inputed = 8;
						for (int i = 0; i < it->inputed; i++) {
							tGuess.setSetting(i, it->input[i], it->output[i]);
						}
						//tGuess.setSetting(0,it->input[0],it->output[0]);
						tGuess.setSetting(7, (char)(A + i), (char)(B + j));



						tempE.setRotorsForBombePositions(p1, p2, p3);
						if (tGuess.getSortVar() > initialGuess.getSortVar() && tGuess.distanceIOC < initialGuess.distanceIOC && initialGuess.msg != tGuess.msg) {
							initialListPlugboardForBombe.push_back(tGuess);

							//initialListPlugboardForBombeSecond.push_back(tGuess);	
						}
						initialListPlugboardForBombeEight.push_back(tGuess);
					}
				}
			}


		}
		sortLists(initialListPlugboardForBombeEight, plugBoardEightSorted, 5000);
		std::cout << "\t" << initialListPlugboardForBombeEight.size() << ": Posibilities For Eight Plugboard Setting" << std::endl;

		for (std::list<Guess>::iterator it = plugBoardEightSorted.begin(); it != plugBoardEightSorted.end(); ++it) {
			//std::cout <<testI <<std::endl;
			//testI--;	
			EnigmaForBombe tempE;
			RotorsForBombe* r1Temp = new RotorsForBombe();
			RotorsForBombe* r2Temp = new RotorsForBombe();
			RotorsForBombe* r3Temp = new RotorsForBombe();
			int p1 = it->rotorOneP;
			int p2 = it->rotorTwoP;
			int p3 = it->rotorThreeP;
			int tempNum1 = it->rotorOneC;
			int tempNum2 = it->rotorTwoC;
			int tempNum3 = it->rotorThreeC;
			char input[13];
			char output[13];
			std::string MSG = it->msg;
			std::string ogMsg = it->ogMsg;
			char rotorOne[26] = { 'E','K','M','F','L','G','D','Q','V','Z','N','T','O','W','Y','H','X','U','S','P','A','I','B','R','C','J' };
			char rotorTwo[26] = { 'A','J','D','K','S','I','R','U','X','B','L','H','W','T','M','C','Q','G','Z','N','P','Y','F','V','O','E' };
			char rotorThree[26] = { 'B','D','F','H','J','L','C','P','R','T','X','V','Z','N','Y','E','I','W','G','A','K','M','U','S','Q','O' };
			char rotorFour[26] = { 'E','S','O','V','P','Z','J','A','Y','Q','U','I','R','H','X','L','N','F','T','G','K','D','C','M','W','B' };
			char rotorFive[26] = { 'V','Z','B','R','G','I','T','Y','U','P','S','D','N','H','L','X','A','W','M','J','Q','O','F','E','C','K' };
			char rotorSix[26] = { 'J','P','G','V','O','U','M','F','Y','Q','B','E','N','H','Z','R','D','K','A','S','X','L','I','C','T','W' };
			char rotorSeven[26] = { 'N','Z','J','H','G','R','C','X','M','Y','S','W','B','O','U','F','A','I','V','L','P','E','K','Q','D','T' };
			char rotorEight[26] = { 'F','K','Q','H','T','L','X','O','C','B','J','S','P','D','Z','R','A','M','E','W','N','I','U','Y','G','V' };

			switch (it->rotorOneC) {
			case 1:
				r1Temp->setInputArray(rotorOne);
				r1Temp->setRotorNumber(1);
				break;
			case 2:
				r1Temp->setInputArray(rotorTwo);
				r1Temp->setRotorNumber(2);
				break;
			case 3:
				r1Temp->setInputArray(rotorThree);
				r1Temp->setRotorNumber(3);
				break;
			case 4:
				r1Temp->setInputArray(rotorFour);
				r1Temp->setRotorNumber(4);
				break;
			case 5:
				r1Temp->setInputArray(rotorFive);
				r1Temp->setRotorNumber(5);
				break;
			case 6:
				r1Temp->setInputArray(rotorSix);
				r1Temp->setRotorNumber(6);
				break;
			case 7:
				r1Temp->setInputArray(rotorSeven);
				r1Temp->setRotorNumber(7);
				break;
			case 8:
				r1Temp->setInputArray(rotorEight);
				r1Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorTwoC) {
			case 1:
				r2Temp->setInputArray(rotorOne);
				r2Temp->setRotorNumber(1);
				break;
			case 2:
				r2Temp->setInputArray(rotorTwo);
				r2Temp->setRotorNumber(2);
				break;
			case 3:
				r2Temp->setInputArray(rotorThree);
				r2Temp->setRotorNumber(3);
				break;
			case 4:
				r2Temp->setInputArray(rotorFour);
				r2Temp->setRotorNumber(4);
				break;
			case 5:
				r2Temp->setInputArray(rotorFive);
				r2Temp->setRotorNumber(5);
				break;
			case 6:
				r2Temp->setInputArray(rotorSix);
				r2Temp->setRotorNumber(6);
				break;
			case 7:
				r2Temp->setInputArray(rotorSeven);
				r2Temp->setRotorNumber(7);
				break;
			case 8:
				r2Temp->setInputArray(rotorEight);
				r2Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorThreeC) {
			case 1:
				r3Temp->setInputArray(rotorOne);
				r3Temp->setRotorNumber(1);
				break;
			case 2:
				r3Temp->setInputArray(rotorTwo);
				r3Temp->setRotorNumber(2);
				break;
			case 3:
				r3Temp->setInputArray(rotorThree);
				r3Temp->setRotorNumber(3);
				break;
			case 4:
				r3Temp->setInputArray(rotorFour);
				r3Temp->setRotorNumber(4);
				break;
			case 5:
				r3Temp->setInputArray(rotorFive);
				r3Temp->setRotorNumber(5);
				break;
			case 6:
				r3Temp->setInputArray(rotorSix);
				r3Temp->setRotorNumber(6);
				break;
			case 7:
				r3Temp->setInputArray(rotorSeven);
				r3Temp->setRotorNumber(7);
				break;
			case 8:
				r3Temp->setInputArray(rotorEight);
				r3Temp->setRotorNumber(8);
				break;
			}
			tempE.setRotorsForBombe(r1Temp, r2Temp, r3Temp);
			tempE.setRotorsForBombePositions(p1, p2, p3);

			Guess initialGuess = *it;

			char A = 'A';
			char B = 'A';
			//std::list<char> alp = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
			std::list<std::string> pairsOne; //i[0]
			std::list<std::string> pairsTwo;
			std::list<char> alp; //i[0]
			std::list<char> alp1; //o[0]
			int dontDoBit = 0;
			int dontDoBit2 = 0;
			for (int i = 0; i < 26; i++) {
				for (int j = 0; j < 26; j++) {
					std::list<char>::iterator it3 = alp1.begin();
					for (std::list<char>::iterator it2 = alp.begin(); it2 != alp.end(); ++it2) {
						if (((char)(A + i) == *it2 && (char)(B + j) == *it3) || ((char)(B + j) == *it2 && (char)(A + i) == *it3)) {
							dontDoBit = 1;
							break;
						}
						else {

							if ((char)(A + i) == initialGuess.input[0] || (char)(B + j) == initialGuess.output[0] || (char)(A + i) == initialGuess.output[0] || (char)(B + j) == initialGuess.input[0] ||
								(char)(A + i) == initialGuess.input[1] || (char)(B + j) == initialGuess.output[1] || (char)(A + i) == initialGuess.output[1] || (char)(B + j) == initialGuess.input[1] ||
								(char)(A + i) == initialGuess.input[2] || (char)(B + j) == initialGuess.output[2] || (char)(A + i) == initialGuess.output[2] || (char)(B + j) == initialGuess.input[2] ||
								(char)(A + i) == initialGuess.input[3] || (char)(B + j) == initialGuess.output[3] || (char)(A + i) == initialGuess.output[3] || (char)(B + j) == initialGuess.input[3] ||
								(char)(A + i) == initialGuess.input[4] || (char)(B + j) == initialGuess.output[4] || (char)(A + i) == initialGuess.output[4] || (char)(B + j) == initialGuess.input[4] ||
								(char)(A + i) == initialGuess.input[5] || (char)(B + j) == initialGuess.output[5] || (char)(A + i) == initialGuess.output[5] || (char)(B + j) == initialGuess.input[5] ||
								(char)(A + i) == initialGuess.input[6] || (char)(B + j) == initialGuess.output[6] || (char)(A + i) == initialGuess.output[6] || (char)(B + j) == initialGuess.input[6] ||
								(char)(A + i) == initialGuess.input[7] || (char)(B + j) == initialGuess.output[7] || (char)(A + i) == initialGuess.output[7] || (char)(B + j) == initialGuess.input[7]) {
								dontDoBit = 1;
								break;
							}
							else {
								dontDoBit = 0;
							}
						}
						it3++;

					}
					std::string tempPair = "";
					tempPair.push_back(initialGuess.input[0]);
					tempPair.push_back(initialGuess.output[0]);
					std::string tempPair2 = "";
					tempPair2.push_back((char)(A + i));
					tempPair2.push_back((char)(B + j));

					std::list<std::string>::iterator it5 = pairsTwo.begin();
					for (std::list<std::string>::iterator it4 = pairsOne.begin(); it4 != pairsOne.end(); ++it4) {
						if (*it4 == tempPair && *it5 == tempPair2 || *it4 == tempPair2 && *it5 == tempPair) {
							dontDoBit2 = 1;
							break;
						}
						else {
							dontDoBit2 = 0;
						}
						it5++;
					}
					if (((char)(A + i) != (char)(B + j)) && (char)(A + i) != initialGuess.input[0] && (char)(A + i) != initialGuess.output[0] && (char)(B + j) != initialGuess.input[0] && (char)(B + j) != initialGuess.output[0] &&
						(char)(A + i) != initialGuess.input[1] && (char)(A + i) != initialGuess.output[1] && (char)(B + j) != initialGuess.input[1] && (char)(B + j) != initialGuess.output[1] &&
						(char)(A + i) != initialGuess.input[2] && (char)(A + i) != initialGuess.output[2] && (char)(B + j) != initialGuess.input[2] && (char)(B + j) != initialGuess.output[2] &&
						(char)(A + i) != initialGuess.input[3] && (char)(A + i) != initialGuess.output[3] && (char)(B + j) != initialGuess.input[3] && (char)(B + j) != initialGuess.output[3] &&
						(char)(A + i) != initialGuess.input[4] && (char)(A + i) != initialGuess.output[4] && (char)(B + j) != initialGuess.input[4] && (char)(B + j) != initialGuess.output[4] &&
						(char)(A + i) != initialGuess.input[5] && (char)(A + i) != initialGuess.output[5] && (char)(B + j) != initialGuess.input[5] && (char)(B + j) != initialGuess.output[5] &&
						(char)(A + i) != initialGuess.input[6] && (char)(A + i) != initialGuess.output[6] && (char)(B + j) != initialGuess.input[6] && (char)(B + j) != initialGuess.output[6] &&
						(char)(A + i) != initialGuess.input[7] && (char)(A + i) != initialGuess.output[7] && (char)(B + j) != initialGuess.input[7] && (char)(B + j) != initialGuess.output[7] && dontDoBit == 0 && dontDoBit2 == 0) {
						alp.push_back((char)(A + i));
						alp1.push_back((char)(B + j));



						std::string tempPl = "";
						tempPl.push_back((char)(A + i));
						tempPl.push_back((char)(B + j));
						std::string tempP2 = "";
						tempP2.push_back(initialGuess.input[0]);
						tempP2.push_back(initialGuess.output[0]);
						pairsOne.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsOne.push_back(tempPl);
						for (int i = 0; i < it->inputed; i++) {
							tempE.plugB->input[i] = it->input[i];
							tempE.plugB->output[i] = it->output[i];
						}
						std::string test = "";
						//tempE.plugB->input[0] = it->input[0];
						//tempE.plugB->output[0] = it->output[0];
						tempE.plugB->input[8] = (char)(A + i);
						tempE.plugB->output[8] = (char)(B + j);
						tempE.plugB->inputed = 9;
						//std::cout << tempE.rotorOne->rotorNumber << " " << tempE.rotorTwo->rotorNumber << " " << tempE.rotorThree->rotorNumber << " | ";
						//tempE.plugB->printPB();
						//std::cout << std::endl;
						//std::cout << it->rotorOneC << " " << it->rotorTwoC << " "<<it->rotorThreeC << std::endl;
						for (int i = 0; i < ogMsg.length(); i++) {
							test.push_back(tempE.inOut(ogMsg[i]));
						}
						double tempIoC = IoC(test);
						Guess tGuess;
						tGuess.setAll(it->rotorOneC, it->rotorTwoC, it->rotorThreeC, it->rotorOneP, it->rotorTwoP, it->rotorThreeP, test, tempIoC, ogMsg);
						tGuess.inputed = 9;
						for (int i = 0; i < it->inputed; i++) {
							tGuess.setSetting(i, it->input[i], it->output[i]);
						}
						//tGuess.setSetting(0,it->input[0],it->output[0]);
						tGuess.setSetting(8, (char)(A + i), (char)(B + j));



						tempE.setRotorsForBombePositions(p1, p2, p3);
						if (tGuess.getSortVar() > initialGuess.getSortVar() && tGuess.distanceIOC < initialGuess.distanceIOC && initialGuess.msg != tGuess.msg) {
							initialListPlugboardForBombe.push_back(tGuess);

							//initialListPlugboardForBombeSecond.push_back(tGuess);	
						}
						initialListPlugboardForBombeNine.push_back(tGuess);
					}
				}
			}


		}
		sortLists(initialListPlugboardForBombeNine, plugBoardNineSorted, 5000);
		std::cout << "\t" << initialListPlugboardForBombeNine.size() << ": Posibilities For Nine Plugboard Setting" << std::endl;

		for (std::list<Guess>::iterator it = plugBoardNineSorted.begin(); it != plugBoardNineSorted.end(); ++it) {
			//std::cout <<testI <<std::endl;
			//testI--;	
			EnigmaForBombe tempE;
			RotorsForBombe* r1Temp = new RotorsForBombe();
			RotorsForBombe* r2Temp = new RotorsForBombe();
			RotorsForBombe* r3Temp = new RotorsForBombe();
			int p1 = it->rotorOneP;
			int p2 = it->rotorTwoP;
			int p3 = it->rotorThreeP;
			int tempNum1 = it->rotorOneC;
			int tempNum2 = it->rotorTwoC;
			int tempNum3 = it->rotorThreeC;
			char input[13];
			char output[13];
			std::string MSG = it->msg;
			std::string ogMsg = it->ogMsg;
			char rotorOne[26] = { 'E','K','M','F','L','G','D','Q','V','Z','N','T','O','W','Y','H','X','U','S','P','A','I','B','R','C','J' };
			char rotorTwo[26] = { 'A','J','D','K','S','I','R','U','X','B','L','H','W','T','M','C','Q','G','Z','N','P','Y','F','V','O','E' };
			char rotorThree[26] = { 'B','D','F','H','J','L','C','P','R','T','X','V','Z','N','Y','E','I','W','G','A','K','M','U','S','Q','O' };
			char rotorFour[26] = { 'E','S','O','V','P','Z','J','A','Y','Q','U','I','R','H','X','L','N','F','T','G','K','D','C','M','W','B' };
			char rotorFive[26] = { 'V','Z','B','R','G','I','T','Y','U','P','S','D','N','H','L','X','A','W','M','J','Q','O','F','E','C','K' };
			char rotorSix[26] = { 'J','P','G','V','O','U','M','F','Y','Q','B','E','N','H','Z','R','D','K','A','S','X','L','I','C','T','W' };
			char rotorSeven[26] = { 'N','Z','J','H','G','R','C','X','M','Y','S','W','B','O','U','F','A','I','V','L','P','E','K','Q','D','T' };
			char rotorEight[26] = { 'F','K','Q','H','T','L','X','O','C','B','J','S','P','D','Z','R','A','M','E','W','N','I','U','Y','G','V' };

			switch (it->rotorOneC) {
			case 1:
				r1Temp->setInputArray(rotorOne);
				r1Temp->setRotorNumber(1);
				break;
			case 2:
				r1Temp->setInputArray(rotorTwo);
				r1Temp->setRotorNumber(2);
				break;
			case 3:
				r1Temp->setInputArray(rotorThree);
				r1Temp->setRotorNumber(3);
				break;
			case 4:
				r1Temp->setInputArray(rotorFour);
				r1Temp->setRotorNumber(4);
				break;
			case 5:
				r1Temp->setInputArray(rotorFive);
				r1Temp->setRotorNumber(5);
				break;
			case 6:
				r1Temp->setInputArray(rotorSix);
				r1Temp->setRotorNumber(6);
				break;
			case 7:
				r1Temp->setInputArray(rotorSeven);
				r1Temp->setRotorNumber(7);
				break;
			case 8:
				r1Temp->setInputArray(rotorEight);
				r1Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorTwoC) {
			case 1:
				r2Temp->setInputArray(rotorOne);
				r2Temp->setRotorNumber(1);
				break;
			case 2:
				r2Temp->setInputArray(rotorTwo);
				r2Temp->setRotorNumber(2);
				break;
			case 3:
				r2Temp->setInputArray(rotorThree);
				r2Temp->setRotorNumber(3);
				break;
			case 4:
				r2Temp->setInputArray(rotorFour);
				r2Temp->setRotorNumber(4);
				break;
			case 5:
				r2Temp->setInputArray(rotorFive);
				r2Temp->setRotorNumber(5);
				break;
			case 6:
				r2Temp->setInputArray(rotorSix);
				r2Temp->setRotorNumber(6);
				break;
			case 7:
				r2Temp->setInputArray(rotorSeven);
				r2Temp->setRotorNumber(7);
				break;
			case 8:
				r2Temp->setInputArray(rotorEight);
				r2Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorThreeC) {
			case 1:
				r3Temp->setInputArray(rotorOne);
				r3Temp->setRotorNumber(1);
				break;
			case 2:
				r3Temp->setInputArray(rotorTwo);
				r3Temp->setRotorNumber(2);
				break;
			case 3:
				r3Temp->setInputArray(rotorThree);
				r3Temp->setRotorNumber(3);
				break;
			case 4:
				r3Temp->setInputArray(rotorFour);
				r3Temp->setRotorNumber(4);
				break;
			case 5:
				r3Temp->setInputArray(rotorFive);
				r3Temp->setRotorNumber(5);
				break;
			case 6:
				r3Temp->setInputArray(rotorSix);
				r3Temp->setRotorNumber(6);
				break;
			case 7:
				r3Temp->setInputArray(rotorSeven);
				r3Temp->setRotorNumber(7);
				break;
			case 8:
				r3Temp->setInputArray(rotorEight);
				r3Temp->setRotorNumber(8);
				break;
			}
			tempE.setRotorsForBombe(r1Temp, r2Temp, r3Temp);
			tempE.setRotorsForBombePositions(p1, p2, p3);

			Guess initialGuess = *it;

			char A = 'A';
			char B = 'A';
			//std::list<char> alp = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
			std::list<std::string> pairsOne; //i[0]
			std::list<std::string> pairsTwo;
			std::list<char> alp; //i[0]
			std::list<char> alp1; //o[0]
			int dontDoBit = 0;
			int dontDoBit2 = 0;
			for (int i = 0; i < 26; i++) {
				for (int j = 0; j < 26; j++) {
					std::list<char>::iterator it3 = alp1.begin();
					for (std::list<char>::iterator it2 = alp.begin(); it2 != alp.end(); ++it2) {
						if (((char)(A + i) == *it2 && (char)(B + j) == *it3) || ((char)(B + j) == *it2 && (char)(A + i) == *it3)) {
							dontDoBit = 1;
							break;
						}
						else {

							if ((char)(A + i) == initialGuess.input[0] || (char)(B + j) == initialGuess.output[0] || (char)(A + i) == initialGuess.output[0] || (char)(B + j) == initialGuess.input[0] ||
								(char)(A + i) == initialGuess.input[1] || (char)(B + j) == initialGuess.output[1] || (char)(A + i) == initialGuess.output[1] || (char)(B + j) == initialGuess.input[1] ||
								(char)(A + i) == initialGuess.input[2] || (char)(B + j) == initialGuess.output[2] || (char)(A + i) == initialGuess.output[2] || (char)(B + j) == initialGuess.input[2] ||
								(char)(A + i) == initialGuess.input[3] || (char)(B + j) == initialGuess.output[3] || (char)(A + i) == initialGuess.output[3] || (char)(B + j) == initialGuess.input[3] ||
								(char)(A + i) == initialGuess.input[4] || (char)(B + j) == initialGuess.output[4] || (char)(A + i) == initialGuess.output[4] || (char)(B + j) == initialGuess.input[4] ||
								(char)(A + i) == initialGuess.input[5] || (char)(B + j) == initialGuess.output[5] || (char)(A + i) == initialGuess.output[5] || (char)(B + j) == initialGuess.input[5] ||
								(char)(A + i) == initialGuess.input[6] || (char)(B + j) == initialGuess.output[6] || (char)(A + i) == initialGuess.output[6] || (char)(B + j) == initialGuess.input[6] ||
								(char)(A + i) == initialGuess.input[7] || (char)(B + j) == initialGuess.output[7] || (char)(A + i) == initialGuess.output[7] || (char)(B + j) == initialGuess.input[7] ||
								(char)(A + i) == initialGuess.input[8] || (char)(B + j) == initialGuess.output[8] || (char)(A + i) == initialGuess.output[8] || (char)(B + j) == initialGuess.input[8]) {
								dontDoBit = 1;
								break;
							}
							else {
								dontDoBit = 0;
							}
						}
						it3++;

					}
					std::string tempPair = "";
					tempPair.push_back(initialGuess.input[0]);
					tempPair.push_back(initialGuess.output[0]);
					std::string tempPair2 = "";
					tempPair2.push_back((char)(A + i));
					tempPair2.push_back((char)(B + j));

					std::list<std::string>::iterator it5 = pairsTwo.begin();
					for (std::list<std::string>::iterator it4 = pairsOne.begin(); it4 != pairsOne.end(); ++it4) {
						if (*it4 == tempPair && *it5 == tempPair2 || *it4 == tempPair2 && *it5 == tempPair) {
							dontDoBit2 = 1;
							break;
						}
						else {
							dontDoBit2 = 0;
						}
						it5++;
					}
					if (((char)(A + i) != (char)(B + j)) && (char)(A + i) != initialGuess.input[0] && (char)(A + i) != initialGuess.output[0] && (char)(B + j) != initialGuess.input[0] && (char)(B + j) != initialGuess.output[0] &&
						(char)(A + i) != initialGuess.input[1] && (char)(A + i) != initialGuess.output[1] && (char)(B + j) != initialGuess.input[1] && (char)(B + j) != initialGuess.output[1] &&
						(char)(A + i) != initialGuess.input[2] && (char)(A + i) != initialGuess.output[2] && (char)(B + j) != initialGuess.input[2] && (char)(B + j) != initialGuess.output[2] &&
						(char)(A + i) != initialGuess.input[3] && (char)(A + i) != initialGuess.output[3] && (char)(B + j) != initialGuess.input[3] && (char)(B + j) != initialGuess.output[3] &&
						(char)(A + i) != initialGuess.input[4] && (char)(A + i) != initialGuess.output[4] && (char)(B + j) != initialGuess.input[4] && (char)(B + j) != initialGuess.output[4] &&
						(char)(A + i) != initialGuess.input[5] && (char)(A + i) != initialGuess.output[5] && (char)(B + j) != initialGuess.input[5] && (char)(B + j) != initialGuess.output[5] &&
						(char)(A + i) != initialGuess.input[6] && (char)(A + i) != initialGuess.output[6] && (char)(B + j) != initialGuess.input[6] && (char)(B + j) != initialGuess.output[6] &&
						(char)(A + i) != initialGuess.input[7] && (char)(A + i) != initialGuess.output[7] && (char)(B + j) != initialGuess.input[7] && (char)(B + j) != initialGuess.output[7] &&
						(char)(A + i) != initialGuess.input[8] && (char)(A + i) != initialGuess.output[8] && (char)(B + j) != initialGuess.input[8] && (char)(B + j) != initialGuess.output[8] && dontDoBit == 0 && dontDoBit2 == 0) {
						alp.push_back((char)(A + i));
						alp1.push_back((char)(B + j));



						std::string tempPl = "";
						tempPl.push_back((char)(A + i));
						tempPl.push_back((char)(B + j));
						std::string tempP2 = "";
						tempP2.push_back(initialGuess.input[0]);
						tempP2.push_back(initialGuess.output[0]);
						pairsOne.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsOne.push_back(tempPl);
						for (int i = 0; i < it->inputed; i++) {
							tempE.plugB->input[i] = it->input[i];
							tempE.plugB->output[i] = it->output[i];
						}
						std::string test = "";
						//tempE.plugB->input[0] = it->input[0];
						//tempE.plugB->output[0] = it->output[0];
						tempE.plugB->input[9] = (char)(A + i);
						tempE.plugB->output[9] = (char)(B + j);
						tempE.plugB->inputed = 10;
						//std::cout << tempE.rotorOne->rotorNumber << " " << tempE.rotorTwo->rotorNumber << " " << tempE.rotorThree->rotorNumber << " | ";
						//tempE.plugB->printPB();
						//std::cout << std::endl;
						//std::cout << it->rotorOneC << " " << it->rotorTwoC << " "<<it->rotorThreeC << std::endl;
						for (int i = 0; i < ogMsg.length(); i++) {
							test.push_back(tempE.inOut(ogMsg[i]));
						}
						double tempIoC = IoC(test);
						Guess tGuess;
						tGuess.setAll(it->rotorOneC, it->rotorTwoC, it->rotorThreeC, it->rotorOneP, it->rotorTwoP, it->rotorThreeP, test, tempIoC, ogMsg);
						tGuess.inputed = 10;
						for (int i = 0; i < it->inputed; i++) {
							tGuess.setSetting(i, it->input[i], it->output[i]);
						}
						//tGuess.setSetting(0,it->input[0],it->output[0]);
						tGuess.setSetting(9, (char)(A + i), (char)(B + j));



						tempE.setRotorsForBombePositions(p1, p2, p3);
						if (tGuess.getSortVar() > initialGuess.getSortVar() && tGuess.distanceIOC < initialGuess.distanceIOC && initialGuess.msg != tGuess.msg) {
							initialListPlugboardForBombe.push_back(tGuess);

							//initialListPlugboardForBombeSecond.push_back(tGuess);	
						}
						initialListPlugboardForBombeOneZero.push_back(tGuess);
					}
				}
			}


		}
		sortLists(initialListPlugboardForBombeOneZero, plugBoardOneZeroSorted, 5000);
		std::cout << "\t" << initialListPlugboardForBombeOneZero.size() << ": Posibilities For Ten Plugboard Setting" << std::endl;
		/*
		for (std::list<Guess>::iterator it = plugBoardOneZeroSorted.begin(); it != plugBoardOneZeroSorted.end(); ++it) {
			//std::cout <<testI <<std::endl;
			//testI--;	
			EnigmaForBombe tempE;
			RotorsForBombe* r1Temp = new RotorsForBombe();
			RotorsForBombe* r2Temp = new RotorsForBombe();
			RotorsForBombe* r3Temp = new RotorsForBombe();
			int p1 = it->rotorOneP;
			int p2 = it->rotorTwoP;
			int p3 = it->rotorThreeP;
			int tempNum1 = it->rotorOneC;
			int tempNum2 = it->rotorTwoC;
			int tempNum3 = it->rotorThreeC;
			char input[13];
			char output[13];
			std::string MSG = it->msg;
			std::string ogMsg = it->ogMsg;
			char rotorOne[26] = { 'E','K','M','F','L','G','D','Q','V','Z','N','T','O','W','Y','H','X','U','S','P','A','I','B','R','C','J' };
			char rotorTwo[26] = { 'A','J','D','K','S','I','R','U','X','B','L','H','W','T','M','C','Q','G','Z','N','P','Y','F','V','O','E' };
			char rotorThree[26] = { 'B','D','F','H','J','L','C','P','R','T','X','V','Z','N','Y','E','I','W','G','A','K','M','U','S','Q','O' };
			char rotorFour[26] = { 'E','S','O','V','P','Z','J','A','Y','Q','U','I','R','H','X','L','N','F','T','G','K','D','C','M','W','B' };
			char rotorFive[26] = { 'V','Z','B','R','G','I','T','Y','U','P','S','D','N','H','L','X','A','W','M','J','Q','O','F','E','C','K' };
			char rotorSix[26] = { 'J','P','G','V','O','U','M','F','Y','Q','B','E','N','H','Z','R','D','K','A','S','X','L','I','C','T','W' };
			char rotorSeven[26] = { 'N','Z','J','H','G','R','C','X','M','Y','S','W','B','O','U','F','A','I','V','L','P','E','K','Q','D','T' };
			char rotorEight[26] = { 'F','K','Q','H','T','L','X','O','C','B','J','S','P','D','Z','R','A','M','E','W','N','I','U','Y','G','V' };

			switch (it->rotorOneC) {
			case 1:
				r1Temp->setInputArray(rotorOne);
				r1Temp->setRotorNumber(1);
				break;
			case 2:
				r1Temp->setInputArray(rotorTwo);
				r1Temp->setRotorNumber(2);
				break;
			case 3:
				r1Temp->setInputArray(rotorThree);
				r1Temp->setRotorNumber(3);
				break;
			case 4:
				r1Temp->setInputArray(rotorFour);
				r1Temp->setRotorNumber(4);
				break;
			case 5:
				r1Temp->setInputArray(rotorFive);
				r1Temp->setRotorNumber(5);
				break;
			case 6:
				r1Temp->setInputArray(rotorSix);
				r1Temp->setRotorNumber(6);
				break;
			case 7:
				r1Temp->setInputArray(rotorSeven);
				r1Temp->setRotorNumber(7);
				break;
			case 8:
				r1Temp->setInputArray(rotorEight);
				r1Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorTwoC) {
			case 1:
				r2Temp->setInputArray(rotorOne);
				r2Temp->setRotorNumber(1);
				break;
			case 2:
				r2Temp->setInputArray(rotorTwo);
				r2Temp->setRotorNumber(2);
				break;
			case 3:
				r2Temp->setInputArray(rotorThree);
				r2Temp->setRotorNumber(3);
				break;
			case 4:
				r2Temp->setInputArray(rotorFour);
				r2Temp->setRotorNumber(4);
				break;
			case 5:
				r2Temp->setInputArray(rotorFive);
				r2Temp->setRotorNumber(5);
				break;
			case 6:
				r2Temp->setInputArray(rotorSix);
				r2Temp->setRotorNumber(6);
				break;
			case 7:
				r2Temp->setInputArray(rotorSeven);
				r2Temp->setRotorNumber(7);
				break;
			case 8:
				r2Temp->setInputArray(rotorEight);
				r2Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorThreeC) {
			case 1:
				r3Temp->setInputArray(rotorOne);
				r3Temp->setRotorNumber(1);
				break;
			case 2:
				r3Temp->setInputArray(rotorTwo);
				r3Temp->setRotorNumber(2);
				break;
			case 3:
				r3Temp->setInputArray(rotorThree);
				r3Temp->setRotorNumber(3);
				break;
			case 4:
				r3Temp->setInputArray(rotorFour);
				r3Temp->setRotorNumber(4);
				break;
			case 5:
				r3Temp->setInputArray(rotorFive);
				r3Temp->setRotorNumber(5);
				break;
			case 6:
				r3Temp->setInputArray(rotorSix);
				r3Temp->setRotorNumber(6);
				break;
			case 7:
				r3Temp->setInputArray(rotorSeven);
				r3Temp->setRotorNumber(7);
				break;
			case 8:
				r3Temp->setInputArray(rotorEight);
				r3Temp->setRotorNumber(8);
				break;
			}
			tempE.setRotorsForBombe(r1Temp, r2Temp, r3Temp);
			tempE.setRotorsForBombePositions(p1, p2, p3);

			Guess initialGuess = *it;

			char A = 'A';
			char B = 'A';
			//std::list<char> alp = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
			std::list<std::string> pairsOne; //i[0]
			std::list<std::string> pairsTwo;
			std::list<char> alp; //i[0]
			std::list<char> alp1; //o[0]
			int dontDoBit = 0;
			int dontDoBit2 = 0;
			for (int i = 0; i < 26; i++) {
				for (int j = 0; j < 26; j++) {
					std::list<char>::iterator it3 = alp1.begin();
					for (std::list<char>::iterator it2 = alp.begin(); it2 != alp.end(); ++it2) {
						if (((char)(A + i) == *it2 && (char)(B + j) == *it3) || ((char)(B + j) == *it2 && (char)(A + i) == *it3)) {
							dontDoBit = 1;
							break;
						}
						else {

							if ((char)(A + i) == initialGuess.input[0] || (char)(B + j) == initialGuess.output[0] || (char)(A + i) == initialGuess.output[0] || (char)(B + j) == initialGuess.input[0] ||
								(char)(A + i) == initialGuess.input[1] || (char)(B + j) == initialGuess.output[1] || (char)(A + i) == initialGuess.output[1] || (char)(B + j) == initialGuess.input[1] ||
								(char)(A + i) == initialGuess.input[2] || (char)(B + j) == initialGuess.output[2] || (char)(A + i) == initialGuess.output[2] || (char)(B + j) == initialGuess.input[2] ||
								(char)(A + i) == initialGuess.input[3] || (char)(B + j) == initialGuess.output[3] || (char)(A + i) == initialGuess.output[3] || (char)(B + j) == initialGuess.input[3] ||
								(char)(A + i) == initialGuess.input[4] || (char)(B + j) == initialGuess.output[4] || (char)(A + i) == initialGuess.output[4] || (char)(B + j) == initialGuess.input[4] ||
								(char)(A + i) == initialGuess.input[5] || (char)(B + j) == initialGuess.output[5] || (char)(A + i) == initialGuess.output[5] || (char)(B + j) == initialGuess.input[5] ||
								(char)(A + i) == initialGuess.input[6] || (char)(B + j) == initialGuess.output[6] || (char)(A + i) == initialGuess.output[6] || (char)(B + j) == initialGuess.input[6] ||
								(char)(A + i) == initialGuess.input[7] || (char)(B + j) == initialGuess.output[7] || (char)(A + i) == initialGuess.output[7] || (char)(B + j) == initialGuess.input[7] ||
								(char)(A + i) == initialGuess.input[8] || (char)(B + j) == initialGuess.output[8] || (char)(A + i) == initialGuess.output[8] || (char)(B + j) == initialGuess.input[8] ||
								(char)(A + i) == initialGuess.input[9] || (char)(B + j) == initialGuess.output[9] || (char)(A + i) == initialGuess.output[9] || (char)(B + j) == initialGuess.input[9]) {
								dontDoBit = 1;
								break;
							}
							else {
								dontDoBit = 0;
							}
						}
						it3++;

					}
					std::string tempPair = "";
					tempPair.push_back(initialGuess.input[0]);
					tempPair.push_back(initialGuess.output[0]);
					std::string tempPair2 = "";
					tempPair2.push_back((char)(A + i));
					tempPair2.push_back((char)(B + j));

					std::list<std::string>::iterator it5 = pairsTwo.begin();
					for (std::list<std::string>::iterator it4 = pairsOne.begin(); it4 != pairsOne.end(); ++it4) {
						if (*it4 == tempPair && *it5 == tempPair2 || *it4 == tempPair2 && *it5 == tempPair) {
							dontDoBit2 = 1;
							break;
						}
						else {
							dontDoBit2 = 0;
						}
						it5++;
					}
					if (((char)(A + i) != (char)(B + j)) && (char)(A + i) != initialGuess.input[0] && (char)(A + i) != initialGuess.output[0] && (char)(B + j) != initialGuess.input[0] && (char)(B + j) != initialGuess.output[0] &&
						(char)(A + i) != initialGuess.input[1] && (char)(A + i) != initialGuess.output[1] && (char)(B + j) != initialGuess.input[1] && (char)(B + j) != initialGuess.output[1] &&
						(char)(A + i) != initialGuess.input[2] && (char)(A + i) != initialGuess.output[2] && (char)(B + j) != initialGuess.input[2] && (char)(B + j) != initialGuess.output[2] &&
						(char)(A + i) != initialGuess.input[3] && (char)(A + i) != initialGuess.output[3] && (char)(B + j) != initialGuess.input[3] && (char)(B + j) != initialGuess.output[3] &&
						(char)(A + i) != initialGuess.input[4] && (char)(A + i) != initialGuess.output[4] && (char)(B + j) != initialGuess.input[4] && (char)(B + j) != initialGuess.output[4] &&
						(char)(A + i) != initialGuess.input[5] && (char)(A + i) != initialGuess.output[5] && (char)(B + j) != initialGuess.input[5] && (char)(B + j) != initialGuess.output[5] &&
						(char)(A + i) != initialGuess.input[6] && (char)(A + i) != initialGuess.output[6] && (char)(B + j) != initialGuess.input[6] && (char)(B + j) != initialGuess.output[6] &&
						(char)(A + i) != initialGuess.input[7] && (char)(A + i) != initialGuess.output[7] && (char)(B + j) != initialGuess.input[7] && (char)(B + j) != initialGuess.output[7] &&
						(char)(A + i) != initialGuess.input[8] && (char)(A + i) != initialGuess.output[8] && (char)(B + j) != initialGuess.input[8] && (char)(B + j) != initialGuess.output[8] &&
						(char)(A + i) != initialGuess.input[9] && (char)(A + i) != initialGuess.output[9] && (char)(B + j) != initialGuess.input[9] && (char)(B + j) != initialGuess.output[9] && dontDoBit == 0 && dontDoBit2 == 0) {
						alp.push_back((char)(A + i));
						alp1.push_back((char)(B + j));



						std::string tempPl = "";
						tempPl.push_back((char)(A + i));
						tempPl.push_back((char)(B + j));
						std::string tempP2 = "";
						tempP2.push_back(initialGuess.input[0]);
						tempP2.push_back(initialGuess.output[0]);
						pairsOne.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsOne.push_back(tempPl);
						for (int i = 0; i < it->inputed; i++) {
							tempE.plugB->input[i] = it->input[i];
							tempE.plugB->output[i] = it->output[i];
						}
						std::string test = "";
						//tempE.plugB->input[0] = it->input[0];
						//tempE.plugB->output[0] = it->output[0];
						tempE.plugB->input[10] = (char)(A + i);
						tempE.plugB->output[10] = (char)(B + j);
						tempE.plugB->inputed = 11;
						//std::cout << tempE.rotorOne->rotorNumber << " " << tempE.rotorTwo->rotorNumber << " " << tempE.rotorThree->rotorNumber << " | ";
						//tempE.plugB->printPB();
						//std::cout << std::endl;
						//std::cout << it->rotorOneC << " " << it->rotorTwoC << " "<<it->rotorThreeC << std::endl;
						for (int i = 0; i < ogMsg.length(); i++) {
							test.push_back(tempE.inOut(ogMsg[i]));
						}
						double tempIoC = IoC(test);
						Guess tGuess;
						tGuess.setAll(it->rotorOneC, it->rotorTwoC, it->rotorThreeC, it->rotorOneP, it->rotorTwoP, it->rotorThreeP, test, tempIoC, ogMsg);
						tGuess.inputed = 11;
						for (int i = 0; i < it->inputed; i++) {
							tGuess.setSetting(i, it->input[i], it->output[i]);
						}
						//tGuess.setSetting(0,it->input[0],it->output[0]);
						tGuess.setSetting(10, (char)(A + i), (char)(B + j));



						tempE.setRotorsForBombePositions(p1, p2, p3);
						if (tGuess.getSortVar() > initialGuess.getSortVar() && tGuess.distanceIOC < initialGuess.distanceIOC && initialGuess.msg != tGuess.msg) {
							initialListPlugboardForBombe.push_back(tGuess);

							//initialListPlugboardForBombeSecond.push_back(tGuess);	
						}
						initialListPlugboardForBombeOneOne.push_back(tGuess);
					}
				}
			}


		}
		sortLists(initialListPlugboardForBombeOneOne, plugBoardOneOneSorted, 5000);
		std::cout << "\t" << initialListPlugboardForBombeOneOne.size() << ": Posibilities For Eleven Plugboard Setting" << std::endl;

		for (std::list<Guess>::iterator it = plugBoardOneOneSorted.begin(); it != plugBoardOneOneSorted.end(); ++it) {
			//std::cout <<testI <<std::endl;
			//testI--;	
			EnigmaForBombe tempE;
			RotorsForBombe* r1Temp = new RotorsForBombe();
			RotorsForBombe* r2Temp = new RotorsForBombe();
			RotorsForBombe* r3Temp = new RotorsForBombe();
			int p1 = it->rotorOneP;
			int p2 = it->rotorTwoP;
			int p3 = it->rotorThreeP;
			int tempNum1 = it->rotorOneC;
			int tempNum2 = it->rotorTwoC;
			int tempNum3 = it->rotorThreeC;
			char input[13];
			char output[13];
			std::string MSG = it->msg;
			std::string ogMsg = it->ogMsg;
			char rotorOne[26] = { 'E','K','M','F','L','G','D','Q','V','Z','N','T','O','W','Y','H','X','U','S','P','A','I','B','R','C','J' };
			char rotorTwo[26] = { 'A','J','D','K','S','I','R','U','X','B','L','H','W','T','M','C','Q','G','Z','N','P','Y','F','V','O','E' };
			char rotorThree[26] = { 'B','D','F','H','J','L','C','P','R','T','X','V','Z','N','Y','E','I','W','G','A','K','M','U','S','Q','O' };
			char rotorFour[26] = { 'E','S','O','V','P','Z','J','A','Y','Q','U','I','R','H','X','L','N','F','T','G','K','D','C','M','W','B' };
			char rotorFive[26] = { 'V','Z','B','R','G','I','T','Y','U','P','S','D','N','H','L','X','A','W','M','J','Q','O','F','E','C','K' };
			char rotorSix[26] = { 'J','P','G','V','O','U','M','F','Y','Q','B','E','N','H','Z','R','D','K','A','S','X','L','I','C','T','W' };
			char rotorSeven[26] = { 'N','Z','J','H','G','R','C','X','M','Y','S','W','B','O','U','F','A','I','V','L','P','E','K','Q','D','T' };
			char rotorEight[26] = { 'F','K','Q','H','T','L','X','O','C','B','J','S','P','D','Z','R','A','M','E','W','N','I','U','Y','G','V' };

			switch (it->rotorOneC) {
			case 1:
				r1Temp->setInputArray(rotorOne);
				r1Temp->setRotorNumber(1);
				break;
			case 2:
				r1Temp->setInputArray(rotorTwo);
				r1Temp->setRotorNumber(2);
				break;
			case 3:
				r1Temp->setInputArray(rotorThree);
				r1Temp->setRotorNumber(3);
				break;
			case 4:
				r1Temp->setInputArray(rotorFour);
				r1Temp->setRotorNumber(4);
				break;
			case 5:
				r1Temp->setInputArray(rotorFive);
				r1Temp->setRotorNumber(5);
				break;
			case 6:
				r1Temp->setInputArray(rotorSix);
				r1Temp->setRotorNumber(6);
				break;
			case 7:
				r1Temp->setInputArray(rotorSeven);
				r1Temp->setRotorNumber(7);
				break;
			case 8:
				r1Temp->setInputArray(rotorEight);
				r1Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorTwoC) {
			case 1:
				r2Temp->setInputArray(rotorOne);
				r2Temp->setRotorNumber(1);
				break;
			case 2:
				r2Temp->setInputArray(rotorTwo);
				r2Temp->setRotorNumber(2);
				break;
			case 3:
				r2Temp->setInputArray(rotorThree);
				r2Temp->setRotorNumber(3);
				break;
			case 4:
				r2Temp->setInputArray(rotorFour);
				r2Temp->setRotorNumber(4);
				break;
			case 5:
				r2Temp->setInputArray(rotorFive);
				r2Temp->setRotorNumber(5);
				break;
			case 6:
				r2Temp->setInputArray(rotorSix);
				r2Temp->setRotorNumber(6);
				break;
			case 7:
				r2Temp->setInputArray(rotorSeven);
				r2Temp->setRotorNumber(7);
				break;
			case 8:
				r2Temp->setInputArray(rotorEight);
				r2Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorThreeC) {
			case 1:
				r3Temp->setInputArray(rotorOne);
				r3Temp->setRotorNumber(1);
				break;
			case 2:
				r3Temp->setInputArray(rotorTwo);
				r3Temp->setRotorNumber(2);
				break;
			case 3:
				r3Temp->setInputArray(rotorThree);
				r3Temp->setRotorNumber(3);
				break;
			case 4:
				r3Temp->setInputArray(rotorFour);
				r3Temp->setRotorNumber(4);
				break;
			case 5:
				r3Temp->setInputArray(rotorFive);
				r3Temp->setRotorNumber(5);
				break;
			case 6:
				r3Temp->setInputArray(rotorSix);
				r3Temp->setRotorNumber(6);
				break;
			case 7:
				r3Temp->setInputArray(rotorSeven);
				r3Temp->setRotorNumber(7);
				break;
			case 8:
				r3Temp->setInputArray(rotorEight);
				r3Temp->setRotorNumber(8);
				break;
			}
			tempE.setRotorsForBombe(r1Temp, r2Temp, r3Temp);
			tempE.setRotorsForBombePositions(p1, p2, p3);

			Guess initialGuess = *it;

			char A = 'A';
			char B = 'A';
			//std::list<char> alp = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
			std::list<std::string> pairsOne; //i[0]
			std::list<std::string> pairsTwo;
			std::list<char> alp; //i[0]
			std::list<char> alp1; //o[0]
			int dontDoBit = 0;
			int dontDoBit2 = 0;
			for (int i = 0; i < 26; i++) {
				for (int j = 0; j < 26; j++) {
					std::list<char>::iterator it3 = alp1.begin();
					for (std::list<char>::iterator it2 = alp.begin(); it2 != alp.end(); ++it2) {
						if (((char)(A + i) == *it2 && (char)(B + j) == *it3) || ((char)(B + j) == *it2 && (char)(A + i) == *it3)) {
							dontDoBit = 1;
							break;
						}
						else {

							if ((char)(A + i) == initialGuess.input[0] || (char)(B + j) == initialGuess.output[0] || (char)(A + i) == initialGuess.output[0] || (char)(B + j) == initialGuess.input[0] ||
								(char)(A + i) == initialGuess.input[1] || (char)(B + j) == initialGuess.output[1] || (char)(A + i) == initialGuess.output[1] || (char)(B + j) == initialGuess.input[1] ||
								(char)(A + i) == initialGuess.input[2] || (char)(B + j) == initialGuess.output[2] || (char)(A + i) == initialGuess.output[2] || (char)(B + j) == initialGuess.input[2] ||
								(char)(A + i) == initialGuess.input[3] || (char)(B + j) == initialGuess.output[3] || (char)(A + i) == initialGuess.output[3] || (char)(B + j) == initialGuess.input[3] ||
								(char)(A + i) == initialGuess.input[4] || (char)(B + j) == initialGuess.output[4] || (char)(A + i) == initialGuess.output[4] || (char)(B + j) == initialGuess.input[4] ||
								(char)(A + i) == initialGuess.input[5] || (char)(B + j) == initialGuess.output[5] || (char)(A + i) == initialGuess.output[5] || (char)(B + j) == initialGuess.input[5] ||
								(char)(A + i) == initialGuess.input[6] || (char)(B + j) == initialGuess.output[6] || (char)(A + i) == initialGuess.output[6] || (char)(B + j) == initialGuess.input[6] ||
								(char)(A + i) == initialGuess.input[7] || (char)(B + j) == initialGuess.output[7] || (char)(A + i) == initialGuess.output[7] || (char)(B + j) == initialGuess.input[7] ||
								(char)(A + i) == initialGuess.input[8] || (char)(B + j) == initialGuess.output[8] || (char)(A + i) == initialGuess.output[8] || (char)(B + j) == initialGuess.input[8] ||
								(char)(A + i) == initialGuess.input[9] || (char)(B + j) == initialGuess.output[9] || (char)(A + i) == initialGuess.output[9] || (char)(B + j) == initialGuess.input[9] ||
								(char)(A + i) == initialGuess.input[10] || (char)(B + j) == initialGuess.output[10] || (char)(A + i) == initialGuess.output[10] || (char)(B + j) == initialGuess.input[10]) {
								dontDoBit = 1;
								break;
							}
							else {
								dontDoBit = 0;
							}
						}
						it3++;

					}
					std::string tempPair = "";
					tempPair.push_back(initialGuess.input[0]);
					tempPair.push_back(initialGuess.output[0]);
					std::string tempPair2 = "";
					tempPair2.push_back((char)(A + i));
					tempPair2.push_back((char)(B + j));

					std::list<std::string>::iterator it5 = pairsTwo.begin();
					for (std::list<std::string>::iterator it4 = pairsOne.begin(); it4 != pairsOne.end(); ++it4) {
						if (*it4 == tempPair && *it5 == tempPair2 || *it4 == tempPair2 && *it5 == tempPair) {
							dontDoBit2 = 1;
							break;
						}
						else {
							dontDoBit2 = 0;
						}
						it5++;
					}
					if (((char)(A + i) != (char)(B + j)) && (char)(A + i) != initialGuess.input[0] && (char)(A + i) != initialGuess.output[0] && (char)(B + j) != initialGuess.input[0] && (char)(B + j) != initialGuess.output[0] &&
						(char)(A + i) != initialGuess.input[1] && (char)(A + i) != initialGuess.output[1] && (char)(B + j) != initialGuess.input[1] && (char)(B + j) != initialGuess.output[1] &&
						(char)(A + i) != initialGuess.input[2] && (char)(A + i) != initialGuess.output[2] && (char)(B + j) != initialGuess.input[2] && (char)(B + j) != initialGuess.output[2] &&
						(char)(A + i) != initialGuess.input[3] && (char)(A + i) != initialGuess.output[3] && (char)(B + j) != initialGuess.input[3] && (char)(B + j) != initialGuess.output[3] &&
						(char)(A + i) != initialGuess.input[4] && (char)(A + i) != initialGuess.output[4] && (char)(B + j) != initialGuess.input[4] && (char)(B + j) != initialGuess.output[4] &&
						(char)(A + i) != initialGuess.input[5] && (char)(A + i) != initialGuess.output[5] && (char)(B + j) != initialGuess.input[5] && (char)(B + j) != initialGuess.output[5] &&
						(char)(A + i) != initialGuess.input[6] && (char)(A + i) != initialGuess.output[6] && (char)(B + j) != initialGuess.input[6] && (char)(B + j) != initialGuess.output[6] &&
						(char)(A + i) != initialGuess.input[7] && (char)(A + i) != initialGuess.output[7] && (char)(B + j) != initialGuess.input[7] && (char)(B + j) != initialGuess.output[7] &&
						(char)(A + i) != initialGuess.input[8] && (char)(A + i) != initialGuess.output[8] && (char)(B + j) != initialGuess.input[8] && (char)(B + j) != initialGuess.output[8] &&
						(char)(A + i) != initialGuess.input[9] && (char)(A + i) != initialGuess.output[9] && (char)(B + j) != initialGuess.input[9] && (char)(B + j) != initialGuess.output[9] &&
						(char)(A + i) != initialGuess.input[10] && (char)(A + i) != initialGuess.output[10] && (char)(B + j) != initialGuess.input[10] && (char)(B + j) != initialGuess.output[10] && dontDoBit == 0 && dontDoBit2 == 0) {
						alp.push_back((char)(A + i));
						alp1.push_back((char)(B + j));



						std::string tempPl = "";
						tempPl.push_back((char)(A + i));
						tempPl.push_back((char)(B + j));
						std::string tempP2 = "";
						tempP2.push_back(initialGuess.input[0]);
						tempP2.push_back(initialGuess.output[0]);
						pairsOne.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsOne.push_back(tempPl);
						for (int i = 0; i < it->inputed; i++) {
							tempE.plugB->input[i] = it->input[i];
							tempE.plugB->output[i] = it->output[i];
						}
						std::string test = "";
						//tempE.plugB->input[0] = it->input[0];
						//tempE.plugB->output[0] = it->output[0];
						tempE.plugB->input[11] = (char)(A + i);
						tempE.plugB->output[11] = (char)(B + j);
						tempE.plugB->inputed = 12;
						//std::cout << tempE.rotorOne->rotorNumber << " " << tempE.rotorTwo->rotorNumber << " " << tempE.rotorThree->rotorNumber << " | ";
						//tempE.plugB->printPB();
						//std::cout << std::endl;
						//std::cout << it->rotorOneC << " " << it->rotorTwoC << " "<<it->rotorThreeC << std::endl;
						for (int i = 0; i < ogMsg.length(); i++) {
							test.push_back(tempE.inOut(ogMsg[i]));
						}
						double tempIoC = IoC(test);
						Guess tGuess;
						tGuess.setAll(it->rotorOneC, it->rotorTwoC, it->rotorThreeC, it->rotorOneP, it->rotorTwoP, it->rotorThreeP, test, tempIoC, ogMsg);
						tGuess.inputed = 12;
						for (int i = 0; i < it->inputed; i++) {
							tGuess.setSetting(i, it->input[i], it->output[i]);
						}
						//tGuess.setSetting(0,it->input[0],it->output[0]);
						tGuess.setSetting(11, (char)(A + i), (char)(B + j));



						tempE.setRotorsForBombePositions(p1, p2, p3);
						if (tGuess.getSortVar() > initialGuess.getSortVar() && tGuess.distanceIOC < initialGuess.distanceIOC && initialGuess.msg != tGuess.msg) {
							initialListPlugboardForBombe.push_back(tGuess);

							//initialListPlugboardForBombeSecond.push_back(tGuess);	
						}
						initialListPlugboardForBombeOneTwo.push_back(tGuess);
					}
				}
			}


		}
		sortLists(initialListPlugboardForBombeOneTwo, plugBoardOneOneSorted, 5000);
		std::cout << "\t" << initialListPlugboardForBombeOneTwo.size() << ": Posibilities For Twelve Plugboard Setting" << std::endl;

		for (std::list<Guess>::iterator it = plugBoardOneTwoSorted.begin(); it != plugBoardOneTwoSorted.end(); ++it) {
			//std::cout <<testI <<std::endl;
			//testI--;	
			EnigmaForBombe tempE;
			RotorsForBombe* r1Temp = new RotorsForBombe();
			RotorsForBombe* r2Temp = new RotorsForBombe();
			RotorsForBombe* r3Temp = new RotorsForBombe();
			int p1 = it->rotorOneP;
			int p2 = it->rotorTwoP;
			int p3 = it->rotorThreeP;
			int tempNum1 = it->rotorOneC;
			int tempNum2 = it->rotorTwoC;
			int tempNum3 = it->rotorThreeC;
			char input[13];
			char output[13];
			std::string MSG = it->msg;
			std::string ogMsg = it->ogMsg;
			char rotorOne[26] = { 'E','K','M','F','L','G','D','Q','V','Z','N','T','O','W','Y','H','X','U','S','P','A','I','B','R','C','J' };
			char rotorTwo[26] = { 'A','J','D','K','S','I','R','U','X','B','L','H','W','T','M','C','Q','G','Z','N','P','Y','F','V','O','E' };
			char rotorThree[26] = { 'B','D','F','H','J','L','C','P','R','T','X','V','Z','N','Y','E','I','W','G','A','K','M','U','S','Q','O' };
			char rotorFour[26] = { 'E','S','O','V','P','Z','J','A','Y','Q','U','I','R','H','X','L','N','F','T','G','K','D','C','M','W','B' };
			char rotorFive[26] = { 'V','Z','B','R','G','I','T','Y','U','P','S','D','N','H','L','X','A','W','M','J','Q','O','F','E','C','K' };
			char rotorSix[26] = { 'J','P','G','V','O','U','M','F','Y','Q','B','E','N','H','Z','R','D','K','A','S','X','L','I','C','T','W' };
			char rotorSeven[26] = { 'N','Z','J','H','G','R','C','X','M','Y','S','W','B','O','U','F','A','I','V','L','P','E','K','Q','D','T' };
			char rotorEight[26] = { 'F','K','Q','H','T','L','X','O','C','B','J','S','P','D','Z','R','A','M','E','W','N','I','U','Y','G','V' };

			switch (it->rotorOneC) {
			case 1:
				r1Temp->setInputArray(rotorOne);
				r1Temp->setRotorNumber(1);
				break;
			case 2:
				r1Temp->setInputArray(rotorTwo);
				r1Temp->setRotorNumber(2);
				break;
			case 3:
				r1Temp->setInputArray(rotorThree);
				r1Temp->setRotorNumber(3);
				break;
			case 4:
				r1Temp->setInputArray(rotorFour);
				r1Temp->setRotorNumber(4);
				break;
			case 5:
				r1Temp->setInputArray(rotorFive);
				r1Temp->setRotorNumber(5);
				break;
			case 6:
				r1Temp->setInputArray(rotorSix);
				r1Temp->setRotorNumber(6);
				break;
			case 7:
				r1Temp->setInputArray(rotorSeven);
				r1Temp->setRotorNumber(7);
				break;
			case 8:
				r1Temp->setInputArray(rotorEight);
				r1Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorTwoC) {
			case 1:
				r2Temp->setInputArray(rotorOne);
				r2Temp->setRotorNumber(1);
				break;
			case 2:
				r2Temp->setInputArray(rotorTwo);
				r2Temp->setRotorNumber(2);
				break;
			case 3:
				r2Temp->setInputArray(rotorThree);
				r2Temp->setRotorNumber(3);
				break;
			case 4:
				r2Temp->setInputArray(rotorFour);
				r2Temp->setRotorNumber(4);
				break;
			case 5:
				r2Temp->setInputArray(rotorFive);
				r2Temp->setRotorNumber(5);
				break;
			case 6:
				r2Temp->setInputArray(rotorSix);
				r2Temp->setRotorNumber(6);
				break;
			case 7:
				r2Temp->setInputArray(rotorSeven);
				r2Temp->setRotorNumber(7);
				break;
			case 8:
				r2Temp->setInputArray(rotorEight);
				r2Temp->setRotorNumber(8);
				break;
			}
			switch (it->rotorThreeC) {
			case 1:
				r3Temp->setInputArray(rotorOne);
				r3Temp->setRotorNumber(1);
				break;
			case 2:
				r3Temp->setInputArray(rotorTwo);
				r3Temp->setRotorNumber(2);
				break;
			case 3:
				r3Temp->setInputArray(rotorThree);
				r3Temp->setRotorNumber(3);
				break;
			case 4:
				r3Temp->setInputArray(rotorFour);
				r3Temp->setRotorNumber(4);
				break;
			case 5:
				r3Temp->setInputArray(rotorFive);
				r3Temp->setRotorNumber(5);
				break;
			case 6:
				r3Temp->setInputArray(rotorSix);
				r3Temp->setRotorNumber(6);
				break;
			case 7:
				r3Temp->setInputArray(rotorSeven);
				r3Temp->setRotorNumber(7);
				break;
			case 8:
				r3Temp->setInputArray(rotorEight);
				r3Temp->setRotorNumber(8);
				break;
			}
			tempE.setRotorsForBombe(r1Temp, r2Temp, r3Temp);
			tempE.setRotorsForBombePositions(p1, p2, p3);

			Guess initialGuess = *it;

			char A = 'A';
			char B = 'A';
			//std::list<char> alp = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
			std::list<std::string> pairsOne; //i[0]
			std::list<std::string> pairsTwo;
			std::list<char> alp; //i[0]
			std::list<char> alp1; //o[0]
			int dontDoBit = 0;
			int dontDoBit2 = 0;
			for (int i = 0; i < 26; i++) {
				for (int j = 0; j < 26; j++) {
					std::list<char>::iterator it3 = alp1.begin();
					for (std::list<char>::iterator it2 = alp.begin(); it2 != alp.end(); ++it2) {
						if (((char)(A + i) == *it2 && (char)(B + j) == *it3) || ((char)(B + j) == *it2 && (char)(A + i) == *it3)) {
							dontDoBit = 1;
							break;
						}
						else {

							if ((char)(A + i) == initialGuess.input[0] || (char)(B + j) == initialGuess.output[0] || (char)(A + i) == initialGuess.output[0] || (char)(B + j) == initialGuess.input[0] ||
								(char)(A + i) == initialGuess.input[1] || (char)(B + j) == initialGuess.output[1] || (char)(A + i) == initialGuess.output[1] || (char)(B + j) == initialGuess.input[1] ||
								(char)(A + i) == initialGuess.input[2] || (char)(B + j) == initialGuess.output[2] || (char)(A + i) == initialGuess.output[2] || (char)(B + j) == initialGuess.input[2] ||
								(char)(A + i) == initialGuess.input[3] || (char)(B + j) == initialGuess.output[3] || (char)(A + i) == initialGuess.output[3] || (char)(B + j) == initialGuess.input[3] ||
								(char)(A + i) == initialGuess.input[4] || (char)(B + j) == initialGuess.output[4] || (char)(A + i) == initialGuess.output[4] || (char)(B + j) == initialGuess.input[4] ||
								(char)(A + i) == initialGuess.input[5] || (char)(B + j) == initialGuess.output[5] || (char)(A + i) == initialGuess.output[5] || (char)(B + j) == initialGuess.input[5] ||
								(char)(A + i) == initialGuess.input[6] || (char)(B + j) == initialGuess.output[6] || (char)(A + i) == initialGuess.output[6] || (char)(B + j) == initialGuess.input[6] ||
								(char)(A + i) == initialGuess.input[7] || (char)(B + j) == initialGuess.output[7] || (char)(A + i) == initialGuess.output[7] || (char)(B + j) == initialGuess.input[7] ||
								(char)(A + i) == initialGuess.input[8] || (char)(B + j) == initialGuess.output[8] || (char)(A + i) == initialGuess.output[8] || (char)(B + j) == initialGuess.input[8] ||
								(char)(A + i) == initialGuess.input[9] || (char)(B + j) == initialGuess.output[9] || (char)(A + i) == initialGuess.output[9] || (char)(B + j) == initialGuess.input[9] ||
								(char)(A + i) == initialGuess.input[10] || (char)(B + j) == initialGuess.output[10] || (char)(A + i) == initialGuess.output[10] || (char)(B + j) == initialGuess.input[10] ||
								(char)(A + i) == initialGuess.input[11] || (char)(B + j) == initialGuess.output[11] || (char)(A + i) == initialGuess.output[11] || (char)(B + j) == initialGuess.input[11]) {
								dontDoBit = 1;
								break;
							}
							else {
								dontDoBit = 0;
							}
						}
						it3++;

					}
					std::string tempPair = "";
					tempPair.push_back(initialGuess.input[0]);
					tempPair.push_back(initialGuess.output[0]);
					std::string tempPair2 = "";
					tempPair2.push_back((char)(A + i));
					tempPair2.push_back((char)(B + j));

					std::list<std::string>::iterator it5 = pairsTwo.begin();
					for (std::list<std::string>::iterator it4 = pairsOne.begin(); it4 != pairsOne.end(); ++it4) {
						if (*it4 == tempPair && *it5 == tempPair2 || *it4 == tempPair2 && *it5 == tempPair) {
							dontDoBit2 = 1;
							break;
						}
						else {
							dontDoBit2 = 0;
						}
						it5++;
					}
					if (((char)(A + i) != (char)(B + j)) && (char)(A + i) != initialGuess.input[0] && (char)(A + i) != initialGuess.output[0] && (char)(B + j) != initialGuess.input[0] && (char)(B + j) != initialGuess.output[0] &&
						(char)(A + i) != initialGuess.input[1] && (char)(A + i) != initialGuess.output[1] && (char)(B + j) != initialGuess.input[1] && (char)(B + j) != initialGuess.output[1] &&
						(char)(A + i) != initialGuess.input[2] && (char)(A + i) != initialGuess.output[2] && (char)(B + j) != initialGuess.input[2] && (char)(B + j) != initialGuess.output[2] &&
						(char)(A + i) != initialGuess.input[3] && (char)(A + i) != initialGuess.output[3] && (char)(B + j) != initialGuess.input[3] && (char)(B + j) != initialGuess.output[3] &&
						(char)(A + i) != initialGuess.input[4] && (char)(A + i) != initialGuess.output[4] && (char)(B + j) != initialGuess.input[4] && (char)(B + j) != initialGuess.output[4] &&
						(char)(A + i) != initialGuess.input[5] && (char)(A + i) != initialGuess.output[5] && (char)(B + j) != initialGuess.input[5] && (char)(B + j) != initialGuess.output[5] &&
						(char)(A + i) != initialGuess.input[6] && (char)(A + i) != initialGuess.output[6] && (char)(B + j) != initialGuess.input[6] && (char)(B + j) != initialGuess.output[6] &&
						(char)(A + i) != initialGuess.input[7] && (char)(A + i) != initialGuess.output[7] && (char)(B + j) != initialGuess.input[7] && (char)(B + j) != initialGuess.output[7] &&
						(char)(A + i) != initialGuess.input[8] && (char)(A + i) != initialGuess.output[8] && (char)(B + j) != initialGuess.input[8] && (char)(B + j) != initialGuess.output[8] &&
						(char)(A + i) != initialGuess.input[9] && (char)(A + i) != initialGuess.output[9] && (char)(B + j) != initialGuess.input[9] && (char)(B + j) != initialGuess.output[9] &&
						(char)(A + i) != initialGuess.input[10] && (char)(A + i) != initialGuess.output[10] && (char)(B + j) != initialGuess.input[10] && (char)(B + j) != initialGuess.output[10] &&
						(char)(A + i) != initialGuess.input[11] && (char)(A + i) != initialGuess.output[11] && (char)(B + j) != initialGuess.input[11] && (char)(B + j) != initialGuess.output[11] && dontDoBit == 0 && dontDoBit2 == 0) {
						alp.push_back((char)(A + i));
						alp1.push_back((char)(B + j));



						std::string tempPl = "";
						tempPl.push_back((char)(A + i));
						tempPl.push_back((char)(B + j));
						std::string tempP2 = "";
						tempP2.push_back(initialGuess.input[0]);
						tempP2.push_back(initialGuess.output[0]);
						pairsOne.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsTwo.push_back(tempPl);
						pairsOne.push_back(tempPl);
						for (int i = 0; i <= it->inputed; i++) {
							tempE.plugB->input[i] = it->input[i];
							tempE.plugB->output[i] = it->output[i];
						}
						std::string test = "";
						//tempE.plugB->input[0] = it->input[0];
						//tempE.plugB->output[0] = it->output[0];
						tempE.plugB->input[12] = (char)(A + i);
						tempE.plugB->output[12] = (char)(B + j);
						tempE.plugB->inputed = 13;
						//std::cout << tempE.rotorOne->rotorNumber << " " << tempE.rotorTwo->rotorNumber << " " << tempE.rotorThree->rotorNumber << " | ";
						//tempE.plugB->printPB();
						//std::cout << std::endl;
						//std::cout << it->rotorOneC << " " << it->rotorTwoC << " "<<it->rotorThreeC << std::endl;
						for (int i = 0; i < ogMsg.length(); i++) {
							test.push_back(tempE.inOut(ogMsg[i]));
						}
						double tempIoC = IoC(test);
						Guess tGuess;
						tGuess.setAll(it->rotorOneC, it->rotorTwoC, it->rotorThreeC, it->rotorOneP, it->rotorTwoP, it->rotorThreeP, test, tempIoC, ogMsg);
						tGuess.inputed = 13;
						for (int i = 0; i <= it->inputed; i++) {
							tGuess.setSetting(i, it->input[i], it->output[i]);
						}
						//tGuess.setSetting(0,it->input[0],it->output[0]);
						tGuess.setSetting(12, (char)(A + i), (char)(B + j));



						tempE.setRotorsForBombePositions(p1, p2, p3);
						if (tGuess.getSortVar() > initialGuess.getSortVar() && tGuess.distanceIOC < initialGuess.distanceIOC && initialGuess.msg != tGuess.msg) {
							initialListPlugboardForBombe.push_back(tGuess);

							//initialListPlugboardForBombeSecond.push_back(tGuess);	
						}
						initialListPlugboardForBombeOneThree.push_back(tGuess);
					}
				}
			}


		}


		std::cout << "\t" << initialListPlugboardForBombeOneThree.size() << ": Posibilities For Thirteen Plugboard Setting" << std::endl;
		*/
		std::cout << std::endl << "\t" << initialListPlugboardForBombe.size() << ": Total Possibilities For Plugboard Setting" << std::endl;


	}

	void test() {

	}

	/*
			void testRotorCombinationPB(EnigmaForBombe e,std::string s, Guess g){
				std::string test;
				static int count = 0;
				double tempIOC;
				e.initialSettings();
				switch(e.plugB->inputed){
					case 0:
						for(int i = 0; i < 26; i++){
							for(int j = 0; j < 26; j++){
								e.plugB = new PlugboardForBombe((char)(A + i),(char)(B + j));
							}
						}
						e.plugB->inputed = 1;
						break;
					case 1:
						for(int i = 0; i < 26; i++){
							for(int j = 0; j < 26; j++){
								e.plugB->setSetting(1,(char)(A + i),(char)(B + j));
							}
						}
						e.plugB->inputed = 2;
						break;
					case 2:
						for(int i = 0; i < 26; i++){
							for(int j = 0; j < 26; j++){
								e.plugB->setSetting(2,(char)(A + i),(char)(B + j));
							}
						}
						e.plugB->inputed = 3;
						break;
				}
				for(int x = 0; x <= 25;x++){
					for(int y = 0; y <= 25;y++){
						for(int z = 0; z <= 25;z++){
							test = "";
							e.setRotorsForBombePositions(x,y,z);
							for(int i = 0; i < s.length(); i++){
								test.push_back(e.inOut(s[i]));
							}
							tempIOC = IoC(test);

							int tempNum1 = e.getRotorOneNumb();
							int tempNum2 = e.getRotorTwoNumb();
							int tempNum3 = e.getRotorThreeNumb();

							Guess testTwo;
							testTwo.setAll(tempNum1, tempNum2, tempNum3, x, y, z,test , tempIOC);
							initialList.push_back(testTwo);

						}
					}
				}
			}
			*/
	void testInitialCombination() {

	}
	//123 -> 132
	void rotorSwapOne() {
		for (int i = 0; i < 55; i++) {
			RotorsForBombe* curRotorOne = enArr[i].rotorOne;
			RotorsForBombe* curRotorTwo = enArr[i].rotorTwo;
			RotorsForBombe* curRotorThree = enArr[i].rotorThree;
			enArr[i].rotorTwo = curRotorThree;
			enArr[i].rotorThree = curRotorTwo;
			//enArr[i].printRotorNumbers();
		}

	}
	//132 -> 213
	void rotorSwapTwo() {
		for (int i = 0; i < 55; i++) {
			RotorsForBombe* curRotorOne = enArr[i].rotorOne;
			RotorsForBombe* curRotorTwo = enArr[i].rotorThree;
			RotorsForBombe* curRotorThree = enArr[i].rotorTwo;
			enArr[i].rotorOne = curRotorTwo;
			enArr[i].rotorTwo = curRotorOne;
			enArr[i].rotorThree = curRotorThree;
			//enArr[i].printRotorNumbers();
		}
	}
	//213 -> 231
	void rotorSwapThree() {
		for (int i = 0; i < 55; i++) {
			RotorsForBombe* curRotorOne = enArr[i].rotorTwo;
			RotorsForBombe* curRotorTwo = enArr[i].rotorOne;
			RotorsForBombe* curRotorThree = enArr[i].rotorThree;
			enArr[i].rotorOne = curRotorTwo;
			enArr[i].rotorTwo = curRotorThree;
			enArr[i].rotorThree = curRotorOne;
			//enArr[i].printRotorNumbers();			
		}
	}
	//231 -> 312
	void rotorSwapFour() {
		for (int i = 0; i < 55; i++) {
			RotorsForBombe* curRotorOne = enArr[i].rotorThree;
			RotorsForBombe* curRotorTwo = enArr[i].rotorOne;
			RotorsForBombe* curRotorThree = enArr[i].rotorTwo;
			enArr[i].rotorOne = curRotorThree;
			enArr[i].rotorTwo = curRotorOne;
			enArr[i].rotorThree = curRotorTwo;
			//enArr[i].printRotorNumbers();	
		}
	}
	//312 -> 321
	void rotorSwapFive() {
		for (int i = 0; i < 55; i++) {
			RotorsForBombe* curRotorOne = enArr[i].rotorTwo;
			RotorsForBombe* curRotorTwo = enArr[i].rotorThree;
			RotorsForBombe* curRotorThree = enArr[i].rotorOne;
			enArr[i].rotorOne = curRotorThree;
			enArr[i].rotorTwo = curRotorTwo;
			enArr[i].rotorThree = curRotorOne;
			//enArr[i].printRotorNumbers();
		}
	}
	//321 -> 123
	void rotorInitial() {
		for (int i = 0; i < 55; i++) {
			RotorsForBombe* curRotorOne = enArr[i].rotorThree;
			RotorsForBombe* curRotorTwo = enArr[i].rotorTwo;
			RotorsForBombe* curRotorThree = enArr[i].rotorOne;
			enArr[i].rotorOne = curRotorOne;
			enArr[i].rotorTwo = curRotorTwo;
			enArr[i].rotorThree = curRotorThree;
			//enArr[i].printRotorNumbers();
		}
	}

	void findBestRotorCombos(std::string s) {
		//rotorsToTest
		for (int i = 0; i < 55; i++) {
			enArr[i].initialSettings();
			testRotorCombination(enArr[i], s);
			enArr[i].printRotorNumbers();
		}

	}
	void findIOCforPB(std::string s) {
		int inputedTemp;
		for (int i = 0; i < 55; i++) {

		}
	}
	void findOneIOCs(int r1, int r2, int r3) {

		std::string s;
		std::cout << "Insert text to Decrypt: ";
		std::getline(std::cin, s);
		//s = "LTCERWIVWXVPNCGBYNCTTGZUEZWZPGGKYZ";

		for (int i = 0; i < 55; i++) {
			if ((enArr[i].rotorOne->rotorNumber == 1 && enArr[i].rotorTwo->rotorNumber == 2 && enArr[i].rotorThree->rotorNumber == 3)) {
				getBestCombination(enArr[i], s);
				std::cout << "Testing Rotors: ";
				enArr[i].printRotorNumbers();
			}
		}
		rotorSwapOne();

		for (int i = 0; i < 55; i++) {
			if ((enArr[i].rotorOne->rotorNumber == 1 && enArr[i].rotorTwo->rotorNumber == 3 && enArr[i].rotorThree->rotorNumber == 2)) {
				getBestCombination(enArr[i], s);
				std::cout << "Testing Rotors: ";
				enArr[i].printRotorNumbers();
			}
		}

		//swap2 213
		rotorSwapTwo();

		for (int i = 0; i < 55; i++) {
			if ((enArr[i].rotorOne->rotorNumber == 2 && enArr[i].rotorTwo->rotorNumber == 1 && enArr[i].rotorThree->rotorNumber == 3)) {
				getBestCombination(enArr[i], s);
				std::cout << "Testing Rotors: ";
				enArr[i].printRotorNumbers();
			}
		}

		//swap3 231
		rotorSwapThree();

		for (int i = 0; i < 55; i++) {
			if ((enArr[i].rotorOne->rotorNumber == 2 && enArr[i].rotorTwo->rotorNumber == 3 && enArr[i].rotorThree->rotorNumber == 1)) {
				getBestCombination(enArr[i], s);
				std::cout << "Testing Rotors: ";
				enArr[i].printRotorNumbers();
			}
		}
		//swap4 312
		rotorSwapFour();

		for (int i = 0; i < 55; i++) {
			if ((enArr[i].rotorOne->rotorNumber == 3 && enArr[i].rotorTwo->rotorNumber == 1 && enArr[i].rotorThree->rotorNumber == 2)) {
				getBestCombination(enArr[i], s);
				std::cout << "Testing Rotors: ";
				enArr[i].printRotorNumbers();
			}
		}
		rotorSwapFive();
		//swap5 321
		for (int i = 0; i < 55; i++) {
			if ((enArr[i].rotorOne->rotorNumber == 3 && enArr[i].rotorTwo->rotorNumber == 2 && enArr[i].rotorThree->rotorNumber == 1)) {
				getBestCombination(enArr[i], s);
				std::cout << "Testing Rotors: ";
				enArr[i].printRotorNumbers();

			}
		}
		rotorInitial();
		std::list<Guess>::iterator max = veryInitialList.begin();
		for (std::list<Guess>::iterator it = veryInitialList.begin(); it != veryInitialList.end(); ++it) {
			if (max->sortVar < it->sortVar) {
				max = it;
			}

		}



		std::cout << std::endl;

		if (max->rotorOneC == 1 && max->rotorTwoC == 2 && max->rotorThreeC == 3) {
			for (int i = 0; i < 55; i++) {
				if ((enArr[i].rotorOne->rotorNumber == 1 && enArr[i].rotorTwo->rotorNumber == 2 && enArr[i].rotorThree->rotorNumber == 3)) {
					testRotorCombination(enArr[i], s);
					std::cout << "Best Combination: ";
					enArr[i].printRotorNumbers();

				}
			}
		}

		//123

		if (max->rotorOneC == 1 && max->rotorTwoC == 3 && max->rotorThreeC == 2) {
			//swap1 132
			rotorSwapOne();
			for (int i = 0; i < 55; i++) {
				if ((enArr[i].rotorOne->rotorNumber == 1 && enArr[i].rotorTwo->rotorNumber == 3 && enArr[i].rotorThree->rotorNumber == 2)) {
					testRotorCombination(enArr[i], s);
					std::cout << "Best Combination: ";
					enArr[i].printRotorNumbers();
				}
			}
		}
		//swap2 213


		if (max->rotorOneC == 2 && max->rotorTwoC == 1 && max->rotorThreeC == 3) {

			rotorSwapTwo();

			for (int i = 0; i < 55; i++) {
				if ((enArr[i].rotorOne->rotorNumber == 2 && enArr[i].rotorTwo->rotorNumber == 1 && enArr[i].rotorThree->rotorNumber == 3)) {
					testRotorCombination(enArr[i], s);
					std::cout << "Best Combination: ";
					enArr[i].printRotorNumbers();
				}
			}
		}
		//swap3 231

		if (max->rotorOneC == 2 && max->rotorTwoC == 3 && max->rotorThreeC == 1) {
			rotorSwapThree();
			for (int i = 0; i < 55; i++) {
				if ((enArr[i].rotorOne->rotorNumber == 2 && enArr[i].rotorTwo->rotorNumber == 3 && enArr[i].rotorThree->rotorNumber == 1)) {
					testRotorCombination(enArr[i], s);
					std::cout << "Best Combination: ";
					enArr[i].printRotorNumbers();
				}
			}
			//swap4 312
		}
		if (max->rotorOneC == 3 && max->rotorTwoC == 1 && max->rotorThreeC == 2) {
			rotorSwapFour();
			for (int i = 0; i < 55; i++) {
				if ((enArr[i].rotorOne->rotorNumber == 3 && enArr[i].rotorTwo->rotorNumber == 1 && enArr[i].rotorThree->rotorNumber == 2)) {
					testRotorCombination(enArr[i], s);
					std::cout << "Best Combination: ";
					enArr[i].printRotorNumbers();
				}
			}
		}

		if (max->rotorOneC == 3 && max->rotorTwoC == 2 && max->rotorThreeC == 1) {
			rotorSwapFive();
			//swap5 321
			for (int i = 0; i < 55; i++) {
				if ((enArr[i].rotorOne->rotorNumber == 3 && enArr[i].rotorTwo->rotorNumber == 2 && enArr[i].rotorThree->rotorNumber == 1)) {
					testRotorCombination(enArr[i], s);
					std::cout << "Best Combination: ";
					enArr[i].printRotorNumbers();
				}
			}
		}
		rotorInitial();

		std::cout << "\t" << initialList.size() << ": All Rotor Positions Tested" << std::endl;

		for (std::list<Guess>::iterator it = initialList.begin(); it != initialList.end(); ++it) {
			if ((it->ioc <= .03 || it->ioc >= .1)) {

			}
			else {
				Guess testTwo;
				testTwo.setAll(it->rotorOneC, it->rotorTwoC, it->rotorThreeC, it->rotorOneP, it->rotorTwoP, it->rotorThreeP, it->msg, it->ioc, it->ogMsg);
				initialListNarrow.push_back(testTwo);
			}

		}
		std::cout << "\t" << initialListNarrow.size() << ": Best Possible Rotor Positions" << std::endl;
	}




	//finds best IOC for all rotor combinations & PB
	void findAllIOCs() {

		std::string s;
		std::cout << "Insert text to Decrypt: ";
		std::getline(std::cin, s);
		//s = "LTCERWIVWXVPNCGBYNCTTGZUEZWZPGGKYZ";
		std::cout << std::endl;
		//std::cout << "test 6" << std::endl;

		for (int i = 0; i < 55; i++) {
		//	std::cout << "test" << std::endl;
			getBestCombination(enArr[i], s);
			std::cout << "Testing Rotors: ";
			enArr[i].printRotorNumbers();

		}
		//std::cout << "test" << std::endl;

		rotorSwapOne();

		//std::cout << "test" << std::endl;
		for (int i = 0; i < 55; i++) {
			getBestCombination(enArr[i], s);
			std::cout << "Testing Rotors: ";
			enArr[i].printRotorNumbers();
		}

		//swap2 213
		rotorSwapTwo();

		for (int i = 0; i < 55; i++) {
			getBestCombination(enArr[i], s);
			std::cout << "Testing Rotors: ";
			enArr[i].printRotorNumbers();
		}

		//swap3 231
		rotorSwapThree();

		for (int i = 0; i < 55; i++) {
			getBestCombination(enArr[i], s);
			std::cout << "Testing Rotors: ";
			enArr[i].printRotorNumbers();
		}
		//swap4 312
		rotorSwapFour();

		for (int i = 0; i < 55; i++) {
			getBestCombination(enArr[i], s);
			std::cout << "Testing Rotors: ";
			enArr[i].printRotorNumbers();
		}
		rotorSwapFive();
		//swap5 321
		for (int i = 0; i < 55; i++) {
			getBestCombination(enArr[i], s);
			std::cout << "Testing Rotors: ";
			enArr[i].printRotorNumbers();
		}
		rotorInitial();
		std::list<Guess>::iterator max = veryInitialList.begin();
		for (std::list<Guess>::iterator it = veryInitialList.begin(); it != veryInitialList.end(); ++it) {
			if (max->sortVar < it->sortVar) {
				max = it;
			}

		}

		int found = 0;
		std::cout << std::endl;

		for (int i = 0; i < 55; i++) {
			if ((enArr[i].rotorOne->rotorNumber == max->rotorOneC && enArr[i].rotorTwo->rotorNumber == max->rotorTwoC && enArr[i].rotorThree->rotorNumber == max->rotorThreeC)) {
				testRotorCombination(enArr[i], s);
				std::cout << "Best Combination: ";
				enArr[i].printRotorNumbers();
				found = 1;
				break;
			}
		}

		//123			

		rotorSwapOne();
		//swap1 132
		if (found == 0) {
			for (int i = 0; i < 55; i++) {
				if ((enArr[i].rotorOne->rotorNumber == max->rotorOneC && enArr[i].rotorTwo->rotorNumber == max->rotorTwoC && enArr[i].rotorThree->rotorNumber == max->rotorThreeC)) {
					testRotorCombination(enArr[i], s);
					std::cout << "Best Combination: ";
					enArr[i].printRotorNumbers();
					found = 1;
					break;
				}
			}
		}
		//swap2 213


		rotorSwapTwo();
		if (found == 0) {

			for (int i = 0; i < 55; i++) {
				if ((enArr[i].rotorOne->rotorNumber == max->rotorOneC && enArr[i].rotorTwo->rotorNumber == max->rotorTwoC && enArr[i].rotorThree->rotorNumber == max->rotorThreeC)) {
					testRotorCombination(enArr[i], s);
					std::cout << "Best Combination: ";
					enArr[i].printRotorNumbers();
					found = 1;
					break;
				}
			}
		}
		//swap3 231

		rotorSwapThree();
		if (found == 0) {

			for (int i = 0; i < 55; i++) {
				if ((enArr[i].rotorOne->rotorNumber == max->rotorOneC && enArr[i].rotorTwo->rotorNumber == max->rotorTwoC && enArr[i].rotorThree->rotorNumber == max->rotorThreeC)) {
					testRotorCombination(enArr[i], s);
					std::cout << "Best Combination: ";
					enArr[i].printRotorNumbers();
					found = 1;
					break;
				}
			}
			//swap4 312
		}
		rotorSwapFour();

		if (found == 0) {
			for (int i = 0; i < 55; i++) {
				if ((enArr[i].rotorOne->rotorNumber == max->rotorOneC && enArr[i].rotorTwo->rotorNumber == max->rotorTwoC && enArr[i].rotorThree->rotorNumber == max->rotorThreeC)) {
					testRotorCombination(enArr[i], s);
					std::cout << "Best Combination: ";
					enArr[i].printRotorNumbers();
					found = 1;
					break;
				}
			}
		}

		rotorSwapFive();

		if (found == 0) {

			//swap5 321
			for (int i = 0; i < 55; i++) {
				if ((enArr[i].rotorOne->rotorNumber == max->rotorOneC && enArr[i].rotorTwo->rotorNumber == max->rotorTwoC && enArr[i].rotorThree->rotorNumber == max->rotorThreeC)) {
					testRotorCombination(enArr[i], s);
					std::cout << "Best Combination: ";
					enArr[i].printRotorNumbers();
					found = 1;
					break;
				}
			}
		}
		rotorInitial();

		std::cout << "\t" << initialList.size() << ": All Rotor Positions Tested" << std::endl;

		for (std::list<Guess>::iterator it = initialList.begin(); it != initialList.end(); ++it) {
			if ((it->ioc <= .03 || it->ioc >= .1)) {

			}
			else {
				Guess testTwo;
				testTwo.setAll(it->rotorOneC, it->rotorTwoC, it->rotorThreeC, it->rotorOneP, it->rotorTwoP, it->rotorThreeP, it->msg, it->ioc, it->ogMsg);
				initialListNarrow.push_back(testTwo);
			}

		}
		std::cout << "\t" << initialListNarrow.size() << ": Best Possible Rotor Positions" << std::endl;
	}


	std::list<Guess> getIOClist() {
		sortLists(initialListPlugboardForBombeOneTwo, plugboardSorted, 5000);
		for (std::list<Guess>::iterator it = plugboardSorted.begin(); it != plugboardSorted.end(); ++it) {
			std::cout << std::endl << printRotorNum(it->rotorOneC) << " " << printRotorNum(it->rotorTwoC) << " " << printRotorNum(it->rotorThreeC) << " | " << it->rotorOneP << " " << it->rotorTwoP << " " << it->rotorThreeP << " | " << it->ioc << " | " << it->noOfTrigrams << " | " << it->distanceIOC << " | " << it->sortVar << " | " << it->msg << " | ";
			//std::cout << it->ogMsg << " | ";
			it->printPB();
		}
		//for (std::list<Guess>::iterator it=initialListSorted.begin(); it != initialListSorted.end(); ++it){
		//	it->printAll();
		//}
		std::cout << std::endl;
		return plugboardSorted;
	}


};
#endif
