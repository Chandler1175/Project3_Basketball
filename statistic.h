#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

class astat {
public:
	int calc_perc(int attempts, int made);
	void set_attempt(int attempts);
	void set_made(int made);
	int get_attempts();
	int get_made();


private:
	int shot_attempt = 0;
	int shot_made = 0;

};