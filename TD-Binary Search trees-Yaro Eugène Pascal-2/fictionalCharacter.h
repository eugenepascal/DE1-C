#ifndef fictionalCharacter_h
#define fictionalCharacter_h

#include <string>

using namespace std;

//création de la structure fictionalcharacter

typedef struct FictionalCharacter {
	int index;
	string name;
	string surname;
    int age;
	string book;
    int Arraylength;	
} FictionalCharacter;


// Chargement des caractères du fichier CSV

FictionalCharacter* load(const char* pathCSV);


// Division d'une chaine de caractères 

void split(const string& s, char delim, string* cellsByLine);

// Modification du tableau de fictionalcharacter 
void modify_fictionalCharacterArray(FictionalCharacter* fictionalCharactArray);

#endif