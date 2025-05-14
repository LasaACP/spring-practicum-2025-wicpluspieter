#include <iostream>
#include "Enemy.h"
#include "Queue.h"
#include "Maze.h"
#include <vector>
using namespace std;
enemy::enemy(Maze * m) {
	row = 0;
	column = 0;
	maze = m;
}

void enemy::updateLocation(int new_row, int new_column) {
	row = new_row;
	column = new_column;
}

vector<node*> enemy::findPath(int targetHeight, int targetLength) {
	Queue quew;
	quew.push(targetHeight, targetLength, 0);
	while(!quew.isEmpty()) {
		node* temp = quew.pop();
		int dis = temp->distance;
		for (Pos p : maze->get_Nearby(temp->row, temp->column)) {
			if(p.x == targetHeight && p.y == targetLength) {
				return pathFind(p);
			} else if(dis == 0){
				quew.push(p.x, p.y, dis+1);
				p.distance = dis+1;
			}
		} 
	}
	vector<node*> thing;
	return thing;
}

vector<node*> enemy::pathFind(Pos start) {
	Queue aych;
	node* temp2;
	temp2->row = start.x;
	temp2->column = start.y;
	temp2->distance = start.distance;
	vector<node*> rtr = {temp2};
	int d = start.distance;
	aych.push(start.x, start.y, d);
	while(!aych.isEmpty()) {
	node* b = aych.pop();
	for(Pos p : maze->get_Nearby(b->row, b->column)) {
		if(p.distance == d-1) {
			rtr.insert(rtr.begin(), p);
			d--;
			aych.push(p.x, p.y, d);
		}
	}
	}
	return rtr;
}