#ifndef MAZE_H
#define MAZE_H

#include <iostream>
#include <vector>
#include <random>

class Wall {
    private:
    public:
        bool wall_top;
        bool wall_bottom;
        bool wall_left;
        bool wall_right;
        Wall() : wall_left(true), wall_right (true), wall_top(true), wall_bottom (true);
}

class Cell {
    bool visited;
    Wall wall;
    Cell() visited(false), wall() {}
}

class Maze {
    private:
    public:
        int height;
        int width;
        std::vector<std::vector<cell> cells;
        Maze(int w, int h);
        void generate_maze(int init_x, init_y);
//        void pick_up_bread_crumbs();
//        void pick_up_power_ups();
        void print_maze();
}


#endif // MAZE.H
