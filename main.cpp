#include "Stack.h"
#include "Maze.h"
#include <vector>
#include <iostream>
using namespace std;



int main(){
 Maze run = Maze(10,10);
run.generate_Maze();
run.printMaze();

return 0;

}                                                                                                                                                                                                                  
