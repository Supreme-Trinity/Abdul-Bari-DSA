void removedup(struct node *first){
    node *p=first;
    node *q= first->next;
    if((p->data)!=(q->data)){
        p=q;
        q=q->next;
    }
    else{
        p->next=q->next;
        delete q;
        q= p->next;
    }
}
