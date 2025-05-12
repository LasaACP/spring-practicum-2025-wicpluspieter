#ifndef ENEMY_H
#define  ENEMY_H
#include <vector>
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
	void move(string direction, int amount);
	void changeState(bool vunerable);
	vector<node*> findPath(int targetHeight, int targetLength);
	vector<node*> pathFind(Pos start);
};

#endif