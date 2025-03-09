// ProfessorOak.cpp
#include "ProfessorOak.h"
#include "Player.h"
#include "Utility.h"
#include <iostream>

using namespace std;

// parameterized constructor
ProfessorOak::ProfessorOak(string p_name)
{
    name = p_name;
}


//method to greet player
void ProfessorOak::greetPlayer(Player& player)
{
    cout << name << ": Hello there! Welcome to the world of Pokemon!" << endl;
    Utility::waitForEnter();
    cout << name << ": My name is Oak. People call me the Pokemon Professor!" << endl;
    Utility::waitForEnter();
    cout << name << ": But enough about me. Let's talk about you!" << endl;
    Utility::waitForEnter();
}

//method to ask player's name and to choose a pokemon
void ProfessorOak::offerPokemonChoices(Player& player)
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
    player.choosePokemon(choice);
    Utility::waitForEnter();
}

// method to explain the main quest
void ProfessorOak::explainMainQuest(Player& player)
{
    Utility::clearConsole(); // clear console command

    cout << "Professor Oak: Oak-ay " << player.name << "!, I am about to explaain you about your upcoming grand adventure." << endl;
    Utility::waitForEnter();
    cout << "Professor Oak: You see, becoming a Pokemon Master is no easy feat, it takes courage, wisdom and a bit of luck!" << endl;
    Utility::waitForEnter();
    cout << "Professor Oak: Your mission, should you choose to accept it-and trust me, you really don't have a choice-is to collect all the Pokemon Badges and conqure the Pokemon League" << endl;
    Utility::waitForEnter();
    cout << "\n" << player.name << ": That sounds like every other Pokemon game out there..." << endl;
    Utility::waitForEnter();
    cout << "Professor Oak: SHHHHHHHH! Don't break the fourth wall, " << player.name << "! This is serious buisness!" << endl;
    Utility::waitForEnter();
    cout << "Professor Oak: To achieve this, you'll need to battle wild Pokemon, challenge gym leaders, and of course, keep your Pokemon healthy at the PokeCenter." << endl;
    Utility::waitForEnter();
    cout << "Professor Oak: Along the way, you'll capture new Pokeon to strengthen your team. Just remember--there is a limit to how many Pokemon you can carry, so choose wisely!" << endl;
    Utility::waitForEnter();
    cout << "\n" << player.name << ": Sounds like a walk in the park... right?" << endl;
    Utility::waitForEnter();
    cout << "Professor Oak: Hah! Thats what they all say! But beware, " << player.name << " the path to victroy is filled with challenges, and if you loose a battle... lets just say you'll be starting from square one." << endl;
    Utility::waitForEnter();
    cout << "Professor Oak: So, what do you say? Are you ready to become the next Pokemon Champion?" << endl;
    Utility::waitForEnter();
    cout << "\n" << player.name << ": Ready as i'll ever be, Professor!" << endl;
    Utility::waitForEnter();
    cout << "Professor Oak: That's the spirit! Now your Journey begins..." << endl;
    Utility::waitForEnter();
    cout << "Professor Oak: But first... Lets just pretend I didn't forget to set up the actual game loop... Ahem, Onwards" << endl;
    Utility::waitForEnter();
}