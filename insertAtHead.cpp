#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* link;
};
void print(Node* head){
    if(head==NULL){
        cout<<"LL is empty";
    }
    Node* ptr=NULL;
    ptr=head;
    while (ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }cout<<endl;
    
}
void insertAtHead(Node* &head,int data){
    
    Node* temp=NULL;
    temp=new Node;
    temp->data=data;
    temp->link=NULL;

    temp->link=head;
    head=temp;
}
int main(){
    Node* head=NULL;
    head=new Node;
    head->data=1;
    head->link=NULL;

    insertAtHead(head,2);
    print(head);
    insertAtHead(head,2);
    print(head);
    insertAtHead(head,2);
    print(head);
    insertAtHead(head,2);
    print(head);
}
