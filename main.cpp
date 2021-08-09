//#include "Enigma/DatabaseE.h"
//#include "Enigma/EnigmaMain.h"

#include "bombe/DatabaseB.h"
#include "bombe/bombe.h"

#include <iostream>
#include <string> 
#include <vector>

#include <cstdlib>
#include <sstream>

#include "sqlite3.h"

namespace patch
{
	template < typename T > std::string to_string(const T& n) {
		std::ostringstream stm;
		stm << n;
		return stm.str();
	}
}

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
while(choice != 0){
	cout << "1. Encrypt using Enigma" << endl;
	cout << "2. Decrypt using Bombe" << endl;

	cout << "0. EXIT" << endl;
	cout << endl << "   Select: ";
	cin >> choice;
	std::cin.ignore();
	cout << endl;

	char* messageError;
	string pbTemp;
	std::list<Guess> bombeList;

	if (choice == 1) {
		// ENIGMA
	//	sqlite3_open("Enigma.db", &DB);
	//	RotorDB(DB);
	//	InputDB(DB);
		
	//	Enigma_Main(DB);
		// ENIGMA END
	}
	else if (choice == 2) {
		// BOMBE START


		sqlite3_open("Bombe.db", &DB);
		sqlite3_open("Bombe_History.db", &DB_HIST);
 	 	std::string del = "DROP TABLE BOMBE;";
  		sqlite3_exec(DB, del.c_str(), NULL, 0, &messageError);
		createBombeDB(DB);
		createBombe_HistDB(DB_HIST);

		//std::cout << "1. Decrypt text using Bombe" <<std::endl;
		//std::cout << "2. Use TypeX" << std::endl;
		//std::cout << std::endl << "\t Select: ";
		//std::cin >> choice2; 
		//std::cin.ignore();
		//std::cout << std::endl;
		Bombe *bombeMan = new Bombe();
		//std::cout << "Insert text to Decrypt: ";
		//std::cin >> tText;
		//std::cout << std::endl;

		//if(choice2 == 2){


			
			
		//}else if(choice2 ==1){
			//std::string tText = "LCCEHWIPWNXPNCZZYUCTWSBUEBWBPSSKYB";
		//	std::cout << "3" << std::endl;
			bombeMan->findAllIOCs();
			bombeMan->testRotorCombinationPB();
			bombeList = bombeMan->initialListPlugboardForBombe;
			std::cout << std::endl << "Adding to Database (Best on top)" << std::endl;
			for(std::list<Guess>::iterator it=bombeList.begin(); it != bombeList.end(); ++it){
				pbTemp = it->getPBString();
				addToBombeDB(DB, it->msg, patch::to_string(it->ioc), patch::to_string(it->distanceIOC), it->printRotorNum(it->rotorOneC), it->printRotorNum(it->rotorTwoC),it->printRotorNum(it->rotorThreeC),patch::to_string(it->rotorOneP), patch::to_string(it->rotorTwoP), patch::to_string(it->rotorThreeP),pbTemp, patch::to_string(it->inputed),it->ogMsg);
			}
			int choice3;
			while(choice3 != 99){
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
			std::cout << "99. Exit" << std::endl;
			std::cout << std::endl << "Output Format - Rotor Combo | Rotor Position | IOC | OG Msg | Decrypted Msg | Plugboard Settings" << std::endl;
			std::cout <<std::endl << "\t Select: ";
			std::cin >> choice3;
			std::cin.ignore();
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
				case 99:
					return 0;
			}
		//}
		}
	}
}

	return 0;
}


