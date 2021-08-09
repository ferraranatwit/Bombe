#include "Enigma.h"
//Constructor Enigma machine includes 3 Rotors, 1 Reflector, and 1 Plugboard
Enigma::Enigma(Plugboard* plug, Reflector* reflector, Rotors* r1, Rotors* r2, Rotors* r3) {
	this->plug = plug;
	this->reflector = reflector;
	this->r1 = r1;
	this->r2 = r2;
	this->r3 = r3;
}

Enigma::Enigma() { }
//Main Encrption function that passes each user inputted letter through the different parts of the machine
//Returns the encrpted letter and rotates the rotors
std::vector<char> Enigma::ENCYPT(std::vector<char> IN) {
	vector<char> OUT;
	vector<char> test;
	char temp;
	int pos;
	int rotor1Count = 0;
	int rotor2Count = 0;
	int rotor3Count = 0;

	for (int i = 0; i < IN.size(); i++) {

		temp = plug->encrypt(IN[i]);

		// Find position of char in rotor 1 vector
		pos = r1->encryptR1(temp);
		// T is the position of char in rotor 1 vector 
		temp = r1->encrypt(pos);
		temp = r2->encrypt(pos);
		temp = r3->encrypt(pos);

		pos = reflector->find(pos);

		temp = r3->encrypt(pos);
		temp = r2->encrypt(pos);
		temp = r1->encrypt(pos);

		temp = plug->encrypt(temp);

		OUT.push_back(temp);


		if (rotor1Count <= 26) {
			rotor1Count++;
			r1->rotate();
		}

		if ((rotor1Count == 26) && (rotor2Count <= 26)) {
			rotor1Count = 0;
			rotor2Count++;
			r2->rotate();
		}

		if ((rotor2Count == 26) && (rotor3Count <= 26)) {
			rotor2Count = 0;
			rotor3Count++;
			r3->rotate();
		}

		if (rotor3Count == 26) {
			rotor3Count = 0;
		}
	}

	for (int i = 0; i < OUT.size(); i++) {
		std::cout << OUT[i];
	}
	std::cout << endl;

	OUT.clear();
	/*IN.clear();*/

	return OUT;
}
//Set and Get functions for Plugboard, Rotor, and Reflector values
void Enigma::set_plug(Plugboard* plug) { this->plug = plug; }
void Enigma::set_reflector(Reflector* reflector) { this->reflector = reflector; }
void Enigma::set_r1(Rotors* r1) { this->r1 = r1; }
void Enigma::set_r2(Rotors* r2) { this->r2 = r2; }
void Enigma::set_r3(Rotors* r3) { this->r3 = r3; }

Plugboard* Enigma::get_plug() { return plug; }
Reflector* Enigma::get_reflector() { return reflector; }
Rotors* Enigma::get_r1() { return r1; }
Rotors* Enigma::get_r2() { return r2; }
Rotors* Enigma::get_r3() { return r3; }

Enigma::~Enigma() { }
