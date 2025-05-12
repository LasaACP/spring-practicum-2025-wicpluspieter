#include <iostream>
#include <cstdlib>
#include "Score.h"

using namespace std;

Score::Score(){
    score = 0;
    multiplier = 1;
}

int Score::getScore(){
    return score;
}

void Score::incrementScore(){
    score+=multiplier;
}

void Score::incrementMultiplier(){
    multiplier++;
}

