#include <iostream>
#include <cstdlib>
#include "BST.h"
#include "PriorityQueue.h"

using namespace std;

BST::BST(){
    root = NULL;
}

/* 
 * inserts new score into tree 
 */

 void BST::insert(node *tree, int newScore){
    node *newnode = new node;
    newnode->score = newScore;


    if (tree == NULL){
        root = newnode;
        return;
    }

    if (tree->score = newScore){
        return;
    }

    if (newScore < tree->score){
        if (tree->p_left != NULL){
            insert(tree->p_left, newScore);
        }

        else{
            tree->p_left = newnode;
        }
    }

    else {
        if (tree->p_right != NULL){
            insert(tree->p_right, newScore);
        }

        else{
            tree->p_right = newnode;
            return;
        }
    }
    
 }

/* 
 * recursively clears the tree
 */
void clear(node* tree){
    if (tree==NULL){
        return;
    }

    clear(tree->p_left);
    clear(tree->p_right);

    delete tree;
}

/* 
 * prints the top five scores
 */
void BST::topFive(){
    //traverses the tree and adds the scores to a queue in order of value
    PriorityQueue n = traverse(root);

    //prints the first five values, or 0s if there are none 
    for (int i = 0; i < 5; i++){
        if (!n.isEmpty()){
            cout << n.top() << endl;
            n.pop();
        }
        else{
            cout << 0 << endl;
        }
    }
}

/* 
 * traverses the tree in order  
*/
PriorityQueue BST::traverse(node* tree){
    PriorityQueue pq;

    if (tree==NULL){
        return pq;
    }

    traverse(tree->p_left);

    pq.push(tree->score);

    traverse(tree->p_right);

}

/* 
 * returns the current high score 
 */
int BST::highScore(){
    node *temp = root;

    while (temp!=NULL && temp->p_right != NULL){
        //finds the rightmost node  
        temp = temp->p_right;
    }

    return temp->score;
}