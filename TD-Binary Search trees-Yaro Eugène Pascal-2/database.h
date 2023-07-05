#ifndef DATABASE_H
#define DATABASE_H

#include "fictionalCharacter.h"
#include <string>
#include "BST.h"


using namespace std;

// Création d'un arbre binaire de recherche à partir d'un fichier CSV
Node* createDatabase(const char* pathCSV, FictionalCharacter* fictionalCharactArray, Node* root = nullptr);


#endif
