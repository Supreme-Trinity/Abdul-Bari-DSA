#include <iostream>

using namespace std;

struct queue {
    int front;
    int rear;
    int size;
    int *Q;
}

void Enqeue (struct queue *q, int x ){
    if(q->rear==(size-1)){
        cout<<"Array already full"<<endl;
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}

void Deque (struct queue *q){
    int x=-1;
    if(q->rear==q->front){
        cout<<"Void already empty"<<endl;
    }
    else{
        q->front++;
        x= q->Q[q->front];
    }
    return x;
}

int main()
{
    struct queue q;
    cout<<"Type in the size of queue"<<endl;
    cin>>q.size;
    q.front=q.rear=-1;
    int Q= new int[q.size];
    
    

    return 0;
}
