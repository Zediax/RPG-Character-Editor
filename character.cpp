#include <iostream>
#include <string>

#include "character.h"
#include "stats.h"
//#include "class.h"

void Character::ChooseClass(Class* _Class) {
	int classChoice = 0;
	int subClassChoice = 0;
	std::cout << "Choose your Class: \n";
	std::cout << "1. Warrior \n";
	std::cout << "2. Mage \n";
	std::cout << "3. Assassin \n";
	std::cout << "4. Druid \n";
	std::cin >> classChoice;

	if (classChoice == 1) {
		std::cout << "You chose the Warrior Class !\n";
		std::cout << "Please select your Class Specification: \n";
		std::cout << "1. Swordsman\n";
		std::cout << "2. Archer\n";
		std::cin >> subClassChoice;
	}
	else if (classChoice == 2) {
		std::cout << "Please select your Class Specification: \n";
		std::cout << "1. Magelame\n";
		std::cout << "2. Wizard\n";
		std::cin >> subClassChoice;
	}
	else if (classChoice == 3) {
		std::cout << "Please select your Class Specification: \n";
		std::cout << "1. Shinobi\n";
		std::cout << "2. Samurai\n";
		std::cin >> subClassChoice;
	}
	else if (classChoice == 4) {
		std::cout << "Please select your Class Specification: \n";
		std::cout << "1. Shaman\n";
		std::cout << "2. Necromancy\n";
		std::cin >> subClassChoice;
	}
	else if (classChoice < 1 || classChoice > 4 || subClassChoice < 1 || subClassChoice > 2) {
		std::cout << "Error: Invalid Number\n";
		std::cout << "Please choose again\n";
		classChoice = 0;
	}
}

void Character::GetStats(Stats* _Stats) {
	allStats.push_back(_Stat);
}