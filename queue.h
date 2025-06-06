#ifndef QUEUE_H
#define QUEUE_H

/*
 * Node declaration
 */

struct node {
    int row;
	int column;
	int distance=0;
    struct node *link;
};

/*
 * Queue class
 */

class Queue {
    public:
        node *front;

        Queue();
        void push (int r, int c, int d);
        node pop();
        bool isEmpty();
};

#endif //QUEUE_H