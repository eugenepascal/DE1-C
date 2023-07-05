#ifndef pokedex_h

#include <iostream>
#include <pokedex.h>

using namespace std;

   Pokedex* initPokedex(const int size) {
     Pokedex* poke;
     poke = new pokemon [size];

     return poke;
     } 
 monPokedex* maCollection(const int taille){
   monPokedex* poke;
   poke->capacity=taille;
   poke->mesPokemon[taille];
   poke->nbPokemon=0;

   return poke;
}
   void insertPokemon(monPokedex* poke, Pokemon p) {
     cout <<poke->nbPokemon;

     poke->nbPokemon=poke->nbPokemon+1;
}

void delet(monPokedex* p){
  delete p ->mesPokemon;
 } 

void displayPokedex(Pokedex* pokedex, EspecePokemon bestiaire[150],
char* typesLabel[18]) {
cout << endl << "Contenu du pokedex (Actuellement ";
cout << pokedex->nbPokemons << " pokemons capturés)" << endl; for (int i = 0; i < pokedex->nbPokemons; i++) {
display(pokedex->mesPokemons[i], bestiaire, typesLabel);
}

EspecePokemon bestiaire[150];
initBestiaire(bestiaire);
char* typesLabel[18] = {"Normal", "Fighting", "Flying", "Poison", "Ground", "Rock", "Bug", "Ghost", "Steel", "Fire", "Grass", "Water", "Electric", "Psychic", "Ice", "Dragon", "Dark", "Fairy"};
Pokedex* pokedex = initPokedex(3); Pokemon a;
a.nom = "Seadra";
a.xp = 1;
a.cp = 4;
 a.evo = 1; 
 a.pv = 23;
Pokemon b;
b.nom = "Arbok";
b.xp = 0;
b.cp = 123; 
b.evolution = 2; 
b.pv = 134;
Pokemon c;
c.nom = "Zubat"; 25 c.xp = 40;
c.cp = 300; c.evolution = 1; c.pv = 223;
Pokemon d;
d.nom = "Paras";
d.xp = 0;
d.cp = 23; d.evolution = 1;
d.pv = 90;
Pokemon e;
e.nom = "Arkanine"; 
e.xp = 0; 
e.cp = 23; 
e.evolution = 2;
e.pv = 290;

insertPokemon(&pokedex, a);
cout << "******* Pokedex after inserting pokemon a *********" << endl;
       displayPokedex(pokedex, bestiaire, typesLabel);
       cout << "***************************************************" << endl;
       cout << endl << endl;
insertPokemon(&pokedex, b);
cout << "******* Pokedex after inserting pokemon b *********" << endl; displayPokedex(pokedex, bestiaire, typesLabel);
cout << "***************************************************" << endl; cout << endl << endl;
       insertPokemon(&pokedex, c);
       cout << "******* Pokedex after inserting pokemon c *********" << endl;
       displayPokedex(pokedex, bestiaire, typesLabel);
       cout << "***************************************************" << endl;
cout << endl << endl;
       insertPokemon(&pokedex, d);
       cout << "******* Pokedex after inserting pokemon d *********" << endl;
       displayPokedex(pokedex, bestiaire, typesLabel);
 cout << "***************************************************" << endl; cout << endl << endl;
       insertPokemon(&pokedex, e);
cout << "******* Pokedex after inserting pokemon e *********" << endl; displayPokedex(pokedex, bestiaire, typesLabel);
       cout << "***************************************************" << endl;
       cout << endl << endl;


  