#include "Game.h"
#include "Player.h"
#include "ProfessorOak.h"
#include "Pokemon.h"
#include <iostream>
#include <limits> // include this header to use numeric limits
#include <string>

using namespace std;


int main()
{
// create Pokemon and player for the game
    Pokemon charmander("Charmander", PokemonType::FIRE, 100); //using parameterized consructor 


    // initialize Professor Oak and player with default placeholder values

    ProfessorOak professor("Professor Oak");

    Player player("Ash", charmander);

    // greeting the player and ofeering Pokemon choice
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    // explaining main quest
    professor.explainMainQuest(player);

    Game game;// creating game object 

    //start the main game loop
    game.gameLoop(player); // calling function from object 

    return 0;
}
