#include "Database.h"

int callback(void* data, int argc, char** argv, char** azColName) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}
int callback_Bombe(void* data, int argc, char** argv, char** azColName) {
	int i;
	for (i = 0; i < argc; i++) {
		if(i == 3 || i == 6 || i == 7 || i == 8 || i == 9){
			std::cout <<"| ";
		}
		std::cout << argv[i] << " ";
	}
	printf("\n");
	return 0;
}
/*
int callback_store(void* data, int argc, char** argv, char** azColName) {
	if (argc == 0) {
		return -1;
	}

	auto& container = *static_cast<std::vector<std::string>*>(data);

	if (!argv[0]) {
		container.push_back("NULL");
	}
	else {
		container.push_back(argv[0]);
	}

	return 0;
}
*/
void RotorDB(sqlite3* DB) {
	char* messageError;
	std::string exit;
	std::string Q1;

	std::string Rotors = "CREATE TABLE ROTORS("
		"LABEL INTEGER PRIMARY KEY, "
		"VALUE TEXT NOT NULL); ";

	exit = sqlite3_exec(DB, Rotors.c_str(), NULL, 0, &messageError);

	Q1 = "INSERT INTO ROTORS VALUES (1,'EKMFLGDQVZNTOWYHXUSPAIBRCJ')";
	exit = sqlite3_exec(DB, Q1.c_str(), callback, 0, &messageError);

	Q1 = "INSERT INTO ROTORS VALUES (2,'AJDKSIRUXBLHWTMCQGZNPYFVOE')";
	exit = sqlite3_exec(DB, Q1.c_str(), callback, 0, &messageError);

	Q1 = "INSERT INTO ROTORS VALUES (3,'BDFHJLCPRTXVZNYEIWGAKMUSQO')";
	exit = sqlite3_exec(DB, Q1.c_str(), callback, 0, &messageError);

	Q1 = "INSERT INTO ROTORS VALUES (4,'ESOVPZJAYQUIRHXLNFTGKDCMWB')";
	exit = sqlite3_exec(DB, Q1.c_str(), callback, 0, &messageError);

	Q1 = "INSERT INTO ROTORS VALUES (5,'VZBRGITYUPSDNHLXAWMJQOFECK')";
	exit = sqlite3_exec(DB, Q1.c_str(), callback, 0, &messageError);

	Q1 = "INSERT INTO ROTORS VALUES (6,'JPGVOUMFYQBENHZRDKASXLICTW')";
	exit = sqlite3_exec(DB, Q1.c_str(), callback, 0, &messageError);

	Q1 = "INSERT INTO ROTORS VALUES (7,'NZJHGRCXMYSWBOUFAIVLPEKQDT')";
	exit = sqlite3_exec(DB, Q1.c_str(), callback, 0, &messageError);

	Q1 = "INSERT INTO ROTORS VALUES (8,'FKQHTLXOCBJSPDZRAMEWNIUYGV')";
	exit = sqlite3_exec(DB, Q1.c_str(), callback, 0, &messageError);
}

void InputDB(sqlite3* DB) {
	char* messageError;
	std::string exit;
	std::string Q1;

	std::string input = "CREATE TABLE ENIGMA("
		"USER_INPUT PRIMARY KEY,"
		"ROTOR_ONE TEXT NOT NULL,"
		"ROTOR_TWO TEXT NOT NULL,"
		"ROTOR_THREE TEXT NOT NULL,"
		"REFLECTOR_TYPE TEXT NOT NULL,"
		"PLUGBOARD_COMBOS TEXT,"
		"OUTPUT TEXT);";

	exit = sqlite3_exec(DB, input.c_str(), NULL, 0, &messageError);

	Q1 = "INSERT INTO ENIGMA VALUES ('Default', 1, 2, 3, 'A', 'ABCDEF', 'Default')";
	exit = sqlite3_exec(DB, Q1.c_str(), callback, 0, &messageError);
}
void createBombeDB(sqlite3* DB) {
	char* messageError;
	std::string exit;
	std::string Q1;
	std::string input = "CREATE TABLE BOMBE("
		"MSG TEXT PRIMARY KEY,"
		"IOC REAL NOT NULL,"
		"IOC_DIST REAL NOT NULL,"
		"ROTORONE_C TEXT NOT NULL,"
		"ROTORTWO_C TEXT NOT NULL,"
		"ROTORTHREE_C TEXT NOT NULL,"
		"ROTORONE_P INT NOT NULL,"
		"ROTORTWO_P INT NOT NULL,"
		"ROTORTHREE_P INT NOT NULL,"
		"PLUGBOARD_COMBOS TEXT,"
		"PB_INPUTED INT NOT NULL,"
		"OGMSG TEXT NOT NULL);";
	exit = sqlite3_exec(DB, input.c_str(), NULL, 0, &messageError);
}
void createBombe_HistDB(sqlite3* DB) {
	char* messageError;
	std::string exit;
	std::string Q1;
	std::string input = "CREATE TABLE BOMBE_HIST("
		"MSG TEXT PRIMARY KEY,"
		"IOC REAL NOT NULL,"
		"IOC_DIST REAL NOT NULL,"
		"ROTORONE_C TEXT NOT NULL,"
		"ROTORTWO_C TEXT NOT NULL,"
		"ROTORTHREE_C TEXT NOT NULL,"
		"ROTORONE_P INT NOT NULL,"
		"ROTORTWO_P INT NOT NULL,"
		"ROTORTHREE_P INT NOT NULL,"
		"PLUGBOARD_COMBOS TEXT,"
		"PB_INPUTED INT NOT NULL,"
		"OGMSG TEXT NOT NULL);";
	exit = sqlite3_exec(DB, input.c_str(), NULL, 0, &messageError);
}
void addToBombeDB(sqlite3* DB, std::string MSG, std::string ioc, std::string ioc_D, std::string r1c, std::string r2c,std::string r3c,std::string r1p, std::string r2p, std::string r3p,std::string pb,std::string inputed,std::string ogMsg) {
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "INSERT INTO BOMBE VALUES('"+ MSG +"',"+ ioc + "," + ioc_D +",'"+ r1c +"','" + r2c + "','"+ r3c + "'," + r1p + "," + r2p + "," + r3p + ",'" + pb + "'," + inputed + ",'" + ogMsg + "');";
	exit = sqlite3_exec(DB, Q1.c_str(), NULL, 0, &messageError);
}
void addToBombe_HistDB(sqlite3* DB, std::string MSG, std::string ioc, std::string ioc_D, std::string r1c, std::string r2c,std::string r3c,std::string r1p, std::string r2p, std::string r3p,std::string pb,std::string inputed,std::string ogMsg) {
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "INSERT INTO BOMBE_HIST VALUES('"+ MSG +"',"+ ioc + "," + ioc_D +",'"+ r1c +"','" + r2c + "','"+ r3c + "'," + r1p + "," + r2p + "," + r3p + ",'" + pb + "'," + inputed + ",'" + ogMsg + "');";
	exit = sqlite3_exec(DB, Q1.c_str(), NULL, 0, &messageError);
}

void getBombeNoPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE WHERE PB_INPUTED = 0;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombe_HistNoPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE_HIST WHERE PB_INPUTED = 0;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}

void getBombeOnePBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE WHERE PB_INPUTED = 1;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombe_HistOnePBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE_HIST WHERE PB_INPUTED = 1;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombeTwoPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE WHERE PB_INPUTED = 2;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombeTwo_HistPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE_HIST WHERE PB_INPUTED = 2;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombeThreePBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE WHERE PB_INPUTED = 3;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombe_HistThreePBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE_HIST WHERE PB_INPUTED = 3;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombeFourPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE WHERE PB_INPUTED = 4;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombeFour_HistPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE_HIST WHERE PB_INPUTED = 4;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}

void getBombeFivePBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE WHERE PB_INPUTED = 5;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombe_HistFivePBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE_HIST WHERE PB_INPUTED = 5;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
  void getBombeSixPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE WHERE PB_INPUTED = 6;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombe_HistSixPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE_HIST WHERE PB_INPUTED = 6;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}

 void getBombeSevenPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE WHERE PB_INPUTED = 7;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombe_HistSevenPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE_HIST WHERE PB_INPUTED = 7;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
 void getBombeEightPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE WHERE PB_INPUTED = 8;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombe_HistEightPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE_HIST WHERE PB_INPUTED = 8;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombeNinePBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE WHERE PB_INPUTED = 9;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombe_HistNinePBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE_HIST WHERE PB_INPUTED = 9;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombeTenPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE WHERE PB_INPUTED = 10;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombe_HistTenPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE_HIST WHERE PB_INPUTED = 10;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombeElevenPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE WHERE PB_INPUTED = 11;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombe_HistElevenPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE_HIST WHERE PB_INPUTED = 11;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombeTwelvePBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE WHERE PB_INPUTED = 12;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombe_HistTwelvePBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE_HIST WHERE PB_INPUTED = 12;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombeThirteenPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE WHERE PB_INPUTED = 13;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getBombe_HistThirteenPBTable(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT ROTORONE_C,ROTORTWO_C,ROTORTHREE_C,ROTORONE_P,ROTORTWO_P,ROTORTHREE_P,IOC,OGMSG,MSG,PLUGBOARD_COMBOS FROM BOMBE_HIST WHERE PB_INPUTED = 13;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}
void getPBTableByIOC(sqlite3* DB){
	char* messageError;
	std::string exit;
	std::string Q1;
	Q1 = "SELECT * FROM BOMBE ORDER BY IOC_DIST DESC;";
  	exit = sqlite3_exec(DB, Q1.c_str(), callback_Bombe, NULL, NULL);
}