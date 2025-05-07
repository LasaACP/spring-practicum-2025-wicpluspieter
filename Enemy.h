#ifndef ENEMY_H
#define  ENEMY_H
class enemy{
	int height;
	int width;
	public:
	enemy();
	move(string direction, int amount);
	change state(bool vunerable);
};

#endif