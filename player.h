#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include "statistic.h"
using namespace std;
//------------------------------------
// ints all the things needed for the 
// players
//
//-------------------------------------

class player{
public:
	// 3pt = 3 points
void set_3pt(int attempts, int made);
// 2 pt= 2 points
void set_2pt(int attempts, int made);
// ft = freethrow
void set_ft(int attempts, int made);
void total_pts();
int get_num();
int get_num_games_played();
// att = attempts
int get_3att();
int get_3made();
int get_2att();
int get_2made();
int get_ftatt();
int get_ftmade();
void set_num_games_played(int g);
string get_name();
void set_name(string x);
void set_jersey(int j);
void print();
int get_calc_perc3(int a, int b);
int get_calc_perc2(int c, int d);
int get_calc_percft(int e, int f);

private:
string name = "";
int jersey_num = 0;
int num_games_played = 0;
int total_points = 0;
astat lst_3pt[15];
astat lst_2pt[15];
astat lst_ft[15];

};
