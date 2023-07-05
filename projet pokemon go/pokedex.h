#ifndef pokedex_h
#define pokedex_h


#include <pokemon.h>

typedef struct {
    int poussieres;
    int bonbons[150];

  } Ressources;

typedef struct {  
    Pokemon* mesPokemons;

    int capacity;

    int nbPokemons;
   }monPokedex;

   monPokedex* maCollection(const int taille);
   void insertpokemon(monPokedex* Poke, Pokemon p);
   void delet(monPokedex* p);
   void displayPokedex(Pokedex* pokedex, EspecePokemon bestiaire[150],
char* typesLabel[18]);



#endif 