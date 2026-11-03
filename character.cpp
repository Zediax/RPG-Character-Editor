#include <iostream>
#include <string>

#include "character.h"
#include "stats.h"
//#include "class.h"

void Character::ChooseClass(Class* _Class) {
	int classChoice = 0;
	std::cout << "Choose your Class: \n";
	std::cout << "1. Warrior \n";
	std::cout << "2. Mage \n";
	std::cout << "3. Assassin \n";
	std::cout << "4. Shaman \n";
	std::cin >> classChoice;

	if (classChoice < 1 || classChoice > 4) {
		std::cout << "Error: Invalid Number\n";
		std::cout << "Please choose again\n";
		classChoice = 0;
	}
	else if (classChoice == 1) {

	}
}

void Character::GetStats(Stats* _Stats) {
	allStats.push_back(_Stat);
}