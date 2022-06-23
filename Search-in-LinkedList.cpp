node *Search(struct node *p, int key){
    while(p!=NULL){
        if((p->data)==key){
           return(p);
        }
        p=p->next;
    }
    return NULL;
}

node *RecursiveSearch(struct node *p, int key){
    if(p==0){
        return NULL;
    }
    if((p->data)==key){
        return(p);
    }
    return RecursiveSearch(p->next,key);
}
