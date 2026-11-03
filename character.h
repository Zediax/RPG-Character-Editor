#pragma once
#include <string>
#include <vector>

class Stats;
class Stuff;
class Race;

struct Class {
	Class();
	Class(std::string _ClassName);

	std::string ClassName;
};


class Character {
public:
	void ChooseClass(Class* _Class);
	void ChooseRace(Race* _Race);
	void GetName();
	void GetStats(Stats* _Stats);
};