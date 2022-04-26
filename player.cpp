#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "player.h"
#include "statistic.h"

using namespace std;

void player::set_3pt(int attempts, int made) {
	lst_3pt[num_games_played].set_attempt(attempts);
	lst_3pt[num_games_played].set_made(made);


}
void player::set_2pt(int attempts, int made) {

	lst_2pt[num_games_played].set_attempt(attempts);
	lst_2pt[num_games_played].set_made(made);
}
void player::set_ft(int attempts, int made) {

	lst_ft[num_games_played].set_attempt(attempts);
	lst_ft[num_games_played].set_made(made);

}
void player::total_pts() {
	int total = 0;
	total = (lst_3pt[num_games_played].get_made() * 3) + (lst_2pt[num_games_played].get_made() * 2) + lst_ft[num_games_played].get_made();
	total_points = total;
}


string player::get_name() { return name; }
int player::get_num() { return jersey_num; }
int player::get_num_games_played() { return num_games_played; }
int player::get_3att() { return lst_3pt[num_games_played].get_attempts(); }
int player::get_3made() { return lst_3pt[num_games_played].get_made(); }
int player::get_2att() { return lst_2pt[num_games_played].get_attempts(); }
int player::get_2made() { return lst_2pt[num_games_played].get_made(); }
int player::get_ftatt() { return lst_ft[num_games_played].get_attempts(); }
int player::get_ftmade() { return lst_ft[num_games_played].get_made(); }
void player::set_num_games_played(int g) {
	num_games_played = g;
}
void player::set_name(string x) {
	name = x;
}
void player::set_jersey(int j) {
	jersey_num = j;
}
int player::get_calc_perc3(int a, int b) {
	return lst_3pt[num_games_played].calc_perc(a, b);
}
int player::get_calc_perc2(int c, int d) {
	return lst_2pt[num_games_played].calc_perc(c, d);

}
int player::get_calc_percft(int e, int f) {
	return lst_ft[num_games_played].calc_perc(e, f);
}
void player::print() {
	cout << name << " [" << jersey_num << "]\n";
	cout << left
		<< setw(4) << "Game" << " "
		<< setw(12) << "3-Point FGs" << " "
		<< setw(12) << "2-Point FGs" << " "
		<< setw(12) << "Free Throws" << " "
		<< setw(5) << "Total" << endl;
	cout << "---- ------------ ------------ ------------ -----" << endl;
	int full_games = num_games_played;
	for (int g = 0; g <= full_games; g++) {
		num_games_played = g;
		int a3 = get_3att();
		int m3 = get_3made();
		int a2 = get_2att();
		int m2 = get_2made();
		int mft = get_ftmade();
		int aft = get_ftatt();

		cout << right;

		string str_game = (to_string(g + 1));
		string str_3pt = (to_string(m3) + "/" + to_string(a3) + " (" + to_string(get_calc_perc3(a3, m3)) + "%)");
		string str_2pt = (to_string(m2) + "/" + to_string(a2) + " (" + to_string(get_calc_perc2(a2, m2)) + "%)");
		string str_ft = (to_string(mft) + "/" + to_string(aft) + " (" + to_string(get_calc_percft(aft, mft)) + "%)");
		string str_total = (to_string((m3 * 3) + (m2 * 2) + (mft)));
		cout << fixed << setprecision(2);
		cout << setw(4) << str_game << " ";
		cout << setw(12) << str_3pt << " ";
		cout << setw(12) << str_2pt << " ";
		cout << setw(12) << str_ft << " ";
		cout << setw(5) << str_total;
		cout << "\n";

	} cout << "\n"; num_games_played = full_games;
}