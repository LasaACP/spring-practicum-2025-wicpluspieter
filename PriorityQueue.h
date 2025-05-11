#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

struct pqnode
{
	int data;
	struct pqnode *link;

   pqnode(int);
};



class PriorityQueue
{
	public:
    
    pqnode *front;

	PriorityQueue();
		
	void push(int);
	int top();
	void pop();
    bool isEmpty();


};

#endif //PRIORITYQUEUE_H