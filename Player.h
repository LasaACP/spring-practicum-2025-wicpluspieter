#ifndef PLAYER_H
#define  PLAYER_H
#include <vector>
using namespace std;


class player{
	public:
	int row;
	int column;
	Maze* maze;
	player(int r, int c, Maze * m);
	void updateLocation(int new_row, int new_column);
};

#endif