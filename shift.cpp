//Program to count the number of Nodes
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data ;
    Node* link;
};
int countNodes(Node* head){
    int count=0;
    if(head==NULL){
        return 0;
    }
    Node*ptr=NULL;
    ptr = head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->link;
    }
    return count;
}
void print(Node* head){
    if(head==NULL){
        cout<<"linked list is empty ";
    }
    Node* ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
}
int main(){
    Node* head=NULL;
    head=new Node;
    head->data=1;
    head->link=NULL;

    Node* current=NULL;
    current=new Node;
    current->data=2;
    current->link=NULL;

    head->link=current;

    current=new Node;
    current->data=3;
    current->link=NULL;

    head->link->link=current;
    print(head);
    cout<<"\nTotal Nodes are:"<<countNodes(head);
}