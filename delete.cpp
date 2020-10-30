#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* link;
};

void deleteHead(node* &head){
    if( head==NULL){
        cout<<"LL is empty";
    }
    node* temp=head;
    head=head->link;
    delete temp;//it is necessary to create temp bcoz agar directly head ko transfer kar diya toh this add will not be further accessible
}
void insertEnd(node* &head,int data){
    if (head==NULL){
        head =new node;
        head->data=data;
        head->link=NULL;
        return;
    }
    node* temp=NULL;
    temp=new node;
    temp->data=data;
    temp->link=NULL;

    node* ptr=head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}
int main(){
    node* head=NULL;
    // head= new node;
    // head->data=1;
    // head->link=NULL;

    insertEnd(head,2);
    insertEnd(head,3);
    print(head);
    deleteHead(head);
    print(head);
}
