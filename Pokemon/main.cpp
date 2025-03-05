#include <iostream>
#include <string>
using namespace std;

// function to clear the console
void clearConsole()
{
    //platform specific clear console command
    #ifdef_WIN32
        system("cls");
#else
(void)system("clear");
#endif
}

// method to wait for the user to press enter
void waitForEnter()
{
    cin.get();  //wait for enter key
}

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
        waitForEnter(); // wait for user to press enter
    }
};
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
        waitForEnter();
        cout << name << ": My name is Oak. People call me the Pokemon Professor!" << endl;
        waitForEnter();
        cout << name << ": But enough about me. Let's talk about you!" << endl;
        waitForEnter();
    }

    //method to ask player's name and to choose a pokemon
    void offerPokemonChoices(Player& player)
    {
        cout << name << ": First tell me your name?" << endl;
        getline(cin, player.name);
        cout << name << ": Ah, " << player.name << " what a wonderful name!" << endl;
        waitForEnter();
        cout << name << ": You must be eager to start your adventure. But first you'll need a pokemon of your own!" << endl;
        waitForEnter();

        //presenting pokemon choices
        cout << name << ": I have three Pokemon here with me. They're all quite fiesty!" << endl;
        waitForEnter();
        cout << name << ": Choose Wisely... \n"; std::cout << "1. Charmander - The fire type. A real hothead!" << endl;
        cout << "2. Bulbasaur - The grass type. Calm and collected!" << endl;
        cout << "3. Squirtle - The water type. Cool as a cucumber!" << endl;

        int choice;
        cout << name << ": So which one will it be. Enter the number of your choice." << endl;
        cin >> choice;
        player.chosenPokemon(choice);
        waitForEnter();
    }

    // method to explain the main quest
    void explainMainQuest(Player& player)
    {
        clearConsole(); // clear console command

        cout << "Professor Oak: Oak-ay " << player.name << "!, I am about to explaain you about your upcoming grand adventure." << endl;
        waitForEnter();
        cout << "Professor Oak: You see, becoming a Pokemon Master is no easy feat, it takes courage, wisdom and a bit of luck!" << endl;
        waitForEnter();
        cout << "Professor Oak: Your mission, should you choose to accept it-and trust me, you really don't have a choice-is to collect all the Pokemon Badges and conqure the Pokemon League" << endl;
        waitForEnter();
        cout << "\n" << player.name << ": That sounds like every other Pokemon game out there..." << endl;
        waitForEnter();
        cout << "Professor Oak: SHHHHHHHH! Don't break the fourth wall, " << player.name << "! This is serious buisness!" << endl;
        waitForEnter();
        cout << "Professor Oak: To achieve this, you'll need to battle wild Pokemon, challenge gym leaders, and of course, keep your Pokemon healthy at the PokeCenter." << endl;
        waitForEnter();
        cout << "Professor Oak: Along the way, you'll capture new Pokeon to strengthen your team. Just remember--there is a limit to how many Pokemon you can carry, so choose wisely!" << endl;
        waitForEnter();
        cout << "\n" << player.name << ": Sounds like a walk in the park... right?" << endl;
        waitForEnter();
        cout << "Professor Oak: Hah! Thats what they all say! But beware, "<<player.name<<" the path to victroy is filled with challenges, and if you loose a battle... lets just say you'll be starting from square one." << endl;
        waitForEnter();
        cout << "Professor Oak: So, what do you say? Are you ready to become the next Pokemon Champion?" << endl;
        waitForEnter();
        cout << "\n" << player.name << ": Ready as i'll ever be, Professor!" << endl;
        waitForEnter();
        cout << "Professor Oak: That's the spirit! Now your Journey begins..." << endl;
        waitForEnter();
        cout << "Professor Oak: But first... Lets just pretend I didn't forget to set up the actual game loop... Ahem, Onwards" << endl;
        waitForEnter();
    }
};

void gameLoop(Player&player)
{
    int choice;
    bool keepPlaying = true;

    while (keepPlaying)
    {
        clearConsole(); // clear console before showing options

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
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

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

        waitForEnter();

        cout << "Goodbye " << player.name << "! Thanks for playing!" << endl;
    }

int main()
{
// create Pokemon and player for the game
    Pokemon charmander("Charmander", PokemonType::FIRE, 100); //using parameterized consructor 


    // initialize Professor Oak and player with default placeholder values

    ProfessorOak professor("Professor Oak");

    Pokemon placeholderPokemon("Placeholder", FIRE, 0);

    Player player("Ash", charmander);

    // greeting the player and ofeering Pokemon choice
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    // explaining main quest
    professor.explainMainQuest(player);

    // concluding the first chapter
    cout << "Professor Oak: " << player.chosenPokemon.name << " and you " << player.name << ", are going to be best of friends!\\n"; std::cout << "Professor Oak: Upir journey begins now! Get ready too explore the vast world of Pokemon!\\n";

    //start the main game loop
    gameLoop(player);

    return 0;
}
