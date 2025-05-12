#ifndef MAZE_H
#define MAZE_H

#include <iostream>
#include <vector>


class Wall {
    private:
      bool wall_top;
        bool wall_bottom;
        bool wall_left;
        bool wall_right;
    public:
  
        Wall() : wall_left(true), wall_right (true), wall_top(true), wall_bottom (true);
}

class Cell {
   private:
    bool visited;
    Wall wall;
  public:
    Cell() visited(false), wall() {}
}

struct Pos{
 private:
  int x;
  int y;
 public:
 pos(){ int x,y =0;}
 void setX(int init_x);
 void setY(int init_y);
 int getX();
 int getY();
 }

class Maze {
    private:
  int height;
  int width;
  vector<vector<Cell>> Maze;
    public:
      
        
        Maze(int w, int h);
        void generate_Maze(int init_x, init_y);
        void remove_Wall(Pos curr, Pos next);
        int getHeight();
        int getWidth();
        vector<Pos> getNearby(int x, int y);
        
//        void pick_up_bread_crumbs();
//        void pick_up_power_ups();
        void print_maze();
}


#endif // MAZE.H
