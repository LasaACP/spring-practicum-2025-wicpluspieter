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
	while(!quew.isEmpty() {
		node* temp = quew.pop();
		int dis = temp->distances;
		for (Pos p : maze.getNearby(temp->row, temp->column)) {
			if(p.x = targetHeight && p.y = targetLength) {
				return pathFind(p);
			} else if(dis == 0){
				quew.push(p.x, p.y, dis+1);
			}
		} 
	}
	return NULL;
}

vector<node*> enemy::pathFind(Pos start) {
	Queue aych;
	vector<node*> rtr = {start};
	int d = start->distance;
	aych.push(start.x, start.y, d);
	while(!aych.isEmpty() {
	for(Pos p : maze.getNearby(p.x, p.y) {
		if(p.distance == d-1) {
			rtr.insert(rtr.begin(), p);
			d--;
			aych.push(p.x, p.y, d);
		}
	}
	}
	return rtr;
}