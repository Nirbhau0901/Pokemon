// Utility.cpp

#include "Utility.h"
#include <iostream>
#include <limits>

using namespace std;

void Utility::clearConsole()
{
system("clear");
}

void Utility::waitForEnter()
{
	cin.get();
}

void Utility::clearInputBuffer()
{
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}