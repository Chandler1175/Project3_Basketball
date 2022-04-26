#include <iostream>
#include <iomanip>
#include "statistic.h"

using namespace std;

int astat::calc_perc(int attempts, int made) {
	int perc;
	attempts = shot_attempt;
	made = shot_made;
	// if the shots are made it calculates the percentage
	if (shot_attempt != 0)
		perc = (100 * made) / attempts;
	// if the shots missed then the percent is 0
	else
		perc = 0;
	return perc;

}
void astat::set_attempt(int attempts) {
	shot_attempt = attempts;
}
void astat::set_made(int made) {
	shot_made = made;
}

int astat::get_attempts() { return shot_attempt; }
int astat::get_made() { return shot_made; }