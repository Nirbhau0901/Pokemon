#include <iostream>
using namespace std;

int main()
{
    cout << "Ah, Trainer!" << endl;
    cout << "I am Professor Oak." << endl;
    cout << "Welcome to the world of Pokemon!" << endl;
    cout << "Today is a momentous day, you'll be choosing your very first Pokemon." << endl;
    cout << "Every great trainer remembers this moment for the rest of their lives." << endl;
    cout << "So, Choose wisely, young one!" << endl;
    cout << "You can choose one of the Following Pokemon:" << endl;
    cout << "1. Balbasaur\n2. Chramander\n3. Squirtle" << endl;
    cout << "Which Pokemon would you like to choose. Enter number: " ;
    
    int choice;
    cin >> choice;
    
    if (choice == 1)
    {
        cout << "You chose Balbasaur! A Wise Choice." << endl;
    }
    else if (choice == 2)
    {
        cout << "You chose Charmander! A Fiery Choice." << endl;
    }
    else if (choice == 3)
    {
        cout << "You Chose Squirtle! A Cool Choice." << endl;
    }
    else
    {
        cout << "Invalid Choice, Please restart the Game." << endl;
    }

    cout << choice << endl;
    cout << "But beware Trainer" << endl;
    cout << "Your journey is just about to unfload" << endl;
    cout << "Now let's see if you've got what it takes to keep going!" << endl;
    cout << "Good Luck, and remember choose wisely" << endl;

    return 0;
}
