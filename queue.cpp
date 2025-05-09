#include <iostream>
#include <cstdlib>
#include "Queue.h"

using namespace std;

Queue::Queue(){
    front = NULL;
}

void Queue::push (int row, int column){

    if (Queue::isEmpty()){
    node *t = new node();
    t->row = row;
	t->column = column
    
    front = t;
}
    
    else{
        node*temp = front;
        while (temp->link){
            temp = temp->link;
        }
        
        node *t = new node();
        t->data = d;
        
        temp->link = t;
    }
}

int Queue::pop(){
    if (!Queue::isEmpty()){
        node* r = front;
        front = front->link;
        return r->data;
    }
    return 0;
}

bool Queue::isEmpty(){
    return (front == NULL);
}
