
void InsertAtLast(struct node *p,int x){
    node *ptr;
    ptr=p;
    node *t=new node;
    t->data=x;
    t->next=NULL;
    while((ptr->next)!=NULL){
        ptr=ptr->next;
    }
    ptr->next=t;
    
    
}
