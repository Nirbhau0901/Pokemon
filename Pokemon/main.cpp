#include "PokemonChoice"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include <limits> // include this header to use numeric limits
#include <iostream>
#include <string>
using namespace std;



//Pokemon class defination
class Pokemon
{
public:
    //Attributes
    string name;
    PokemonType type;
    int health;

    //default constructor
    Pokemon()
    {
        name = "Pikachu";
        type = PokemonType::ELECTRIC;
        health = 10;
        cout << "A new Pokemon has been created using default constructor" << endl;
    }

    // parameterized constructor
    Pokemon(string p_name, PokemonType p_type, int p_health)
    {
        name = p_name;
        type = p_type;
        health = p_health;
        cout << "A new Pokemon named " << name << " has been created using parameterized constructor" << endl;
    }

    // copy constructor
    Pokemon(const Pokemon& other)
    {
        name = other.name;
        type = other.type;
        health = other.health;
        cout << "A new Pokemon has been coppied from " << other.name << endl;
    }

    //destructor
    ~Pokemon()
    {
        cout << name << " has been released." << endl;
    }

    //method to simulate attack function (just for demonstration)
    void attack() { cout << name << " attacks with a powerful move!" << endl; }
};

#include "Player.hpp"

class ProfessirOak
{
public:
    string name;

    // parameterized constructor
    ProfessorOak(string p_name)
    {
        name = p_name;
    }


    //method to greet player
    void greetPlayer(Player& player)
    {
        cout << name << ": Hello there! Welcome to the world of Pokemon!" << endl;
        Utility::waitForEnter();
        cout << name << ": My name is Oak. People call me the Pokemon Professor!" << endl;
        Utility::waitForEnter();
        cout << name << ": But enough about me. Let's talk about you!" << endl;
        Utility::waitForEnter();
    }

    //method to ask player's name and to choose a pokemon
    void offerPokemonChoices(Player& player)
    {
        cout << name << ": First tell me your name?" << endl;
        getline(cin, player.name);
        cout << name << ": Ah, " << player.name << " what a wonderful name!" << endl;
        Utility::waitForEnter();
        cout << name << ": You must be eager to start your adventure. But first you'll need a pokemon of your own!" << endl;
        Utility::waitForEnter();

        //presenting pokemon choices
        cout << name << ": I have three Pokemon here with me. They're all quite fiesty!" << endl;
        Utility::waitForEnter();
        cout << name << ": Choose Wisely... \n"; std::cout << "1. Charmander - The fire type. A real hothead!" << endl;
        cout << "2. Bulbasaur - The grass type. Calm and collected!" << endl;
        cout << "3. Squirtle - The water type. Cool as a cucumber!" << endl;

        int choice;
        cout << name << ": So which one will it be. Enter the number of your choice." << endl;
        cin >> choice;
        player.chosenPokemon(choice);
        Utility::waitForEnter();
    }

    // method to explain the main quest
    void explainMainQuest(Player& player)
    {
        Utility::clearConsole(); // clear console command

        cout << "Professor Oak: Oak-ay " << player.name << "!, I am about to explaain you about your upcoming grand adventure." << endl;
        Utility::waitForEnter();
        cout << "Professor Oak: You see, becoming a Pokemon Master is no easy feat, it takes courage, wisdom and a bit of luck!" << endl;
        Utiliy::waitForEnter();
        cout << "Professor Oak: Your mission, should you choose to accept it-and trust me, you really don't have a choice-is to collect all the Pokemon Badges and conqure the Pokemon League" << endl;
        Utility::waitForEnter();
        cout << "\n" << player.name << ": That sounds like every other Pokemon game out there..." << endl;
        Utility::waitForEnter();
        cout << "Professor Oak: SHHHHHHHH! Don't break the fourth wall, " << player.name << "! This is serious buisness!" << endl;
        Utility::waitForEnter();
        cout << "Professor Oak: To achieve this, you'll need to battle wild Pokemon, challenge gym leaders, and of course, keep your Pokemon healthy at the PokeCenter." << endl;
        utility::waitForEnter();
        cout << "Professor Oak: Along the way, you'll capture new Pokeon to strengthen your team. Just remember--there is a limit to how many Pokemon you can carry, so choose wisely!" << endl;
        Utility::waitForEnter();
        cout << "\n" << player.name << ": Sounds like a walk in the park... right?" << endl;
        Utility::waitForEnter();
        cout << "Professor Oak: Hah! Thats what they all say! But beware, " << player.name << " the path to victroy is filled with challenges, and if you loose a battle... lets just say you'll be starting from square one." << endl;
        utility::waitForEnter();
        cout << "Professor Oak: So, what do you say? Are you ready to become the next Pokemon Champion?" << endl;
        Utility::waitForEnter();
        cout << "\n" << player.name << ": Ready as i'll ever be, Professor!" << endl;
        Utility::waitForEnter();
        cout << "Professor Oak: That's the spirit! Now your Journey begins..." << endl;
        Utility::waitForEnter();
        cout << "Professor Oak: But first... Lets just pretend I didn't forget to set up the actual game loop... Ahem, Onwards" << endl;
        Utility::waitForEnter();
    }
};


void gameLoop(Player&player)
{
    int choice;
    bool keepPlaying = true;

    while (keepPlaying)
    {
        Utility::clearConsole(); // clear console before showing options

        // Display options to the player

        cout << "What would you like to do next, " << player.name << "?" << endl;
        cout << "1. Battle wild Pokemon." << endl;
        cout << "2. Visit PokeCenter." << endl;
        cout << "3. Challenge Gyms." << endl;
        cout << "4. Enter Pokemon League." << endl;
        cout << "5. Quit." << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;

        // clear the newline character left in the buffer after cin>>choice
        Utility::clearInputBuffer();

        //process the player's choice and display the corresponding message

        switch (choice)
        {
        case 1:
            cout << "You look around... but all the wild Pokemon are on a Vacation. Maybe try again later?" << endl;
            break;

        case 2:
            cout << "You head to the PokeCenter, but Nurse Joy is out on a Coffee break. Guess your Pokemon will have to tough it out now" << endl;
            break;

        case 3:
            cout << "You march upto the Gym, but its closed for renovations, Seems like even Gym Leaders need a break" << endl;
            break;

        case 4:
            cout << "You boldly step towards the Pokemon League... but the gatekeepr laughs and says, 'Maybe next time, champ!" << endl;
            break;

        case 5:
            cout << "You try to quit, but Professor Oak's voice echoes, There's no quitting in Pokemon training!" << endl;
            cout << "Are you sure you want to quit?(y/n): ";

            char quitChoice;
            cin >> quitChoice;
            if (quitChoice == "y" || quitChoice == "Y")
            {
                KeepPlaying = false;
            }
            break;

        default:
            cout << "That's not a valid choice. Try Again!" << endl;
            break;
        }

        // wait for entry key before the screen is cleared and the menu is shown
        // again

        Utility::waitForEnter();

        cout << "Goodbye " << player.name << "! Thanks for playing!" << endl;
    }

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

    //start the main game loop
    gameLoop(player);

    return 0;
}
