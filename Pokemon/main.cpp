#include <iostream>
#include <string>
using namespace std;

// defining an enum class for Pokemon choice
enum class PokemonChoice
{
    CHARMANDER = 1,
    BULBASAUR,
    SQUIRTLE,
    PIKACHU // default choice
};

// defining an enum class for Pokemon type
enum class PokemonType
{
    FIRE,
    GRASS,
    WATER,
    ELECTRIC,
    NORMAL //Added for default constructor
};

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

// player class defination
class Player
{
public:
    //Attributes 
    string name;
    Pokemon chosenPokemon;

    //default constructor
    Player()
    {
        name = "Trainer";
        chosenPokemon = Pokemon;
        cout << "A new player " << name << " has been created" << endl;
    }

    // parameterized constructor
    Player(std::string p_name, Pokemon p_chosenPokemon)
    {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
        cout << "Player " << name << " has been created" << endl;
    }

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

// professor oak class defination
class ProfessorOak
{
    // Atttributes
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
    // Task 1: test default and parameterized constructor  
    Pokemon defaultPokemon; //using default constructor
    Pokemon charmander("Charmander", PokemonType::FIRE, 100); //using parameterized consructor 

    cout << "Pokemon Details" << endl;
    cout << "Name: " << defaultPokemon.name << "\nType: " << (int)defaultPokemon.type << "\nHealth: " << defaultPokemon.health << "\n";
    cout << "Name: " << charmander.name << "\nType: " << (int)charmander.type << "\nHealth: " << charmander.health << "\n";

    // Task 2: Test the copy constructor
    Pokemon bulbasaur("Bulbasaur", PokemonType::GRASS, 100); // create a pokemon
    Pokemon bulbasaurCopy = bulbasaur; //copied pokemon
    cout << "Original Pokemon Health: " << bulbasaur.health << endl;
    cout << "Coppied Pokemon Health: " << bulbasaurCopy.health << endl;

    // modify the coppied pokemon
    bulbasaurCopy.health = 80;
    cout << "After modification." << endl;
    cout << "Original Pokemon Health: " << bulbasaur.health << endl;
    cout << "Coppied Pokemon Health: " << bulbasaurCopy.health << endl;

    // Task 3: Test the destructor
    {
        Pokemon squirtle("Squirtle", PokemonType::WATER, 100); //pokemon will be destroyed at the end of this scope
    }//destructor will be called here

    // initialize Professor Oak and player with default placeholder values

    ProfessorOak professor("Professor Oak");

    Pokemon placeholderPokemon("Placeholder", FIRE, 0);

    Player player(" ", placeholderPokemon);

    // greeting the player and ofeering Pokemon choice
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    // concluding the first chapter
    cout << "Professor Oak: " << player.chosenPokemon.name << " and you " << player.name << ", are going to be best of friends!\\n"; std::cout << "Professor Oak: Upir journey begins now! Get ready too explore the vast world of Pokemon!\\n";

    return 0;
}
