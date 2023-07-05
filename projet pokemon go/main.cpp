#include <iostream>

using namespace std;
int main()
{
    int choix_menu;
cout<< "1. Index des pokemons : bestiaire du jeu";
cout<< "2. Mon Pokedex : mes pokemons attrapés, mon nombre de poussières d’étoiles (stardust) et mes bonbons(candies).Ce sont les informations relatives au joueur" << endl;
cout<< "3. Attraper un pokemon : attraper un pokemon (nous verrons plus tard comment attraper un pokemon dans notre jeu)."<< endl;
cout<< "4. Power-up et évolution : Dépenser ses poussières d’étoiles (stardust) et bonbons (candies) afin de monter en niveau (power-up) ou pour faire évoluer un de ses pokemons (évolution)."<< endl;
cout<<"5. Combat : Réaliser un combat entre deux de ses pokemons afin de tester leur force."<< endl;
cout<<"6. Quitter : Terminer le jeu et fermer l’application. " << endl;
 
 
    cout << "entrer une valeur";

   
    do {
        cin >> choix_menu;
    switch (choix_menu)
    {
    case 1: cout<< "un"<<endl break;
    case 2: cout<< "deux"<<endl  break;
    case 3:cout<< "trois"<<endl break;
    case 4:cout<< "quatre"<<endl break;
    case 5: cout<< "cinq"<<endl break;
    default:cout << " erreur,entrez une nouvelle valeur";
    }
    }
     while (choix_menu!=6);

 
 
}