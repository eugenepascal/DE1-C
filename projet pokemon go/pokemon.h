#include <iostream>
using namespace std;
struct Pokemon
 {
   string nom;
   int xp;
   unsigned short evo;
   int pv;
   int cp;
   };
   
void evolve(Pokemon& p);
void powerup(Pokemon& p);
void display(const Pokemon p);