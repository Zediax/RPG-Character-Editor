#pragma once
#include <string>
#include <vector>

class Stats;
class Stuff;
class Race;

class Character {
public:
	void ChooseClass(Class* _Class);
	void ChooseRace(Race* _Race);
	void GetName();
	void GetStats(Stats* _Stats);
};