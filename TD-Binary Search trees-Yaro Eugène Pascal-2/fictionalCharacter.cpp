#include "fictionalCharacter.h"
#include <string>
#include <random>
#include<iostream>
#include <fstream>
#include <sstream>

using namespace std;

FictionalCharacter* load(const char* pathCSV)
{
    //  initialisation des variables 
    int NBLines = 0;
    ifstream fin;
    string line;
    string cellsByLine[4] = {};

    // Ouverture d'un fichier existant
    fin.open(pathCSV);

    // Comptage de lignes 
    while (fin.good()) {
        getline(fin, line, '\n');
        NBLines++;
    }

    // Création du tableau dynamique de fictionalCharacter
    FictionalCharacter* fictionalCharactArray = new FictionalCharacter[NBLines];

    // Initialisation du tableau dynamique
    for (int i = 0; i < NBLines; i++) {
        fictionalCharactArray[i].index = i;
        fictionalCharactArray[i].name = "";
        fictionalCharactArray[i].surname = "";
        fictionalCharactArray[i].book = "";
        fictionalCharactArray[i].age = 0;
    }

    //  fermer er réouvrir un fichier existant
    fin.close();
    fin.open(pathCSV);

    // remplissage du tableau 
    int i = 0;
    while (fin.good()) {
        getline(fin, line, '\n');
        split(line, ';', cellsByLine);

        cout << cellsByLine[0] << " --- "
             << cellsByLine[1] << " --- "
             << cellsByLine[2] << " --- "
             << cellsByLine[3] << endl;

        fictionalCharactArray[i].name = cellsByLine[0];
        fictionalCharactArray[i].surname = cellsByLine[1];
        fictionalCharactArray[i].book = cellsByLine[2];
        fictionalCharactArray[i].age = stoi(cellsByLine[3]);

        i++;
    }

    return fictionalCharactArray;
}

void split(const string& s, char delim, string* cellsByLine) {
    string item;
    stringstream ss(s);
    int i = 0;

    while (getline(ss, item, delim)) {
        cellsByLine[i] = item;
        i++;
    }
}

void modify_fictionalCharactArray(FictionalCharacter* fictionalCharactArray)
{
    int length = fictionalCharactArray[0].Arraylength;
    unsigned seed = 0;
    

  // Modification du tableau de fictionalcharacter
    modify_fictionalCharacterArray(fictionalCharactArray);
}

FictionalCharacter* getFictionalCharacterByIndex(int index, FictionalCharacter* fictionalCharactArray)
{
    return nullptr;
}
