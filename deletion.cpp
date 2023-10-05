#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
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
void deleteathead(node* &head){
    head=head->next;
}
void deleteattail(node* &head,node* &tail){
    node* temp= head;
    while(temp->next!=tail){
        temp=temp->next;
  }
  temp->next=NULL;
  tail=temp;

}
void deleteatposition(int position,node* &head){
    int count = 1;
    node* temp=head;
    node* current = head;
    while(count<position-1){
        temp=temp->next;
        count++;

    }
    while(count<position){
        current=current->next;
        count++;

    }
    temp->next=current->next;
    free(current);

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
    cout<<endl;
    
    deleteatposition(3,head);
    cout<<"after dltion: "<<endl;
    print(head);

    cout<<endl;
    deleteathead(head);
    cout<<"after dltion: "<<endl;
    print(head);
    cout<<endl;
    deleteattail(head,tail);
    cout<<"after dltion: "<<endl;
    print(head);
    cout<<endl;
    deleteatposition(2,head);
    cout<<"after dltion: "<<endl;
    print(head);
}