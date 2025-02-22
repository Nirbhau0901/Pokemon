#include <iostream>
using namespace std;

int main()
{
    //Variables
    string player_name;
    string chosen_pokemon;


    //Introduction 
    cout << "Professor Oak: Ah, Trainer!" << endl;
    cout << "Professor Oak: Welcome to the world of Pokemon!" << endl;
    cout << "Professor Oak: My name is Oak. People call me the Pokemon Professor." << endl;

    //Asking for player name
    cout << "Professor Oak: That's all about me. Lets talk about you." << endl;
    cout << "Professor Oak: Whats your Name??" << endl;
    cin >> player_name;
    cout << "Professor Oak: Ah " << player_name << "! What a wonderful name." << endl;
    cout << "Professor Oak: You must be eager to start your adventure, but for that you would need a Pokemon." << endl;

    //Offering Pokemon choice
    cout << "Professor Oak: I have three Pokemons that you can choose from." << endl;
    cout << "Professor Oak: Choose wisely." << endl;
    cout << "1. Balbasaur - The Grass type Pokemon, Calm and collected." << endl;
    cout << "2. Charmander - The Fire type Pokemon, A real hothead." << endl;
    cout << "3. Squirtle - The Water type Pokemon, Cool as a cucumber." << endl;

    int choice;
    cout << "Which Pokemon would you like to choose. Enter number: " ;
    
    cin >> choice;

    //Store the chosen pokemon based on the players intput

    switch (choice)
    {
    case 1:
        chosen_pokemon = "Balbasaur";
        cout << "Professor Oak: A fine choice! Balbasuar is always ready to grow on you." << endl;
        break;

    case 2:
        chosen_pokemon = "Charmander";
        cout << "Professor Oak: A fiery choice! Charmander is your's" << endl;
        break;

    case 3:
        chosen_pokemon = "Squirtle";
        cout << "Splendid! Squirtle will keep you cool under pressure." << endl;
        break;

    default:
        cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you..." << endl;
        chosen_pokemon = "Pikachu";
        cout << "Professor Oak: Just kidding! Let's go with Pikachu, the surprise guest." << endl;
    }

    //Concluding the first chapter

    cout << "Professor Oak: " << chosen_pokemon << " and you " << player_name << " will be the best of friends!" << endl;
    cout << "Professor Oak: Your Journey begins now, get ready to explore the bast world of Pokemon." << endl;
    cout << "Professor Oak: Good Luck." << endl;

    return 0;
}
