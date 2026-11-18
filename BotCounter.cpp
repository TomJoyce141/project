#include <iostream>
#include <ctime>
using namespace std;

int num = 0;
int points1 = 9;
void BotCounter();
int main(){
BotCounter();


}

void BotCounter() {
    srand(time(0)); 

    int num = rand() % 5 + 1; 
    points1 = points1 + num;
   
  
}


