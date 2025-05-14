#include <iostream>
#include <cstdlib>
#include "Queue.h"

using namespace std;

Queue::Queue(){
    front = NULL;
}

void Queue::push (int r, int c, int d){

    if (Queue::isEmpty()){
    node *t = new node();
    t->row = r;
	t->column = c;
	t->distance = d;
    
    front = t;
}
    
    else{
        node*temp = front;
        while (temp->link){
            temp = temp->link;
        }
        
        node *t = new node();
        t->distance = d;
        
        temp->link = t;
    }
}

node* Queue::pop(){
    if (!Queue::isEmpty()){
        node* r = front;
        front = front->link;
        return r;
    }
    return 0;
}

bool Queue::isEmpty(){
    return (front == NULL);
}
