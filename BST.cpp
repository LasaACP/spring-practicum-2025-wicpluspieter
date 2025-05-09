#include <iostream>
#include <cstdlib>
#include "BST.h"
#include "Stack.h"

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
 * clears the tree
 */

/* 
 * prints the top five scores
 */
void topFive(){

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