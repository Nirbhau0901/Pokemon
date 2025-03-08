#pragma once
#include "PokemonType.h"
#include <string>

using namespace std;



class Pokemon
{
public:
	string name;
	PokemonType type;
	int health;

	//default constructor
	Pokemon();

	//Parameterized constructor
	Pokemon(string p_name, PokemonType p_type, int p_health);

	//Copy constructor
	Pokemon(const Pokemon& other);

	//Destructor
	~Pokemon();

	void attack(); //method for pokemon attack
};
