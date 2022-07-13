#include <iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
    
}*front=NULL,*rear=NULL;


void enqueue(int x){
    node *p= new node;
    if(p==NULL){
        std::cout << "Heap memory is full" << std::endl;
    }
    else{
        p->data= x;
        p->next=NULL;
        if(front==NULL){
            front=rear;
        }
        else{
        rear->next=p;
        rear=p;
        }
        
    }
}

int deque(){
     int x=-1;
    if(front==NULL){
        cout<<"Empty queue";
    }
    
    else{
   
    node *p;
    p=front;
    front=front->next;
    x=p->data;
    free(p);
    }
    return x;
}
int main()
{
    //Implement a queue using a LL 
    

    return 0;
}
