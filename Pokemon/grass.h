#pragma once
// Grass.hpp

#include <string>
#include <vector>

using namespace std;

struct Grass
{
	string environmentType; // example forest, cave, rivebank
	vector <Pokemon> wildPokemonList; // list of wild pokemon living in the grass
	int encounterRate; // likelihood of encountering a wild pokemon out of 100

	Grass forestGrass = {"Forest", {{"Pidgey",PokemonType::NORMAL,40},{"Caterpie",PokemonType::BUG,35},{"Zubat",PokeonType:POISON,30}}, 80}
};