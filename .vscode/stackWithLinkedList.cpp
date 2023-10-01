//Implement a stack using Linkedlist
#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* top;

void push(int data){
    Node * temp = new Node();
    if(!temp){
        cout<<"\nStack OverFlow";
        exit(1);
    }
    // add at the top and change top as a new node

    temp->data = data;
    temp->next=top;
    top = temp;
}

bool isEmpty (){
    return top==NULL;
}

int peek(){
    if(!isEmpty()){
        return top->data;
    }
    else {
        exit(1);
    }
}

void pop(){
    Node *temp;
    if(top==NULL){
        cout<<"\nStack is Underflow";
    }
    else{
        temp= top;
        top=top->next;
        free(temp);
    }
}

int main() {
    int data;
    for(int i=0;i<5;i++){
        cin>>data;
        push(data);
    }
    cout<<peek()<<endl; // 6
    pop();
    cout<<peek()<<endl; // 5
    pop();pop();
    cout<<peek(); //3
    return 0;
}