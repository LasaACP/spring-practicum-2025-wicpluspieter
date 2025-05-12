
#ifndef STACK_H
#define STACK_H
struct Node{
     Node*next;
    int x;
    int y;
    
    Node(int init_x,int init_y){
        x = init_x;
        y = init_y;
        next = nullptr;
    }
    
    Node(){
         x = 0;
         y = 0;
        next = nullptr;
    }
};

class Stack{
    
     Node*head;
    public:
    //constructor
    Stack();
    //push method stack 
    void push(Node*n);
    // pop method stack
    void pop();
    
    bool isEmpty();
    
    int PeekX();
    
    int PeekY();
    
    void clear();
    
    string Display();
    
    int Size();
    
    
};



#endif 
