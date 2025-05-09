
#ifndef STACK_H
#define STACK_H
struct Node{
     Node*next;
    int data;
    
    Node(int a){
        data = a;
        next = nullptr;
    }
    
    Node(){
        data = 0;
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
    
    int Peek();
    
    void clear();
    
    string Display();
    
    int Size();
    
    
};



#endif 