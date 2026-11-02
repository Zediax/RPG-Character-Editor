#include "stats.h"
#include <iostream>

Stats::Stats() : Stats(0, "") {
}

Stats::Stats(int _Stat, std::string _StatName){
	Stat = _Stat;
	StatName = _StatName;
	StatName = _StatName;
	StatName = _StatName;
	StatName = _StatName;
	StatName = _StatName;
}

Character::Character(std::string Name) {
	std::string CharacterName = Name;
}

void Character::SetStat(int Stat, std::string StatName) {
	StatSheet.push_back(Stats(Stat, StatName));
}

void Character::PrintStatSheet() {
	std::cout << "Character Name: " << CharacterName << "\n";
	for (int i = 0; i < StatSheet.size(); i++) {
		std::cout << "Stats: \n" << StatSheet[i].StatName << ": " << StatSheet[i].Stat << "\n";
	}
	std::cout << std::endl;
}