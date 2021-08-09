#include "Reflector.h"

using namespace std;

// Constructor
//Reflector::Reflector{}

char ref_Type;
vector<char> ref_Input;
vector<char> ref_Output;

//Reflectors B and C
vector<char> refB_Input = { 'Y', 'R', 'U', 'H', 'Q', 'S', 'L', 'D', 'P', 'X', 'N', 'G', 'O', 'K', 'M', 'I', 'E', 'B', 'F', 'Z', 'C', 'W', 'V', 'J', 'A', 'T' };
vector<char> refB_Output = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
vector<char> refC_Input = { 'F', 'V', 'P', 'J', 'I', 'A', 'O', 'Y', 'E', 'D', 'R', 'Z', 'X', 'W', 'G', 'C', 'T', 'K', 'U', 'Q', 'S', 'B', 'N', 'M', 'H', 'L' };
vector<char> refC_Output = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

//Set Reflector type, main vector
void Reflector::set_TypeIn() {
	int looper = 0;
	char Reflect_Type = ' ';
	
	while (looper == 0) {
		cout << endl << "----- Choose Reflector Type (B/C) ------ " << endl;
		cout << "Reflector Type: "; cin >> Reflect_Type;
		cout << endl << "-----------------------------------------" << endl;
		ref_Type = Reflect_Type;
		switch (ref_Type) {
		case 'B':
			ref_Input = refB_Input;
			looper = 1;
			break;

		case 'C':
			ref_Input = refC_Input;
			looper = 1;
			break;

		default:
			cout << endl << "Invalid type, please enter B or C" << endl;
			looper = 0;
			break;
		}
	}
}

//Set Reflector type, vector reflected letter
void Reflector::set_TypeOut() {
	switch (ref_Type) {
	case 'B':
		ref_Output = refB_Output;
		break;

	case 'C':
		ref_Output = refC_Output;
		break;

	default:
		cout << endl << "Invalid type." << endl;
		break;
	}
}



// Get Functions
char Reflector::get_Type() { return ref_Type; }
vector<char> Reflector::get_Input() { return ref_Input; }

//Encrption function for reflector, finds inputted letter in vector and returns position of reflected letter
int Reflector::find(int rotor_pos) {
	int place = 0;
	char encrypt_out;
	encrypt_out = ref_Output[rotor_pos];
	for (unsigned int i = 0; i < ref_Input.size(); i++) {
		if (ref_Input[i] == ref_Output[rotor_pos]) {
			place = i;
		}
	}
	return place;
}



// Destructor
Reflector::~Reflector() {}
