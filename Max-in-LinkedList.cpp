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


//Now finding the same using recursion be like
int recursivemax(struct node *p){
    int x=0;
    if(p==0){
        return INT32_MIN;
    }
    x=recursivemax(p->next);
    if(x>(p->data)){
        return x;
    }
    else{
        return p->data;
    }
}
