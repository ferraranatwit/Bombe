#include "Rotors.h"
#include "Plugboard.h"
#include "Reflector.h"
#include <vector>
#include <iostream>

#ifndef ENIGMA_H
#define ENIGMA_H

class Enigma {
public:
	// CONSTRUCTOR
	Enigma(Plugboard*, Reflector*, Rotors*, Rotors*, Rotors*);

	Enigma();

	// Set functions 
	void set_plug(Plugboard*);
	void set_reflector(Reflector*);
	void set_r1(Rotors*);
	void set_r2(Rotors*);
	void set_r3(Rotors*);

	// Get functions
	Plugboard* get_plug();
	Reflector* get_reflector();
	Rotors* get_r1();
	Rotors* get_r2();
	Rotors* get_r3();
	//Encrption function
	std::vector<char> ENCYPT(std::vector<char>);
	//Deconstructor
	~Enigma();

private:
	Plugboard* plug;
	Reflector* reflector;
	Rotors* r1;
	Rotors* r2;
	Rotors* r3;
};
#endif
