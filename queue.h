#ifndef QUEUE_H
#define QUEUE_H

/*
 * Node declaration
 */

struct node {
    int data;
    struct node *link;
};

/*
 * Queue class
 */

class Queue {
    public:
        node *front;

        Queue();
        void push (int);
        int pop();
        bool isEmpty();
};

#endif //QUEUE_H