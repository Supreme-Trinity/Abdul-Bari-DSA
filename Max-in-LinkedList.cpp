int maxinLinkedlist(struct node *p){
    int max= (-100000);
    while(p!=NULL){
        if((p->data)>max){
            max=p->data;
        }
        p= p->next;
        
    }
    return max;
}
