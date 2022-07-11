void CircularEnqueue(struct queue *q,int x){
    if((q->rear+1)%(q->size)==q->front){
        cout<<"queue is full"<<endl;
    }
    else{
        q->rear= (q->rear+1)%(q->size);
        q->Q[q->rear]=x;
    }
}

void CircularDequeue(struct queue *q){
    if(q->front==q->rear){
        cout<<"queue is empty"<<endl;
    }
    else{
        q->front= (q->front+1)%(q->size);
        x=q->front;
    }
    return x;
}
