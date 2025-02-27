#include <iostream>
#include <string>
using namespace std;

    // defining an enum class for Pokemon choice
    enum class PokemonChoice
    {
        CHARMANDER,
        BULBASAUR,
        SQUIRTLE,
        PIKACHU // default choice
    };

    // defingin an enum class for Pokemon type
    enum class PokemonType
    {
        FIRE,
        GRASS,
        WATER,
        ELECTRIC
    };

    //Pokemon class defination
    class Pokemon
    {
    public:
        //Attributes
        string name;
        PokemonType type;
        int health;

        //created two constructors
        Pokemon()
        {

        }

        Pokemon(string p_name, PokemonType p_type, int p_health)
        {
            name = p_name;
            type = p_type;
            health = p_health;
        }

        //method to simulate attack function (just for demonstration)
        void attack() { cout << name << " attacks with a powerful move!" << endl; }
    };

    // player class defination
    class Player
    {
    public:
        //Attributes 
        string name;
        Pokemon chosenPokemon;

        //method to choose the pokemon
        void chosenPokemon(int choice)
        {
            switch ((PokemonChoice)choice)
            {
            case PokemonChoice::CHARMANDER:
                chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
                break;

            case PokemonChoice::BULBASAUR:
                chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
                break;

            case PokemonChoice::SQUIRTLE:
                chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
                break;

            default:
                chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
                break;
            }

            cout << "Player " << name << " chose " << chosenPokemon.name << " !" << endl;
        }
    };

    //professor oak class defination
    class ProfessorOak
    {
        // Atttributes
    public:
        string name;

        //method to greet player
        void greetPlayer(Player& player)
        {
            cout << name << ": Hello there! Welcome to the world of Pokemon!" << endl;
            cout << name << ": My name is Oak. People call me the Pokemon Professor!" << endl;
            cout << name << ": But enough about me. Let's talk about you!" << endl;
        }

        //method to ask player's name and to choose a pokemon
        void offerPokemonChoices(Player& player)
        {
            cout << name << ": First tell me your name?" << endl;
            getline(cin, player.name);
            cout << name << ": Ah, " << player.name << " what a wonderful name!" << endl;
            cout << name << ": You must be eager to start your adventure. But first you'll need a pokemon of your own!" << endl;

            //presenting pokemon choices
            cout << name << ": I have three Pokemon here with me. They're all quite fiesty!" << endl;
            cout << name << ": Choose Wisely... \n"; std::cout << "1. Charmander - The fire type. A real hothead!" << endl;
            cout << "2. Bulbasaur - The grass type. Calm and collected!" << endl;
            cout << "3. Squirtle - The water type. Cool as a cucumber!" << endl;

            int choice;
            cout << name << ": So which one will it be. Enter the number of your choice." << endl;
            cin >> choice;
            player.chosenPokemon(choice);
        }
    };

    int main()
    {
        // creating objects of ProfessorOak, Player, and Pokemon class
        ProfessorOak professor;
        Pokemon placeholderPokemon;
        Player player;

        // assigning values to placeholder pokemon attributes
        placeholderPokemon.name = "Pikachu";
        placeholderPokemon.type = PokemonType::ELECTRIC;
        placeholderPokemon.health = 40;

        // assigning values to Player attributes
        player.name = "Trainer";

        // assigning values to Professor oak attributes
        professor.name = "Professor Oak";

        // greeting the player and ofeering Pokemon choice
        professor.greetPlayer(player);
        professor.offerPokemonChoices(player);

        // concluding the first chapter
        cout << "Professor Oak: " << player.chosenPokemon.name << " and " << player.name << ", are going to be best of friends!" << endl;
        cout << "Professor Oak: Upir journey begins now! Get ready too explore the vast world of Pokemon!" << endl;

        return 0;
    }