// create LL with two elements manually

#include <bits/stdc++.h>
using namespace std;

// Creating a node
class Node {
   public:
  int value;
  Node* link;
};
void print(Node* head){
    if(head==NULL){
        cout<<"LL is empty";
    }
    Node* ptr;
    ptr=head;
    
  while (ptr != NULL) {
    cout<< ptr->value<<" ";
    ptr = ptr->link;
  }
}
int main() {
  Node* head=NULL;
  Node* two = NULL;
  Node* three = NULL;

  // allocate 3 nodes in the heap
  head=new Node();
  two = new Node();
  three = new Node();

  // Assign value values
  head->value = 1;
  two->value = 7;
  three->value = 3;

  // Connect nodes
  head->link = two;
  two->link = three;
  three->link = NULL;
    print(head);
}

