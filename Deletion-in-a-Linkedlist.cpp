void Deletefirstnode(struct node *first){
    node *p= first;
    first=first->next;
    int x= p->data;
    delete p;
}

void DeleteANode(struct node *first, int pos){
    node *q,*p;
    p=first;
    q=NULL;
    for(int i=0; i<pos-1; i++){
        q=p;
        p=p->next;
    }
    q->next=p->next;
    int x= p->data;
    cout<<x<<endl;
    delete p;
}

void DeleteanynodeIncludingFirstToo (struct node *p, int pos){
    node *q,*p;
    int x=-1; i;
    if(pos==1){
       node *p= first;
    first=first->next;
    int x= p->data;
    delete p; 
    }
    else{
        p=first;
    q=NULL;
    for(int i=0; i<pos-1; i++){
        q=p;
        p=p->next;
    }
    q->next=p->next;
    int x= p->data;
    cout<<x<<endl;
    delete p;
    }
}
