bool LLSortedOrNot(struct node *first){
    int x= -233333333;
    node *p=first;
    while(p!=NULL){
        if((p->data)<x){
            return false;
        }
        x=p->data;
        p=p->next;
    }
}
