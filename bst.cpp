#include <assert.h>

struct node{
  int data;
  node* left;
  node* right;
};

class BST{
  node* head;
  BST(){
    head=0;
  }
  void insert(int t){
    //We have to insert t at its correct place
    node* i=head;
    node* temp;
    temp->data=t;
    temp->left=temp->right=0;
    if(head==0){
      head=temp;//head should point to first element 
    }
    else{
      //Insertion algo comes here
    }
  }
};

  

