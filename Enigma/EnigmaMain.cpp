#include "EnigmaMain.h"

void Enigma_Main(sqlite3* DB) {
	//char Reflect_Type;
	string message;
	vector<char> Input;
	vector<char> Output;
	// Initial set up of Enigma START
	//Initalize rotors
	Rotors R1 = Populate_Rotor(DB, 1);
	Rotors R2 = Populate_Rotor(DB, 2);
	Rotors R3 = Populate_Rotor(DB, 3);

	//Initialize reflector
	

	Reflector Rf;
	Rf.set_TypeIn();
	Rf.set_TypeOut();

	//Initalize 10 plugboard pairs
	Plugboard P;
	P.setCharacters();
	P.setPairs();

	Enigma E(&P, &Rf, &R1, &R2, &R3);
	// Initial set up of Enigma END

	// Main system loop START
	int choice;
	int looper = 0;
	vector<char> temp;

	while (looper == 0) {
		cout << "----------------- MENU -----------------" << endl;
		cout << "1 - Reconfigure the Enigma Machine" << endl
			<< "2 - Encrypt Message" << endl
			<< "3 - Exit" << endl;
		cin >> choice;
		switch (choice) {
			//Reconfigure Enigma
		case 1:
			Set_Enigma(&R1, &R2, &R3, &Rf, &P, DB, &E);
			break;
			//User input message for encryption
		case 2:
			cout << "-----------------------------------------------------" << endl;
			cout << "Current Rotor values:" << endl << endl;
			cout << "   Rotor 1 | Rotor 2 | Rotor 3" << endl;
			cout << "      ___      ___      ___" << endl;
			cout << "     /   \\    /   \\    /   \\" << endl;
			cout << "    |  " << R1.displayPrev() << "  |  " << "|  " << R2.displayPrev() << "  |  " << "|  " << R3.displayPrev() << "  |" << "    Previous Value" << endl;
			cout << "    |-----|  |-----|  |-----|" << endl;
			cout << "    |> " << R1.displayCurrent() << " <|  " << "|> " << R2.displayCurrent() << " <|  " << "|> " << R3.displayCurrent() << " <| " << "   Current Value" << endl;
			cout << "    |-----|  |-----|  |-----|" << endl;
			cout << "    |  " << R1.displayNext() << "  |  " << "|  " << R2.displayNext() << "  |  " << "|  " << R3.displayNext() << "  |" << "    Next Value" << endl;
			cout << "     \\___/    \\___/    \\___/" << endl;
			cout << endl << "Enter the message you would like to encrypt: ";
			cin >> message;

			for (int i = 0; i < message.size(); i++) {
				Input.push_back(message[i]);
			}

			// from here it needs to be run through the enigma encoding function
			Output = E.ENCYPT(Input);
			Input.clear();
			break;
			//Break loop and exit program
		case 3:
			looper = 1;
			break;
		default:
			cout << "invalid menu input" << endl;
			looper = 0;
			break;
		}
	}
	// Main system loop END
}

//Function to populate rotor position and type values
Rotors Populate_Rotor(sqlite3* DB, int pos) {
	vector<string> container;
	string exit;
	string Q1, Q2;
	string ID;

	int ST = 0;
	int Num = 0;
	int Pos = 0;
	int Start = 0;
	bool OK = false;

	Rotors Rotor;
	vector<char> rotor_values;

	string values;

	// Setup START
	cout << "----- Choose Rotor for position 0" << pos << " -----" << endl;
	Rotor.set_Pos(pos);
	
	while (OK == false) {
		cout << "Choose a Rotor # (1 to 8): ";
		cin >> Num;
		if ((Num <= 8) && (Num >= 1)) {
			OK = true;
		}
		else {
			cout << "--- Error: Rotor # must be between 1 and 8 ---" << endl;
		}
	}

	cout << "Choose a Rotor #: ";
	cin >> Num;
	Rotor.set_Num(Num);
	ID = to_string(Num);

	Q1 = "SELECT VALUE FROM ROTORS WHERE LABEL = ";
	Q2 = Q1 + ID;
	sqlite3_exec(DB, Q2.c_str(), callback_store, &container, NULL);

	values = container[0];

	for (int i = 0; i < values.size(); i++) {
		rotor_values.push_back(values[i]);
	}
	
	OK = false;
	while (OK == false) {
		cout << "Rotor Starting Position (1 to 26): "; 
		cin >> Start;
		if ((Start <= 26) && (Start >= 1)) {
			OK = true;
		}
		else {
			cout << "--- Error: Position # must be between 1 and 26 ---" << endl;
		}
	}

	ST = Start - 1;
	rotate(rotor_values.begin(), rotor_values.begin() + ST, rotor_values.end());

	Rotor.set_Val(rotor_values);
	Rotor.set_Start(ST);

	// Setup END
	return Rotor;
}
//Function to populate Enigma machine with rotors, plugboard, and reflector
void Set_Enigma(Rotors* R1, Rotors* R2, Rotors* R3, Reflector* RF, Plugboard* P, sqlite3* DB, Enigma* E) {
	Rotors Temp;
	int choice;
	char Reflect_Type;
	int loop = 0;
	//Select by part to reconfigure
	while (loop == 0) {
		cout << "----------------- MENU -----------------" << endl;
		cout << "1 - Set Rotor 01" << endl
			<< "2 - Set Rotor 02" << endl
			<< "3 - Set Rotor 03" << endl
			<< "4 - Set Reflector" << endl
			<< "5 - Set Plugboard" << endl
			<< "6 - Exit" << endl;
		cin >> choice;
		switch (choice) {
			//Populate rotor function prompts user for values, then assigns them to the rotor
		case 1:
			Temp = Populate_Rotor(DB, 1);
			R1->set_Num(Temp.get_Num());
			R1->set_Pos(Temp.get_Pos());
			R1->set_Start(Temp.get_Start());
			R1->set_Val(Temp.get_Val());
			E->set_r1(R1);
			break;
		case 2:
			Temp = Populate_Rotor(DB, 2);
			R2->set_Num(Temp.get_Num());
			R2->set_Pos(Temp.get_Pos());
			R2->set_Start(Temp.get_Start());
			R2->set_Val(Temp.get_Val());
			E->set_r2(R2);
			break;
		case 3:
			Temp = Populate_Rotor(DB, 3);
			R3->set_Num(Temp.get_Num());
			R3->set_Pos(Temp.get_Pos());
			R3->set_Start(Temp.get_Start());
			R3->set_Val(Temp.get_Val());
			E->set_r3(R3);
			break;
			//Reflector can only be chosen to B or C
		case 4:

			RF->set_TypeIn();
			RF->set_TypeOut();

			E->set_reflector(RF);
			break;
			//Plugboard function called to prompt user for new pairs
		case 5:
			P->clear_pairs();
			P->setCharacters();
			P->setPairs();

			E->set_plug(P);
			break;
			//End this loop and return to main menu
		case 6:
			loop = 1;
			break;
		default:
			cout << "Invalid Input" << endl;
			loop = 0;
			break;
		}
	}
}
