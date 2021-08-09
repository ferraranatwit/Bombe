#ifndef ENIGMAMAIN_H
#define ENIGMAMAIN_H

#include "Enigma.h" 
#include "Rotors.h"
#include "Plugboard.h"
#include "Reflector.h"

#include <iostream>
#include <string> 
#include <vector>

#include <sqlite3.h>
#include "DatabaseE.h"

//Function declarations
void Enigma_Main(sqlite3*);

Rotors Populate_Rotor(sqlite3*, int);

void Set_Enigma(Rotors*, Rotors*, Rotors*, Reflector*, Plugboard*, sqlite3*, Enigma*);

#endif
