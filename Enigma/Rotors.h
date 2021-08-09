#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

#ifndef ROTORS_H
#define ROTORS_H

class Rotors {
public:
	// Constructor
	Rotors(int, int, std::vector<char>, int);

	Rotors();

	// Set functions
	void set_Num(int);
	void set_Pos(int);
	void set_Val(std::vector<char>);
	void set_Start(int);

	// Get functions
	int get_Num();
	int get_Pos();
	std::vector<char> get_Val();
	int get_Start();

	//Encryption function for just rotor 1
	int encryptR1(char);

	//Main encryption function
	char encrypt(int);

	//Rotation function
	void rotate();

	//Visual rotor display function
	char displayPrev();
	char displayCurrent();
	char displayNext();

	//Deconstructor
	~Rotors();
private:
	int Rotor_Num;					// "ID Number" 1,2,3,4,etc.
	int Rotor_Pos;					// Position in the Enigma Machine
	std::vector<char> Rotor_Val;	// A B C -> stored W B F
	int Start_Pos;					// Starting position
};
#endif
