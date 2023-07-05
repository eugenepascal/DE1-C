#include "database.h"
#include "BST.h"
#include "fictionalCharacter.h"
#include <string>
#include <iostream>


using namespace std;

Node* createDatabase(const char* pathCSV, FictionalCharacter* fictionalCharactArray, Node* root)
{

	fictionalCharactArray = load(pathCSV);
    (fictionalCharactArray);
	root = index(fictionalCharactArray);
    


	return root;
}
