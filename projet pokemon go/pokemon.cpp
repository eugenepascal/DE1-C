#include <iostream>
#include "pokemon.h"
#include "pokemonTypes.h"

using namespace std;

void evolve(Pokemon& p){
    ++p.Evo;
}
void powerup(Pokemon& p){
    p.CP=((p.CP*25)/100)+p.CP;
   } 

   const char* typeslabel[18] = { "Normal", "Fighting", "Flying", "Poison", "Ground", "Rock", "Bug", "Ghost", "Steel",
                                   "Fire", "Grass", "Water", "Electric", "Ice", "Dragon", "Fairy" };
 

void display(const Pokemon p, EspecePokemon* bestiaire,const char* tab[]){
    int a;
    int i;
    for (int i = 0; i <= 149; i++)
     {
          if (strcmp(p.Nom, bestiaire[i].Nom) == 0)
            {
                a = bestiaire[i].type;
               } 
     };
    cout<< p.Nom << endl;
    cout<< p.XP << endl;
    cout<< p.Evo<< endl;
    cout<< p.PV << endl;
    cout<< p.CP << endl;
} 
