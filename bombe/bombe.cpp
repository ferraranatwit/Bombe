#include "bombe.h"

int main(){


	//////////////////////////////////////////////////////////////////////////
	/* Array's should match the enigma teams rotor positions*/
	//////////////////////////////////////////////////////////////////////////
	char rotorOne[26] = {'E','K','M','F','L','G','D','Q','V','Z','N','T','O','W','Y','H','X','U','S','P','A','I','B','R','C','J'};
	char rotorTwo[26] = {'A','J','D','K','S','I','R','U','X','B','L','H','W','T','M','C','Q','G','Z','N','P','Y','F','V','O','E'};
	char rotorThree[26] = {'B','D','F','H','J','L','C','P','R','T','X','V','Z','N','Y','E','I','W','G','A','K','M','U','S','Q','O'};
	//char rotorFour[26] = {};
	//char rotorFive[26] = {};
	//char rotorSix[26] = {};
	//char rotorSeven[26] = {};
	//char rotorEight[26] = {};

	//////////////////////////////////////////////////////////////////////////
	/* Initializes input and output arrays*/
	//////////////////////////////////////////////////////////////////////////
	RotorsForBombe *rotorI = new RotorsForBombe(1);
	RotorsForBombe *rotorII = new RotorsForBombe(2);
	RotorsForBombe *rotorIII = new RotorsForBombe(3);
	//Rotors *rotorIV = new Rotors();
	//Rotors *rotorV = new Rotors();
	//Rotors *rotorVI = new Rotors();
	//Rotors *rotorVII = new Rotors();
	//Rotors *rotorVIII = new Rotors();

	//////////////////////////////////////////////////////////////////////////
	/* Initializes all the rotors using the known rotor arrays*/
	//////////////////////////////////////////////////////////////////////////
	rotorI->setInputArray(rotorOne); 
	rotorII->setInputArray(rotorTwo); 
	rotorIII->setInputArray(rotorThree);
	//rotorIV->setInputArray(rotorFour); 
	//rotorV->setInputArray(rotorFive);
	//rotorVI->setInputArray(rotorSix); 
	//rotorVII->setInputArray(rotorSeven);
	//rotorVIII->setInputArray(rotorEight); 

	//////////////////////////////////////////////////////////////////////////
	/* prints the array for testing purposes*/
	//////////////////////////////////////////////////////////////////////////
	//rotorI->printRotor();
	//rotorII->printRotor();
	//rotorIII->printRotor();
	//rotorIV->printRotor();
	//rotorV->printRotor();
	//rotorVI->printRotor();
	//rotorVII->printRotor();
	//rotorVIII->printRotor();

	//////////////////////////////////////////////////////////////////////////
	/*Initializes enigma for testing Bombe ONLY*/
	//////////////////////////////////////////////////////////////////////////
	EnigmaForBombe *enemyEnigma = new EnigmaForBombe(rotorI, rotorII, rotorIII,'T','P','R','H','G','S','Z','B');

	//////////////////////////////////////////////////////////////////////////
	/*Initializes Bombe*/
	//////////////////////////////////////////////////////////////////////////
	Bombe *bombeMan = new Bombe();



	//////////////////////////////////////////////////////////////////////////
	/* main*/
	//////////////////////////////////////////////////////////////////////////

/*
	int choice;
	
	std::cout << "1. Decrypt Text With Every Combination of Plugboard Settings and Rotors - I II III" <<std::end;
	std::cout << "2. Decrypt Text With Every Combination of Rotors (No Plugboard Settings)" << std::endl;
	std::cout << "\t Select: ";
	std::cin >> choice; 
	std::cout << std::endl;
	
	std::string text;

	switch(choice){
		case 1:
			std::cout << "Text to Decrypt: ";
			std::cin >> text;
			std::cout << std::endl;
			bombeMan->findOneIOCs(text,1,2,3);
			bombeMan->testRotorCombinationPB();
			bombeMan->getIOClist();
			break;
		case 2:
			break;

	}




*/





	//////////////////////////////////////////////////////////////////////////
	/* Everything below is for testing purposes*/
	//////////////////////////////////////////////////////////////////////////







	//bombeMan->enArr[0].printAllRotors();


	std::string testCrib = "WEATHERREPORT";
	std::string testMsg = "UACYCMXYIEXLCKGFZWQFQHLSOB";
	//bombeMan->checkPossible(testMsg, testCrib);
	//std::cout << std::endl << bombeMan->IoC(testMsg) << std::endl;

	//bombeMan->testRotorCombination(bombeMan->theOne,"UACYCMXYIEXLCKGFZWQFQHLSOB");

	//bombeMan->getIOClist();
	std::string s = "THEWEATHERREPORTISVERYNICEOUTTODAY";
	for(int i = 0; i < s.length(); i++){
		std::cout << enemyEnigma->inOut(s[i]);
	}
	std::cout << std::endl;
	//OPCERWHVWXVTOCGWYNMJLHVQLOXXQYZPR


	//LTCERWIVWXVPNCGBYNMJLHVQLOXXQYZTR
	//LTCERWIVWXVPNCGBYNCTTGZUEZWZPGGKYZ



	//bombeMan->findAllIOCs("LTCERWIVWXVPNCGBYNCTTGZUEZWZPGGKYZ");
	//bombeMan->testRotorCombinationPB();
	//bombeMan->getIOClist();

	//LTCERWIVWXVPNCGBYNCTTGZUEZWZPGGKYZ // T P
	//LCCEHWIPWNXPNCBBYNCTWGZUEZWZPGGKYZ // R H
	//LCCEHWIPWNXPNCBBYUCTWSZUEZWZPSSKYZ // TP RH GS
	//LCCEHSIPWNXPNCBBYUCTWSAUEAWAPSSKDA // TP RH GS AZ
	//LCCEHWIPWNXPNCZZYUCTWSBUEBWBPSSKYB // TP RH GS BZ
	//std::string tText;
	//std::cout << "Insert text to Decrypt: ";
	//getline(std::cin,tText);
	//bombeMan->findOneIOCs(1,2,3);
	bombeMan->findAllIOCs();
	bombeMan->testRotorCombinationPB();
	std::list<Guess> listOfCombos = bombeMan->getIOClist();


	//bombeMan->rotorSwapTwo();
	//Code below tests enigma inputs "A" 26 times
	//Enigma *testEnigma = new Enigma(rotorI, rotorII, rotorIII,'T','U','S','W');
	//testEnigma->runRotors(); // runs through all the rotor settings
	



	//Below can test enigmas
	/*
	for(int i=0;i<120;i++){
		//std::cout << i << ". Final: " <<testEnigma->inOut('A') << std::endl << std::endl;
		std::cout << testEnigma->inOut('A');
		if((i+1) % 5 == 0){
			std::cout << " ";
		}
		if((i+1) % 15 == 0){
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
	*/
	

/*
	std::cout << std::endl;
	char test1 = testEnigma->inOut('T');
	char test2 = testEnigma->inOut('E');
	char test3 = testEnigma->inOut('S');
	char test4 = testEnigma->inOut('T');
	std::cout << test1;
	std::cout << test2;
	std::cout << test3;
	std::cout << test4 << std::endl;

*/	
	

	//Bombe *bombeMan = new Bombe();
	//bombeMan->fillRotors();

	//bombeMan->test();


	//delete bombeMan;

	return 0;
}
