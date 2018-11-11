#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <ctime>

class Player {
    int playerRolled;
    int playerPosition;
    //needstoRoll is the last roll the player needs
    int needstoRoll;
    bool hasWon;
    public:
     void set_rolled(int x);
     void set_position(int y);
     void set_won();
     int get_rolled() {return  playerRolled;}
     int get_postion(){return  playerPosition;}
     void has_to_roll();
};

void Player::set_rolled(int x){
    playerRolled = x;
}
void Player::set_position(int y){
    playerPosition = y;
}
void Player::set_won(){
    hasWon = true;
}

//used to check if player rolls over 40 or has won the game
void Player::has_to_roll(){
    int endBoard = 40;
    if ((playerRolled + playerPosition) > endBoard){
        needstoRoll = 40 - (playerRolled + playerPosition);
    }
    else if ((playerRolled + playerPosition) == endBoard){
        hasWon = true;
    }
}

