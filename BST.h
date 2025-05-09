#ifndef BSTREE_H
#define BSTREE_H

/*
 * Node Declaration
 */

struct node {
    int score;
    struct node* p_left;
    struct node * p_right;
};

/*
 * Class Declaration
 */

class BST{
    public:
        node* root;

        BST();
        void insert (node*, int);
        void clear();
        void topFive();
        int highScore();
};

#endif //BSTREE_H