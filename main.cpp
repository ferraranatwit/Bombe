#include "bombe/bombe.h"
#include "Database.h"

#include <iostream>
#include <string> 
#include <vector>
#include <cstdlib>
#include <sstream>


#include <sqlite3.h>

namespace patch
{
    template < typename T > std::string to_string( const T& n ){
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

// Populate Rotors
//Rotors Populate_Rotor(sqlite3*, int);


using namespace std;

int main(int argc, char** argv) {
	sqlite3* DB;
	sqlite3* DB_HIST;
	int choice;
	int choice2;
	
std::cout << R"(
    ______      _                          ___        ____                  __              
   / ____/___  (_)___ _____ ___  ____ _   ( _ )      / __ )____  ____ ___  / /_  ___        
  / __/ / __ \/ / __ `/ __ `__ \/ __ `/  / __ \/|   / __  / __ \/ __ `__ \/ __ \/ _ \       
 / /___/ / / / / /_/ / / / / / / /_/ /  / /_/  <   / /_/ / /_/ / / / / / / /_/ /  __/       
/_____/_/ /_/_/\__, /_/ /_/ /_/\__,_/   \____/\/  /_____/\____/_/ /_/ /_/_.___/\___/        
              /____/                                                                        
                                                   
)" << '\n';


	std::cout << "1. Encrypt using Enigma (Does not work in this case)" << std::endl;
	std::cout << "2. Decrypt using Bombe" << std::endl;
	std::cout << std::endl << "   Select: ";
	std::cin >> choice;
	std::cout << std::endl;
	//std::string tText;
	
	char* messageError;
	
	std::string pbTemp; 
	std::list<Guess> bombeList;
	
	


	if(choice == 1){
		/*
		char Reflect_Type;

			
		sqlite3_open("Enigma.db", &DB);
		RotorDB(DB);
		InputDB(DB);

		R1 = Populate_Rotor(DB, 1);
		R2 = Populate_Rotor(DB, 2);
		R3 = Populate_Rotor(DB, 3);

		cout << "----- Choose Reflector Type (B/C) ------ " << endl; 
		cout << "Reflector Type: "; cin >> Reflect_Type;
		cout << "-----------------------------------------" << endl;

			
		Rf.set_TypeIn(Reflect_Type);
		Rf.set_TypeOut(Reflect_Type);

			
		P.setCharacters();
		P.setPairs();

			//	Enigma Encoder(P, Rf, R1, R2, R3);

		cout << "----------------- MENU -----------------" << endl;


			//string message;
			//cout << "-----------------------------------------------------" << endl;
			//cout << "Enter the message you would like to encrypt: ";
			//cin >> message;

			//vector<char> Input;
			//for (int i = 0; i < message.size(); i++) {
			//	Input.push_back(message[i]);
			//}

			/*R1.encrypt(Input);*/


	}else if(choice == 2){
		sqlite3_open("Bombe.db", &DB);
		sqlite3_open("Bombe_History.db", &DB_HIST);
 	  std::string del = "DROP TABLE BOMBE;";
  	sqlite3_exec(DB, del.c_str(), NULL, 0, &messageError);
		createBombeDB(DB);
		createBombe_HistDB(DB_HIST);

		std::cout << "1. Decrypt text W/ every combination of plugboard setting and rotors - I II III" <<std::endl;
		std::cout << "2. Decrypt text W/ every combination of rotors (no plugboard settings)" << std::endl;
		std::cout << "3. Attempt decrypt text W/ every combination of rotors and plugboard settings" << std::endl;
		std::cout << std::endl << "\t Select: ";
		std::cin >> choice2; 
		std::cin.ignore();
		std::cout << std::endl;
		Bombe *bombeMan = new Bombe();
		//std::cout << "Insert text to Decrypt: ";
		//std::cin >> tText;
		//std::cout << std::endl;

		if(choice2 == 1){
			
			//std::string tText = "LCCEHWIPWNXPNCZZYUCTWSBUEBWBPSSKYB";
			bombeMan->findOneIOCs(1,2,3);
			bombeMan->testRotorCombinationPB();
			bombeList = bombeMan->initialListPlugboardForBombe;
			std::cout << std::endl << "Adding to Database (Best on top)" << std::endl;
			for(std::list<Guess>::iterator it=bombeList.begin(); it != bombeList.end(); ++it){
				pbTemp = it->getPBString();
				//NEED TO ADD SORT VAR TOO
				addToBombe_HistDB(DB_HIST, it->msg, patch::to_string(it->ioc), patch::to_string(it->distanceIOC), it->printRotorNum(it->rotorOneC), it->printRotorNum(it->rotorTwoC),it->printRotorNum(it->rotorThreeC),patch::to_string(it->rotorOneP), patch::to_string(it->rotorTwoP), patch::to_string(it->rotorThreeP),pbTemp, patch::to_string(it->inputed),it->ogMsg);
				addToBombeDB(DB, it->msg, patch::to_string(it->ioc), patch::to_string(it->distanceIOC), it->printRotorNum(it->rotorOneC), it->printRotorNum(it->rotorTwoC),it->printRotorNum(it->rotorThreeC),patch::to_string(it->rotorOneP), patch::to_string(it->rotorTwoP), patch::to_string(it->rotorThreeP),pbTemp, patch::to_string(it->inputed),it->ogMsg);
			}
			int choice3;
			std::cout << std::endl << "0. Print All Settings | No PB Setting" << std::endl;
			std::cout << "1. Print All Settings | One PB Setting" << std::endl;
			std::cout << "2. Print All Settings | Two PB Setting" << std::endl;
			std::cout << "3. Print All Settings | Three PB Setting" << std::endl;
			std::cout << "4. Print All Settings | Four PB Setting" << std::endl;
			std::cout << "5. Print All Settings | Five PB Setting" << std::endl;
			std::cout << "6. Print All Settings | Six PB Setting" << std::endl;
			std::cout << "7. Print All Settings | Seven PB Setting" << std::endl;
			std::cout << "8. Print All Settings | Eight PB Setting" << std::endl;
			std::cout << "9. Print All Settings | Nine PB Setting" << std::endl;
			std::cout << "10. Print All Settings | Ten PB Setting" << std::endl;
			std::cout << "11. Print All Settings | Eleven PB Setting" << std::endl;
			std::cout << "12. Print All Settings | Twelve PB Setting" << std::endl;
			std::cout << "13. Print All Settings | Thirteen PB Setting" << std::endl;
			std::cout << std::endl << "Output Format - Rotor Combo | Rotor Position | IOC | OG Msg | Decrypted Msg | Plugboard Settings" << std::endl;
			std::cout <<std::endl << "\t Select: ";
			std::cin >> choice3;
			std::cout << std::endl;
			//no pb setting initialListSorted

			
			switch(choice3){
				case 0:
					getBombeNoPBTable(DB);
					break;
				case 1:
					getBombeOnePBTable(DB);
					break;
				case 2:
					getBombeTwoPBTable(DB);
					break;
				case 3:
					getBombeThreePBTable(DB);
					break;
				case 4:
					getBombeFourPBTable(DB);
					break;
				case 5:
					getBombeFivePBTable(DB);
					break;
				case 6:
					getBombeSixPBTable(DB);
					break;
				case 7:
					getBombeSevenPBTable(DB);
					break;
				case 8:
					getBombeEightPBTable(DB);
					break;
				case 9:
					getBombeNinePBTable(DB);
					break;
				case 10:
					getBombeTenPBTable(DB);
					break;
				case 11:
					getBombeElevenPBTable(DB);
					break;
				case 12:
					getBombeTwelvePBTable(DB);
					break;
				case 13:
					getBombeThirteenPBTable(DB);
					break;

			}
			//Need cases for rest of settings and sort by IOC (I think the IOC sort is already written it just needs to be called)

			//



		}else if(choice == 2){

			//std::string tText = "LCCEHWIPWNXPNCZZYUCTWSBUEBWBPSSKYB";
			//not correct findIOC function
			bombeMan->findOneIOCs(1,2,3);
			bombeMan->testRotorCombinationPB();
			bombeList = bombeMan->initialListPlugboardForBombe;
			std::cout << std::endl << "Adding to Database (Best on top)" << std::endl;
			for(std::list<Guess>::iterator it=bombeList.begin(); it != bombeList.end(); ++it){
				pbTemp = it->getPBString();
				//NEED TO ADD SORT VAR TOO
				addToBombeDB(DB, it->msg, patch::to_string(it->ioc), patch::to_string(it->distanceIOC), it->printRotorNum(it->rotorOneC), it->printRotorNum(it->rotorTwoC),it->printRotorNum(it->rotorThreeC),patch::to_string(it->rotorOneP), patch::to_string(it->rotorTwoP), patch::to_string(it->rotorThreeP),pbTemp, patch::to_string(it->inputed),it->ogMsg);
			}
			int choice3;
			std::cout << std::endl << "Click anything - Print All Settings | No PB Setting" << std::endl;

			std::cout << std::endl << "Output Format - Rotor Combo | Rotor Position | IOC | OG Msg | Decrypted Msg | Plugboard Settings" << std::endl;
			std::cout <<std::endl << "\t Select: ";
			std::cin >> choice3;
			std::cout << std::endl;
			//no pb setting initialListSorted
			getBombeNoPBTable(DB);
			
			
		}else if(choice ==3){
			//std::string tText = "LCCEHWIPWNXPNCZZYUCTWSBUEBWBPSSKYB";
			bombeMan->findAllIOCs();
			bombeMan->testRotorCombinationPB();
			bombeList = bombeMan->initialListPlugboardForBombe;
			std::cout << std::endl << "Adding to Database (Best on top)" << std::endl;
			for(std::list<Guess>::iterator it=bombeList.begin(); it != bombeList.end(); ++it){
				pbTemp = it->getPBString();
				addToBombeDB(DB, it->msg, patch::to_string(it->ioc), patch::to_string(it->distanceIOC), it->printRotorNum(it->rotorOneC), it->printRotorNum(it->rotorTwoC),it->printRotorNum(it->rotorThreeC),patch::to_string(it->rotorOneP), patch::to_string(it->rotorTwoP), patch::to_string(it->rotorThreeP),pbTemp, patch::to_string(it->inputed),it->ogMsg);
			}
			int choice3;
			std::cout << std::endl << "0. Print All Settings | No PB Setting" << std::endl;
			std::cout << "1. Print All Settings | One PB Setting" << std::endl;
			std::cout << "2. Print All Settings | Two PB Setting" << std::endl;
			std::cout << "3. Print All Settings | Three PB Setting" << std::endl;
			std::cout << "4. Print All Settings | Four PB Setting" << std::endl;
			std::cout << "5. Print All Settings | Five PB Setting" << std::endl;
			std::cout << "6. Print All Settings | Six PB Setting" << std::endl;
			std::cout << "7. Print All Settings | Seven PB Setting" << std::endl;
			std::cout << "8. Print All Settings | Eight PB Setting" << std::endl;
			std::cout << "9. Print All Settings | Nine PB Setting" << std::endl;
			std::cout << "10. Print All Settings | Ten PB Setting" << std::endl;
			std::cout << "11. Print All Settings | Eleven PB Setting" << std::endl;
			std::cout << "12. Print All Settings | Twelve PB Setting" << std::endl;
			std::cout << "13. Print All Settings | Thirteen PB Setting" << std::endl;
			std::cout << std::endl << "Output Format - Rotor Combo | Rotor Position | IOC | OG Msg | Decrypted Msg | Plugboard Settings" << std::endl;
			std::cout <<std::endl << "\t Select: ";
			std::cin >> choice3;
			std::cout << std::endl;

			
			switch(choice3){
				case 0:
					getBombeNoPBTable(DB);
					break;
				case 1:
					getBombeOnePBTable(DB);
					break;
				case 2:
					getBombeTwoPBTable(DB);
					break;
				case 3:
					getBombeThreePBTable(DB);
					break;
				case 4:
					getBombeFourPBTable(DB);
					break;
				case 5:
					getBombeFivePBTable(DB);
					break;
				case 6:
					getBombeSixPBTable(DB);
					break;
				case 7:
					getBombeSevenPBTable(DB);
					break;
				case 8:
					getBombeEightPBTable(DB);
					break;
				case 9:
					getBombeNinePBTable(DB);
					break;
				case 10:
					getBombeTenPBTable(DB);
					break;
				case 11:
					getBombeElevenPBTable(DB);
					break;
				case 12:
					getBombeTwelvePBTable(DB);
					break;
				case 13:
					getBombeThirteenPBTable(DB);
					break;

			}
		}
		
	}


	return 0;
}
/*

Rotors Populate_Rotor(sqlite3* DB, int pos) { 
	vector<string> container;
	string exit;
	string Q1, Q2;
	string ID;
	char* messageError;
	int ST = 0;
	int Num = 0;
	int Pos = 0;
	char Start = ' ';

	Rotors Rotor;
	vector<char> rotor_values;

	string values;

	// Setup START
	cout << "----- Choose Rotor for position 0" << pos << " -----" << endl;
	Rotor.set_Pos(pos);

	cout << "Choose a Rotor #: ";
	cin >> Num;
	Rotor.set_Num(Num);
	ID = patch::to_string(Num);

	Q1 = "SELECT VALUE FROM ROTORS WHERE LABEL = ";
	Q2 = Q1 + ID;

	//sqlite3_exec(DB, Q2.c_str(), callback_store, &container, NULL);
	sqlite3_exec(DB, Q2.c_str(), NULL, 0, &messageError);

	values = container[0];

	for (int i = 0; i < values.size(); i++) {
		rotor_values.push_back(values[i]);
	}
	Rotor.set_Val(rotor_values);

	cout << "Rotor Starting Position: "; cin >> Start;
	for (int i = 0; i < rotor_values.size(); i++) {
		if (Start == rotor_values[i]) {
			ST = i;
		}
	}
	//cout << ST << endl;
	Rotor.set_Start(ST);

	// Setup END
	return Rotor;
}
*/