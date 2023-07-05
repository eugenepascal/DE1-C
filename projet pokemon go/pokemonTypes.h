typedef enum
{
   Normal, Fighting, Flying, Poison, Ground, Rock, Bug, Ghost, Steel,
   Fire, Grass, Water, Electric, Ice, Dragon, Fairy
    }PokemonType;
    
typedef struct EspecePokemon {
   char* nom;
    PokemonType type;
    int nbBonbonsPourEvoluer;
    char* evolvesTo;
    }EspecePokemon;

    