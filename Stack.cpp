#include <iostream>
using namespace std;

#include "Stack.h"
 Stack::Stack(){
         head = nullptr;
     }
    void Stack::push(Node*n){
        
       n->next = head;
        head = n;
        
    }
    void Stack::pop(){
        if (isEmpty()){
            return;
        }
        else{
          Node* temp = head;
            head = head->next;
            delete temp;  
        }
        
            
            
        
    }
        void Stack::clear(){
              Node*last = head;
    bool clear = true;
    if (head->next == nullptr){
        clear = false;
    }
    else{
        while (last->next != nullptr && clear){
        Node*prev = last;
        last = last->next;
        prev = nullptr;
    }
    last =nullptr; 
    }
   
        }
        int Stack::PeekX(){
           if (head != nullptr) {
            return head->x;
        }
        return -1;
        }

        int Stack::PeekY(){
               if (head != nullptr) {
            return head->y;
        }
        return -1;
}
        bool Stack::isEmpty(){
            if (head != nullptr){
                return false;
            }
            return true;
            
            
        }

        
    int Stack::Size(){
            
    int count = 0; 
 
    Node* current = head;
    while (current != nullptr) 
    { 
        count++; 
        current = current->next; 
    } 
    return count; 
} 
        
