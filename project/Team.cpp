#include "Team.h"
#include <iostream>
using namespace std;

Team::Team()
{
    Team_name = "Undifined";
    player_no = 0;
    points = 0;
}

void Team::set_player_no(int val)
{
    if (val > 4){
        cout << "The maximun allowed players per team is 4" << endl;
    }
    else {
        player_no = val;
        cout << "Players set to " << val << endl;
    }
}

void Team::set_Team_name(string val)
{
    Team_name = val;
    cout << "Team name is set to " << val << endl;
}
void Team::BotCounter1() {
    srand(time(0)); 

   
    int num1 = rand()% 5 + 1;
    int num2 = rand()% 5 + 1;
    int num3 = rand()% 5 + 1;
    int num4 = rand()% 5 + 1;

    
    points = points + num1;
  
}

void Team::BotCounter2() {
    srand(time(0)); 

   
    int num1 = rand()% 5 + 1;
    int num2 = rand()% 5 + 1;
    int num3 = rand()% 5 + 1;
    int num4 = rand()% 5 + 1;

    
    points = points + num4;
  
}

void Team::BotCounter3() {
    srand(time(0)); 

   
    int num1 = rand()% 5 + 1;
    int num2 = rand()% 5 + 1;
    int num3 = rand()% 5 + 1;
    int num4 = rand()% 5 + 1;

    
    points = points + num3;
  
}

void Team::BotCounter4() {
    srand(time(0)); 

   
    int num1 = rand()% 5 + 1;
    int num2 = rand()% 5 + 1;
    int num3 = rand()% 5 + 1;
    int num4 = rand()% 5 + 1;

    
    points = points + num2;
  
}





void Team::add_points()
{
    points = points + 1;
}

void Team::Leaderboard()
{
    cout << get_Team_name() << " has " << get_points() << " points." << endl;
   
}

   
  
