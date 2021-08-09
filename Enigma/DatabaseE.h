#ifndef DATABASEE_H
#define DATABASEE_H

#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include "sqlite3.h"

//Function declarations for database usage
int callback(void*, int, char**, char**);

int callback_store(void*, int, char**, char**);

void RotorDB(sqlite3*); 

void InputDB(sqlite3*);

#endif
