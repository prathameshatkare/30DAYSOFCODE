#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* Next;

    Node(int data){
        this ->data=data;
        this->Next=nullptr;
    }
};


void insertatend(Node* &head,int data){

    Node* temp = new Node(data);
    temp->Next=head;
    head=temp;
}

void insertattail(Node* &tail,int data){

    Node* temp = new Node(data);
    tail->Next=temp;
    tail=tail->Next;
    
}
void Printnode(Node* &head){

    Node* temp=head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        

        temp=temp->Next;
    }
}
void insertposition(Node* &head,int position,int data){

    Node* temp=head;
    
    int count =1;
    //travetill required nodde
    while(count<position-1){
        temp=temp->Next;
        count++;
    }
    Node* nodetoinsert = new Node(data);

    nodetoinsert->Next=temp->Next;
    temp->Next=nodetoinsert;
}


int main(){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);

    node1->Next = node2;
    node2->Next = node3;

    // Print list

   
    Node* head =node1;
    insertatend(head,50);
    Printnode(head);

cout<<endl;
    
    Node* tail = node3;
    insertattail(tail,123);
    Printnode(head);

    cout<<endl;


    insertposition(head,2,85);
    Printnode(head);

    
    


    
}