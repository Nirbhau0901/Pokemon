//Pokemon.cpp

#include "Pokemon.h"
#include <iostream>
#include "PokemonType.h"

using namespace std;

//default constructor
Pokemon::Pokemon() : name("Unknown"), type(PokemonType::NORMAL), health(50) {}

//parameterized constructor
Pokemon::Pokemon(std::string p_name,PokemonType p_type, int p_health) : name(p_name), type(p_type), health(p_health) {}

//copy constructor
Pokemon::Pokemon(const Pokemon&other) : name(other.name), type(other.type), health(other.health) {}

//destructor
Pokemon::~Pokemon() 
{
	cout << name << " has been released." << endl; //destructor logic goes here
}

void Pokemon::attack()
{
	cout << name << " attacks with a powerful move!" << endl;
}