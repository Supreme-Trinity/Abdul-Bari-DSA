void SortedInsertion(struct node *first, int x){
    node *p,*q;
    q=NULL;
    p=first;
    while(p && (p->data)<x){
        q=p;
        p=p->next;
    }
    node *t= new node;
    t->data=x;
    t->next=q->next;
    q->next=t;
}
