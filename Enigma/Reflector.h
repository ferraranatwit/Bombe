#ifndef REFLECTOR_H
#define REFLECTOR_H

#include <vector>
#include <string>
#include <iostream>

class Reflector {
public:

	// Set functions
	void set_TypeIn();
	void set_TypeOut();

	//Encrption function
	int find(int);

	// Get functions
	char get_Type();
	std::vector<char> get_Input();

	//Deconstructor
	~Reflector();
private:
	char ref_Type;
	std::vector<char> ref_Input;
	std::vector<char> ref_Output;
};
#endif
