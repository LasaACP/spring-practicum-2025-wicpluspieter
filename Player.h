#ifndef ENEMY_H
#define  ENEMY_H
#include <vector>
using namespace std;


class player{
	int row;
	int column;
	Maze* maze;
	public:
	player(int r, int c, Maze * m);
	void updateLocation(int new_row, int new_column);
};

#endif