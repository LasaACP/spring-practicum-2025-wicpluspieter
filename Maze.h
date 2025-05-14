#ifndef MAZE_H
#define MAZE_H

#include <iostream>
#include <vector>


class Wall {
    public:
      bool wall_top;
        bool wall_bottom;
        bool wall_left;
        bool wall_right;
   
        Wall() : wall_left(true), wall_right (true), wall_top(true), wall_bottom (true){} 
     friend class Maze;
};

class Cell {
   public:
    bool visited;
    Wall wall;
  
    Cell() : visited(false), wall() {}
    
 friend class Maze;
};

struct Pos{
 public;
  int x;
  int y;

 Pos() : x(0), y(0) {}
 Pos(int init_x, int init_y): x(init_x), y(init_y) {}
 void setX(int init_x);
 void setY(int init_y);
 int getX();
 int getY();
 friend class Maze;
 };

class Maze {
    private:
  int height;
  int width;
  std::vector<std::vector<Cell>> M;
    public:
      
        
        Maze(int w, int h);
        void generate_Maze();
        void remove_Wall(Pos curr, Pos next);
        int getHeight();
        int getWidth();
        std::vector<Pos> get_Nearby(int x, int y);
    
        
//        void pick_up_bread_crumbs();
//        void pick_up_power_ups();
        void printMaze();
};


#endif // MAZE.H
