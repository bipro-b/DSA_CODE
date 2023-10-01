// Queue Implementation linkedlist

#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data ;
    Node *next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

class Queue{

    Node* front,*rear;
    public:
    Queue(){
        front=rear=NULL;
    }
    void enQueue(int x){
        Node* temp = new Node(x);
        if(rear== NULL){
            front=rear = temp;
            return;
        }
        rear->next = temp;
        rear=temp;
    };
    void deQueue(){
        if(front == NULL){
            return;
        }
        Node *temp = front;
        front= front->next;
        if(front ==NULL){
            rear=NULL;
        }
        delete(temp);
    }
    int getFront(){
        if(front == NULL){
            return -1;
        }
        return front->data;
    }

};

int main() {
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    cout<<q.getFront()<<endl;// 1
    q.deQueue();// 2,3
    cout<<q.getFront(); // 2
    
    return 0;
}