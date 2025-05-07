#ifndef ENEMY_H
#define  ENEMY_H
class enemy{
	int height;
	int width;
	public:
	enemy();
	move(string direction, int amount);
	changeState(bool vunerable);
	findPath(int targetHeight, int targetLength);
};

#endif