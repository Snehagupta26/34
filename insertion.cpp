//insertathead
/*#include<iostream>
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
void insertathead(node* &head,int d){
    node* temp = new node(d);
    temp->next = head;
    head=temp;
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
  node* n1 = new node(10);
  node* head = n1;
  cout<<n1->data<<endl;
  cout<<n1->next<<endl;
  print(head);
  insertathead(head,12);
  print(head);
}*/
//insertattail
/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next = NULL;
    node(int data){
        this->data = data;
        this->next= NULL;
    }
};
void insertathead(node* &head,int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}
void insertattail(node* &tail,int d){
    node* temp = new node(d);
    tail->next = temp;
    temp->next = NULL;
    tail=temp;
}
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node* n1 = new node(10);
    node* head = n1;
    node* tail = n1;
    print(head);
    cout<<endl;
    insertathead(head,9);
    print(head);
    cout<<endl;
    insertattail(tail,14);
    print(head);
    cout<<endl;
    insertattail(tail,19);
    print(head);
    cout<<endl;
    insertathead(head,92);
    print(head);

}*/
//insertatmiddle
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next = NULL;
    node(int data){
        this->data = data;
        this->next= NULL;
    }
};
void insertathead(node* &head,int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}
void insertattail(node* &tail,int d){
    node* temp = new node(d);
    tail->next = temp;
    temp->next = NULL;
    tail=temp;
}
void insertatposition(node* &head,int position,int d){
    // //if(position=1){
    //     insertathead(head,d);
    //     return;
    
    int count = 1;
    node* temp = head;
    while(count<position-1){
        temp=temp->next;
        count++;

    }
    node* n2 = new node(d);
    n2->next = temp->next;
    temp->next=n2;
    //
}
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node* n1 = new node(10);
    node* head = n1;
    node* tail = n1;
    print(head);
    cout<<endl;
    insertathead(head,9);
    print(head);
    cout<<endl;
    insertattail(tail,14);
    print(head);
    cout<<endl;
    insertattail(tail,19);
    print(head);
    cout<<endl;
    insertatposition(head,1,46);
    print(head);
    cout<<endl;
    insertathead(head,92);
    print(head);

}