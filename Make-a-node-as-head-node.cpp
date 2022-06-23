void bringkeytofirst(struct node *p, int key){
    node *q=NULL;
    while(p!=NULL){
        if((p->data)==key){
            q->next=p->next; //Use rough notebook to imagine
            p->next=first; //This will make the next link to the link same as first is pointing
            first=p; //Now first will point towards p, making it head
        }
        q=p;
        p=p->next;
    }
}
int main(){
  
   //Write a function to make the node that contains 12 as first node of the LL
    bringkeytofirst(first,12);
    display(first);
  return 0;
}
