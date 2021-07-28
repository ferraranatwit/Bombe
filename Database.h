#ifndef DATABASE_H
#define DATABASE_H
//test
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include "sqlite3.h"

int callback(void*, int, char**, char**);

//int callback_store(void*, int, char**, char**);

void RotorDB(sqlite3*); 

void InputDB(sqlite3*);

void createBombeDB(sqlite3*);
void createBombe_HistDB(sqlite3*);

void addToBombe_HistDB(sqlite3*, std::string, std::string, std::string, std::string,std::string,std::string, std::string, std::string,std::string,std::string,std::string,std::string);
void addToBombeDB(sqlite3*, std::string, std::string, std::string, std::string,std::string,std::string, std::string, std::string,std::string,std::string,std::string,std::string);

void getBombeNoPBTable(sqlite3*);
void getBombeOnePBTable(sqlite3*);
void getBombeTwoPBTable(sqlite3*);
void getBombeThreePBTable(sqlite3*);
void getBombeFourPBTable(sqlite3*);
void getBombeFivePBTable(sqlite3*);
void getBombeSixPBTable(sqlite3*);
void getBombeSevenPBTable(sqlite3*);
void getBombeEightPBTable(sqlite3*);
void getBombeNinePBTable(sqlite3*);
void getBombeTenPBTable(sqlite3*);
void getBombeElevenPBTable(sqlite3*);
void getBombeTwelvePBTable(sqlite3*);
void getBombeThirteenPBTable(sqlite3*);

void getBombe_HistNoPBTable(sqlite3*);
void getBombe_HistOnePBTable(sqlite3*);
void getBombe_HistTwoPBTable(sqlite3*);
void getBombe_HistThreePBTable(sqlite3*);
void getBombe_HistFourPBTable(sqlite3*);
void getBombe_HistFivePBTable(sqlite3*);
void getBombe_HistSixPBTable(sqlite3*);
void getBombe_HistSevenPBTable(sqlite3*);
void getBombe_HistEightPBTable(sqlite3*);
void getBombe_HistNinePBTable(sqlite3*);
void getBombe_HistTenPBTable(sqlite3*);
void getBombe_HistElevenPBTable(sqlite3*);
void getBombe_HistTwelvePBTable(sqlite3*);
void getBombe_HistThirteenPBTable(sqlite3*);


#endif