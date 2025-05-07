#ifndef MAZE_H
#define MAZE_H

#include <iostream>
#include <std.boolh>

typedef enum {
    DIR_UP = 0;
    DIR_DOWN,
    DIR_LEFT,
    DIR_RIGHT,
    DIR_COUNT
} maze_dir

typedef struct {
    bool visited;
    bool wall[DIR_COUNT];
} maze_cell

class Maze {
    private:
    public:
        void free_maze(Maze *maze);
        void generate_maze(Maze *maze, int init_x, int init_y);
        void display_maze(const Maze *maze);
        void bread_crumb_pick_up();
        void power_up_pick_up();
        bool up;
        bool down;
        bool left;
        bool right; 
        
}


#endif // MAZE.H
