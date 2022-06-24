//Making a node as head / inserting before head of LL / Inserting at position 0 of LL
void Beforefirst(struct node *p, int data){
    struct node *t= new node;
    t->data=data;
    t->next=first;
    first=t;
    
    
}

//Inserting anywhere in between 

void InsertNodeinBetween(struct node *p, int pos,int x){
    node *t= new node;
    t->data=x;
     p=first;
    for(int i=0;i<(pos-1);i++){
        p=p->next;
    }
    t->next=p->next;
    p->next=t;
}

//Inserting anywhere (either before head/after it/at the end) {combines all the code}
void InsertAnywhere(struct node *p,int pos, int x){
    node *t,*q;
    if(pos==0){
        t=new node;
        t->data=x;
        t->next=first->next;
        first->next=t;
    }
    else if(pos>0){
        t=new node;
        q=first;
        for(int i=0;i<(pos-1) && q;i++){
        q=q->next;
    }
    if(q){
    t->next=q->next;
    q->next=t;
    }
    }
}
