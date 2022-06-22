void recdisp(struct node *p){
    if(p!=NULL){
        cout<<p->data<<endl;
        recdisp(p->next);
    }
}

void revrecdisp(struct node *p){
    if(p!=NULL){
        revrecdisp(p->next);
        std::cout << p->data << std::endl;
        
    }
}
