// Game.cpp
#include "Player.h"
#include "Game.h"
#include "Utility.h"
//#include "WildEncounterManager.h"

#include <iostream>

using namespace std;

Game::Game()
{

}

void Game::gameLoop(Player& player)
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
            if (quitChoice == 'y' || quitChoice == 'Y')
            {
                keepPlaying = false;
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
}