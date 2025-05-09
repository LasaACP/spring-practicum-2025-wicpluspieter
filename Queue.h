#ifndef QUEUE_H
#define QUEUE_H

/*
 * Node declaration
 */

struct node {
    int row;
	int column;
    struct node *link;
};

/*
 * Queue class
 */

class Queue {
    public:
        node *front;

        Queue();
        void push (int row, int column);
        int pop();
        bool isEmpty();
};

#endif //QUEUE_H
