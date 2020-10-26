//Program to add the node at the end even when there are previous nodes
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data ;
    Node* link;
};
void addAtEnd(Node* head,int data){
    Node* temp=NULL;
    temp=new Node;
    temp->data=data;
    temp->link=NULL;

    Node* ptr=NULL;
    ptr=head;
    while (ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;   
   
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
    cout<<endl;
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
    cout<<"Before:";
    print(head);
    addAtEnd(head,4);
    cout<<"After:";
    print(head);
    addAtEnd(head,5);
    addAtEnd(head,6);
    addAtEnd(head,7);
    print(head);
}