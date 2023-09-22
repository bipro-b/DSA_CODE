// Implementation a stack using LinkedList
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* top;

void push(int data){
    Node *temp = new Node();
    if(!temp){
        cout<<"\n Stack is Overflow";
        exit(1);
    }
    temp->data = data;
    temp->next=top;
    top= temp;
}

bool isEmpty(){
    return top == NULL;
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
    if(top== NULL){
        cout<<"\nStack is underflow";
        exit(1);
    }
    else {
        temp = top;
        top = top->next;
        free(temp);
    }
}

/* 
6  --> top
5
4
3
2 --> start
 */

int main() {
    int data;
    for(int i=0;i<5;i++){
        cin>>data;
        push(data);
    }
    cout<<peek(); //  6
    pop(); // -6
    cout<<endl; 
    cout<<peek(); // 5
    pop();pop(); // -54
    cout<<endl;
    cout<<peek(); // 3
    
    return 0;
}