
#include <iostream>
#include "BST.h"
#include "fictionalCharacter.h"
#include <string>

using namespace std;

bool insert(string key, int index, Node* root)
{
    if (recursive_insertion(root, index, key) != nullptr) {
        return true;
    }
    return false;
}


//fonction de vérification de l'ajout du noeud


// fonction récursive d'insertion de la clé dans l'arbre binaire
Node* recursive_insertion(Node* activeNode, int index, string key)

{
    if (activeNode == nullptr) {
        activeNode = new Node();

        activeNode->index = index;
        activeNode->key = key;
        activeNode->right = nullptr;
        activeNode->left = nullptr;
        

        cout << "Key : " << activeNode->key <<
            ", index : " << activeNode->index << endl;

        return activeNode;
    }

   // Noeud gauche pour les clés supérieures au noeud racine.
    if (key < activeNode->key) {
        activeNode->left = recursive_insertion(activeNode ->left, index, key);
    }

    // Noeud droit pour les clés supérieures au noeud racine.
    else if (key > activeNode->key) {
        activeNode->right = recursive_insertion(activeNode ->right, index, key);
     }
        return activeNode;
    } 

  bool BSTornot(Node* root, Node* leftNode, Node* rightNode)
{
    if (root == nullptr)
        return true;

// Vérification de la condition (Clé du noeud droit >= clé de la racine)
    if (rightNode != nullptr && root->key >= rightNode->key)
        return false;



 // Vérification de la condition (Clé du noeud gauche < clé de la racine)
    if (leftNode != nullptr && root->key <= leftNode->key)
        return false;

    

    // On procède à la vérification récursive de chaque noeud 
    return BSTornot(root->left, leftNode, root) && BSTornot(root->right, root, rightNode);
}

// fonction getHeight qui calcule la hauteur d'un arbre binaire de recherche
int getHeight(Node* root)
{
    if (root == nullptr)
        return 0;

    int leftNode = getHeight(root->left);
    int rightNode = getHeight(root->right);

    return max(leftNode, rightNode) + 1;
}



//fonction index considérant que la tableau a été créé et met en place l'index associé
Node* index(FictionalCharacter* fictionalCharacter)
{
    Node* BST = new Node();

    for(int i = 0; i < fictionalCharacter[0].Arraylength; i++) {
        insert(fictionalCharacter[i].name, fictionalCharacter[i].index, BST);
    }
    cout << endl;

    return BST;
}

void searchFictionalCharacterByName(string name, FictionalCharacter* fictionalCharacter, Node* root)
{
    // Obtenir l'index d'un fictionalcharacter dans l'arbre binaire de recherche
    Node* activeNode = search(name, root);


    // Affichage des résultats de la recherche
    if (activeNode != nullptr) {
        int index = activeNode->index;
        cout << "The name belong to the database : " << endl;
        cout << "Name : " << fictionalCharacter[index].name << endl;
        cout << "Surname : " << fictionalCharacter[index].surname << endl;
        cout << "Book : " << fictionalCharacter[index].book << endl;
        cout << "Age : " << fictionalCharacter[index].age << endl;
        cout << endl;
    }
    else {
        cout << "'" << name << "'This name doesn't belong to the database" << endl << endl;
    }
}


void SearchingFictionalCharacter(string name_1, string name_2, FictionalCharacter* fictionalCharacter, Node* activeNode)
{
    if (name_1 > name_2) {
        string temp = name_1;
        name_1 = name_2;
        name_2 = temp;
    }

    if (activeNode == nullptr) {
        return;
    }

    // Recherche au niveau des noeuds de la partie droite
    if (name_1 < activeNode->key) {
        SearchingFictionalCharacter(name_1, name_2, fictionalCharacter, activeNode->left);
    }
    
    // Recherche entre 2 noms :name_1 et name_2 

    if (activeNode->key >= name_1 && activeNode->key <= name_2) {
        cout << "This name belong to the database : " << endl;
        cout << "Name : " << fictionalCharacter[activeNode->index].name << endl;
        cout << "Surname : " << fictionalCharacter[activeNode->index].surname << endl;
        cout << "Book : " << fictionalCharacter[activeNode->index].book << endl;
        cout << "Age : " << fictionalCharacter[activeNode->index].age << endl;
        cout << endl;
    }

    // Recherche au niveau des noeuds de la partie droite
    
    if (name_2 > activeNode->key) {
        SearchingFictionalCharacter(name_1, name_2, fictionalCharacter, activeNode->right);
    }
}

Node* search(string key, Node* activeNode)
{
    if (activeNode == nullptr || activeNode->key == key) {
        return activeNode;
    }

    if (activeNode->key < key) {
        return search(key, activeNode->right);
    }

    return search(key, activeNode->left);
}

