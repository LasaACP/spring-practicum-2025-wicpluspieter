#ifndef ENEMY_H
#define  ENEMY_H
#include <vector>
#include "Maze.h"
using namespace std;

struct noder {
    int row;
	int column;
    struct node *link;
};

class enemy{
	int row;
	int column;
	Maze* maze;
	public:
	enemy(Maze* m);
	void updateLocation(int new_row, int new_column);
	vector<node*> findPath(int targetHeight, int targetLength);
	vector<node*> pathFind(Pos start);
};

#endif