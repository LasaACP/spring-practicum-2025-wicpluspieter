#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "PriorityQueue.h"



/*
 * Class Priority Queue
 */

pqnode::pqnode(int d){
    data = d;
    link = NULL;
}

PriorityQueue::PriorityQueue(){
    front = NULL;
}
             
/*
* Insert into Priority Queue
*/
void PriorityQueue::push(int item)
{
  pqnode* temp = new pqnode(item);

  if (front==NULL || front->data > item){
    temp->link = front;
    front = temp;
  }
  else{
    pqnode* current= front;
    while (current->link!=NULL && item < current->link->data){
      current = current->link;
    }
    temp->link = current->link;
    current->link = temp;
  }
}

/*
 * Return top value from Priority Queue
 */
int PriorityQueue::top()
{
   if (front==NULL){
    return 0;
  }
  return front->data;
}
   
/*
 * Delete from Priority Queue
 */
void PriorityQueue::pop()
{
  if (!isEmpty()){
    front = front->link;
}
}

bool PriorityQueue::isEmpty(){
  return (front==NULL);
}
	