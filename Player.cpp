#include <iostream>
#include "Enemy.h"
#include "Player.h"
#include "Queue.h"
#include <vector>
using namespace std;
player::player(int r, int c, Maze * m) {
	row = r;
	column = c;
	maze = m;
}

void player::updateLocation(int new_row, int new_column) {
	row = new_row;
	column = new_column;
}