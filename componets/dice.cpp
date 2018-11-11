#include <stdlib.h>
#include <iostream>

int RollDice(){
    int diceFaces [6] = {1,2,3,4,5,6};
    //to prevent seeding
    srand ( time(NULL) );
    int diceRolled = rand () % 6;
    return diceFaces[diceRolled];
}
