#include <iostream>
#include <cstdlib>
#include "Stack.h"
#include "Maze.h"
#include "Enemy.h"
#include <vector>

  Pos::Pos(){
    x = 0;
    y = 0;
    d = 0;

}

 Pos::Pos(int init_x, int init_y, int init_d){
    x = init_x;
    y = init_y;
    d = init_d;
}
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
      M = std::vector<std::vector<Cell>>(h, std::vector<Cell>(w));

}
  int Maze::getHeight(){
   return height;
}

int Maze::getWidth(){
 return width;

}
  std::vector<Pos> Maze::get_Nearby(int x, int y){
      std::vector<Pos> nearby;
      if(x>=0 && y>= 0 && x<getWidth() && y<getHeight()){
        if (x + 1 < width && !M[y][x + 1].visited)
            nearby.push_back(Pos(x + 1, y,0));
        if (x - 1 >= 0 && !M[y][x - 1].visited)
            nearby.push_back(Pos(x - 1, y,0));
        if (y + 1 < height && !M[y + 1][x].visited)
            nearby.push_back(Pos(x, y + 1,0));
        if (y - 1 >= 0 && !M[y - 1][x].visited)
            nearby.push_back(Pos(x, y - 1,0));
}
       return nearby;


}
  void Maze::remove_Wall(Pos curr, Pos next){
    int x_change = next.x - curr.x;
    int y_change = next.y - curr.y;
    if(x_change>0){
        M[curr.y][curr.x].wall.wall_right = false;
        M[next.y][next.x].wall.wall_left = false;
}
   else if(x_change<0){
        M[curr.y][curr.x].wall.wall_left = false;
        M[next.y][next.x].wall.wall_right = false;
}
   else if(y_change>0){
        M[curr.y][curr.x].wall.wall_bottom = false;
        M[next.y][next.x].wall.wall_top = false;
}
  else if(y_change<0){
        M[curr.y][curr.x].wall.wall_top = false;
        M[next.y][next.x].wall.wall_bottom = false;
}

}
  void Maze::generate_Maze(){
   Stack check;
    check.push(new Node(0,0));
    M[0][0].visited = true;
  while(!(check.isEmpty())){
        Pos current;
       current.setX(check.PeekX());
      current.setY(check.PeekY());
      std::vector<Pos> nearbyUnvisited = get_Nearby(check.PeekX(),check.PeekY());
    if (!nearbyUnvisited.empty()){
      int ran = rand() % nearbyUnvisited.size();
      Pos next = nearbyUnvisited[ran];
      remove_Wall(current, next);
      M[next.getY()][next.getX()].visited = true;
      check.push(new Node(next.getX(), next.getY()));
 
}
  else{
 

    Pos next = Pos(current.getX()-1, current.getY(), 0);
   remove_Wall(current,next);
   
 
     



   



    check.pop(); 

  }



}
}
 
void Maze::printMaze() {
    for (int y = 0; y < getHeight(); ++y) {
   
        for (int x = 0; x < getWidth(); ++x) {
            std::cout << "+";
            std::cout << (M[y][x].wall.wall_top ? "---" : "   ");
        }
        std::cout << "+\n";

        for (int x = 0; x < getWidth(); ++x) {
            std::cout << (M[y][x].wall.wall_left ? "|" : " ");
            std::cout << "   ";
        }
        std::cout << "|\n";
    }

 
    for (int x = 0; x < getWidth(); ++x) {
        std::cout << "+---";
    }
    std::cout << "+\n";
} 

