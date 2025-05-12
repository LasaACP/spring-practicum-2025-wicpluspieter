#include <iostream>
#include <cstdlib>
#include "Stack.h"
#include "Maze.h"
#include <vector>

  void Pos::setX(int init_x){
    x = init_x;
}
  void Pos::setY(int init_y){
    y = init_y;
}

 int Pos::getX(){
   return x;
}

 int Pos::getY(){
   return y;
   }

 Maze::Maze(int w,int h){
      height = h;
      width = w;
      vector<vector<Cell>> Maze(h, vector<Cell>(w));

}
  int Maze::getHeight(){
   return height;
}

int Maze::getWidth(){
 return width;

}
  vector<Pos> Maze::get_Nearby(int x, int y){
      vector<Pos> nearby;
      if(x>=0 && y>= 0 && x<getWidth() && y<getHeight()){
        if(!(Maze[x+1][y].visited)){
            nearby.push_back({x+1,y});
           
}
        if(!(Maze[x-1][y].visited)){
           nearby.push_back({x-1,y}); 
}
        if(!(Maze[x][y+1].visited)){
            nearby.push_back({x,y+1});
}
        if(!(Maze[x][y-1].visited)){
            nearby.push_back({x,y-1});
}
}
       return nearby;


}
  void Maze::remove_Wall(pos curr, pos next){
    int x_change = next.x - curr.x;
    int y_change = next.y - curr.y;
    if(x_change>0){
        Maze[curr.y][curr.x].wall_right = false;
        Maze[next.y][next.x].wall_left = false;
}
   else if(x_change<0){
        Maze[curr.y][curr.x].wall_left = false;
        Maze[next.y][next.x].wall_right = false;
}
   else if(y_change>0){
        Maze[curr.y][curr.x].wall_bottom = false;
        Maze[next.y][next.x].wall_top = false;
}
  else if(y_change<0){
        Maze[curr.y][curr.x].wall_top = false;
        Maze[next.y][next.x].wall_bottom = false;
}

}
  void Maze::generate_Maze(int w, int h){
   Stack check = Stack();
    check.push(new Node(0,0));
    Maze[0][0].visited = true;
  while(!(check.isEmpty())){
        Pos current;
       curent.setX(check.PeekX());
      current.setY(check.PeekY());
      vector<Pos> nearbyUnvisited = getNearby(check.PeekX(),check.PeekY());
    if (!nearbyUnvisited.empty()){
      int ran = rand() % nearbyUnvisited.size();
      Pos next = nearbyUnvisited[ran];
      remove_Wall(current, next);
      Maze[next.getX()][next.getY()].visited = true;
      check.push(new Node(next.getX,next.getY));
 
}
  else{
     check.pop();

  }



}
}

void Maze::printMaze() {
    for (int y = 0; y < getHeight(); ++y) {
   
        for (int x = 0; x < getWidth(); ++x) {
            cout << "+";
            cout << (Maze[y][x].top ? "---" : "   ");
        }
        cout << "+\n";

        for (int x = 0; x < getWidth(); ++x) {
            cout << (Maze[y][x].left ? "|" : " ");
            cout << "   ";
        }
        cout << "|\n";
    }

 
    for (int x = 0; x < getWidth(); ++x) {
        cout << "+---";
    }
    cout << "+\n";
}

