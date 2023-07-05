#include <iostream>
#include "BST.h"
#include "database.h"
#include "fictionalCharacter.h"


using namespace std; 

int main()
{

    // Appel de la fonction createDatabase
    const char* pathCSV = "bst.csv";
    FictionalCharacter* fictionalCharactArray = new FictionalCharacter;
    Node* BST = createDatabase(pathCSV, fictionalCharactArray);

    // Appel de la fonction getHeight 
    int HeightofBST = getHeight(BST);
    cout << endl << "BST's height : " << HeightofBST << endl << endl;
    
  /* Question 3.2: Explication des résultats et des conséquences
 Nous avons l'arbre binaire de recherche avec une insertion uniquement vers la droite.
 Et liste d'éléments est triée par ordre alphabétique. De ce fait si on calcule la hauteur de 
 l'arbre binaire de recherche on obtient une hauteur de 43.
*/

/* Question 3.3 : proposition de solution pour le réglage du problème observé 
Pour éviter ce problème nous pouvons mettre en place une fonction qui nous permettrait de ne pas 
afficher les informations du tableau de FictionalCharcter par ordre alphabétique.
Ce qui nous permettrait de retrouver aussi des éléments vers la gauche
*/

//fonction permettant de trouver un personnage avec son nom
    fictionalCharactArray = load(pathCSV);
    // Méthode avec un nom appartenantn à la base de données.
    SearchingFictionalCharacter("Brodie","Bart", fictionalCharactArray, BST);
    // Méthode avec un nom n'appartenant pas à la base de données
    SearchingFictionalCharacter("Hamilton", "Verstappen", fictionalCharactArray, BST);

/*Ajout de la fonction dans l'arbre binaire de recherche
 qui est capable de rechercher tous les index des enregistrements
  dont les clés sont entre deux chaînes.
  */
cout << "Recherche entre 'Ma' et 'Mo' : ";
    SearchingFictionalCharacter("Ma", "Mo", fictionalCharactArray, BST);
    cout << endl << endl;
    
    /* La fonction ci-dessous nous permet de trouver les noms compris entre 
    'Ja' et 'Pi' dans le fichier CSV */
    
    cout << "Recherche entre 'Ja' et 'Pi' : ";
    SearchingFictionalCharacter("Ja", "Pi", fictionalCharactArray, BST);
    cout << endl << endl;


    return 0;
}
