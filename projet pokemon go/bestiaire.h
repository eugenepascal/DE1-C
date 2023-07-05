
#ifndef bestiaire.h
#define bestiaire.h

#include "C:\Users\Eugene\Desktop\TSE\Algo_prog_c++\Jeu_pokemon_TD\PokemonTypes.h"
#include <string>

void initBestiaire(EspecePokemon bestiaire[]);
void display_bestiaire(EspecePokemon bestiaire[]);
void tri_bestiaire(EspecePokemon bestiaire[]);
void tri_bestiaire(EspecePokemon bestiaire[]) {   
 EspecePokemon bestiaireTrie[150];
  for (int i = 0; i < 150; i++) {
      bestiaireTrie[i]= bestiaire[i];
   }

#endif // bestiaire.h

