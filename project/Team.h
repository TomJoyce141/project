#include <string>
#include <iostream>
using namespace std;

class Team{
private:
string Team_name;
int player_no;
int points;





public:
Team();
void set_player_no(int val);
void set_Team_name(string val);
string get_Team_name(){return Team_name;};
void add_points();
int get_points(){return points;};
void Leaderboard();
void BotCounter1();
void BotCounter2();
void BotCounter3();
void BotCounter4();

};