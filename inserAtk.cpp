#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* link;
};
void insertAtk(Node* head,int data,int k){
    Node* temp=NULL;
    temp=new Node;
    temp->data=data;
    temp->link=NULL;

    // reaching till k-1 th positionn 
    Node*  ptr=NULL;
    ptr=head;
    k-=2;// -1 bcoz we have to traverse till k-1 only and another -1 coz we are starting from head (alredy counted)
    while(k--){
        // cout<<k;
        ptr=ptr->link;
    }
    // cout<<ptr->data;
    temp->link=ptr->link;
    ptr->link=temp;
}
void insertEnd(Node* head,int data){
    
    Node* temp=NULL;
    temp=new Node;
    temp->data=data;
    temp->link=NULL;
    
    
    Node* ptr=NULL;
    ptr=head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}

int main(){
    Node* head=NULL;
    head=new Node;
    head->data=1;
    head->link=NULL;
    insertEnd(head,2);
    insertEnd(head,3);
    insertAtk(head,4,3);
    print(head);
}
