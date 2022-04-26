#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "player.h"
#include "statistic.h"

using namespace std;

class team {
public:
	void print();
	void addGame();
	void sortByJersey();
	void sortByName();
	void removePlayer();
	void displayPlayer();
	void read();
	void write();
private:
	player p[10];
	int players = 0;
	int games_played = 0;

};