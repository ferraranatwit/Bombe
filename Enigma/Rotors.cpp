#include "Rotors.h"
//Alphabet vector used to compare letter inputs
std::vector<char> alphabet = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
int rotation1 = 0;
int rotation2 = 0;
int rotation3 = 0;

// Constructor
Rotors::Rotors(int Rotor_Num, int Rotor_Pos, std::vector<char> Rotor_Val, int Start_Pos) {
	this->Rotor_Num = Rotor_Num;
	this->Rotor_Pos = Rotor_Pos;
	this->Rotor_Val = Rotor_Val;
	this->Start_Pos = Start_Pos;
}

Rotors::Rotors() {
	this->Rotor_Num = 0;
	this->Rotor_Pos = 0;
	this->Start_Pos = 0;
}
//Encryption part 1 for just rotor 1, returns position in vector where user inputted letter is found
int Rotors::encryptR1(char in) {
	int position = 0;

	for (int i = 0; i < Rotor_Val.size(); i++) {
		if (in == Rotor_Val[i]) {
			position = i;
		}
	}

	return position;
}
//Main encryption function for rotor, outputs character from each rotor based on position found previously
char Rotors::encrypt(int position) {
	char output;
	output = Rotor_Val[position];
	return output;
}
//Function to rotate rotors
void Rotors::rotate() {
	/*for (int i = 0; i < Rotor_Val.size(); i++) {
		std::cout << Rotor_Val[i] << " ";
	}
	std::cout << std::endl;*/

	std::rotate(Rotor_Val.begin(), Rotor_Val.begin() + 1, Rotor_Val.end());

	/*for (int i = 0; i < Rotor_Val.size(); i++) {
		std::cout << Rotor_Val[i] << " ";
	}
	std::cout << std::endl;*/
}

//Display functions
char Rotors::displayPrev() {
	char previous;
	previous = Rotor_Val[25];
	return previous;

}

char Rotors::displayCurrent() {
	char current;
	current = Rotor_Val[0];
	return current;
}

char Rotors::displayNext() {
	char next;
	next = Rotor_Val[1];
	return next;
}

// Set Functions
void Rotors::set_Num(int Rotor_Num) { this->Rotor_Num = Rotor_Num; }
void Rotors::set_Pos(int Rotor_Pos) { this->Rotor_Pos = Rotor_Pos; }
void Rotors::set_Val(std::vector<char> Rotor_Val) { this->Rotor_Val = Rotor_Val; }
void Rotors::set_Start(int Start_Pos) { this->Start_Pos = Start_Pos; }

// Get Functions
int Rotors::get_Num() { return Rotor_Num; }
int Rotors::get_Pos() { return Rotor_Pos; }
std::vector<char> Rotors::get_Val() { return Rotor_Val; }
int Rotors::get_Start() { return Start_Pos; }

// Destructor
Rotors::~Rotors() {}
