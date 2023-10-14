#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next = NULL;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void reverse(node* &head){
    node* prev = NULL;
    node* forward;
    node* current = head;
    while(current!=NULL){
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
        
    }
     head = prev ;
    
}
int main(){
    node* n1 = new node(4);
    node* head = n1;
    node* n2 = new node(3);
    node* n3 = new node(2);
    node* n4 = new node(1);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=NULL;
    cout<<"BEFORE REVERSING : ";
    print(head);
    cout<<"done";
    cout<<endl;
    reverse(head);
    cout<<"AFTER REVERSING : ";
    print(head);
    cout<<"done"<<endl;
}