#pragma once
#include <vector>
#include <string>

struct Stats {
	Stats();
	Stats(int _Stat, std::string _StatName);

	int Stat;
	std::string StatName;
};

class CharacterStats {
public:
	CharacterStats();
	CharacterStats(std::string Name);

	void SetStat(int Stat, std::string StatName);
	void PrintStatSheet();
private:
	std::vector<Stats> StatSheet;
	std::string CharacterName;
};-