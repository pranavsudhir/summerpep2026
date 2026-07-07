#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertatend(Node* &head,int val){
    Node* node=new Node(val);
    Node* temp=head;
    if(head==NULL){
        head=node;
        head->next=head;
        return;
    }
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
}
void deleteatbeg(Node* &head){
    if(head==NULL)return;
    if(head->next=head){
        delete head;
        head=NULL;
        return;
    }
    Node* temp=head;
    Node* todel=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=head->next;
    head=head->next;
    delete todel;
}
void print(Node* head){
    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
}
int main(){
    
}