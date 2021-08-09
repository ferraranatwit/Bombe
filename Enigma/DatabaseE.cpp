#include "DatabaseE.h"

int callback(void* data, int argc, char** argv, char** azColName) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}

// ENIGMA DATABASE CODE

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
//Storing all 8 rotor scramblers
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
//Storing Enigma machine settings when user initalizes them
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

