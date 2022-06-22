int numberofnodes(struct node *p){
  if(p==NULL){
    return 0;
  }
  else{
    return numberofnodes(p->next) + 1;
  }
  
}
int sumofnodes(struct node *p){
  if(p==NULL){
    return 0;
  }
  else{
    return numberofnodes(p->next) + p->data;
  }
  
}

  
