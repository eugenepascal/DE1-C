#ifndef BST_h
#define BST_h
#include <string>
#include "fictionalCharacter.h"


using namespace std;

typedef struct Node {
	int index;
	string key;
	Node* left;
	Node* right;
} Node;

// Insertion de noeud
bool insert(string key, int index, Node* root);

// Insertion récursive avec la position du noeud dans l'arbre
Node* recursive_insertion(Node* activeNode, int index, string key);

// Vérifier si l’arbre est un arbre binaire de recherche ou non
bool BSTornot(Node* root, Node* leftNode, Node* rightNode);

// On cherche la hauteur de l'arbre binaire de recherche
int getHeight(Node* root);

// Création d'un arbre binaire de recherche à partir d'une tableau de base de données 
Node* index(FictionalCharacter* fictionalCharacter);


// Recherche d'un noeud dans l'arbre binaire de recherche 
Node* search(string key, Node* activeNode);



// Recherche puis affichage d'un fictionalCharacter dans une base de données à partir du nom dans l'arbre binaire de recherche
void searchFictionalCharacterByName(string name, FictionalCharacter* fictionalCharacter, Node* root);


// Recherche d'un personnage
void SearchingFictionalCharacter(string caract1, string caract2, FictionalCharacter* fictionalCharacter, Node* activeNode);

#endif