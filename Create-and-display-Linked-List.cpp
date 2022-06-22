#include <iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
}*first=NULL;

void create (int arr[], int n){
    int i;
    struct node *t, *last;
    first= new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    
    for(int i=1; i<n; i++){
        t= new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t; //Linking previous node to the new node
        last=t;
    }
    
    
}
void display (struct node *p){
    while(p!=NULL){
        std::cout << p->data << std::endl;
        p=p->next;
    }
}


int main()
{
    //Code a linkedlist node, set it's value to 10 and next node address to 0 
    struct node *p;
    p= new node;
    p->data=10;
    p->next=0;
    
    //Now make a function to display a linkedlist
   
    int A[]= {3,5,7,11,12};
    create(A,5);
    display(first);
    
    

    return 0;
}
