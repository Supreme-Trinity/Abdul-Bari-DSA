#include <iostream>
using namespace std;

struct stack {
    int size;
    int top;
    int *s;
}first;

void CreateStack(struct stack *st){
    std::cout << "Type the required size of the stack" << std::endl;
    cin>>(st->size);
    st->s= new int [(st->size)];
    st->top=-1;
}

void DisplayStack(struct stack st){
    for(int i=(st.top); i>=0; i--){
        cout<<(st.s[i])<<endl;
    }
}

void PushInStack (struct stack *st,int x){
    if((st->top)==(st->size-1)){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        st->top++;
        st->s[st->top]=x;
    }
}

int StackPop(struct stack *st){
    int x=-1;
    if(st->top==-1){
        cout<<"Stack Underflow"<<endl;
        return 0;
    }
    else{
        x=st->s[st->top];
        st->top--;
        return x;
        
    }
    
}

void Peek(struct stack *st, int pos){
    if(st->(top-pos+1)<0){
        cout<<"Invalid Index"<<endl;
    }
    else{
        cout<<st->s[st->(top-pos+1)]<<endl;
    }
}

bool IsEmpty(struct stack *st){
    if(st->top==-1){
        return TRUE;
    }
    return FALSE;
}

bool IsFull(stack *st){
    if(st->top==(st->size)-1){
        return TRUE;
    }
    return FALSE;
}

int StackTop(stack st){
    if(st.top==-1){
        cout<<"No top"<<endl;
        return 0;
    }
    else{
        return st.s[st.top];
    }
}

int main(){
    //Write a function that creates stack from a given array
    CreateStack(&first);
    PushInStack(&first,12);
    PushInStack(&first,24);
    StackPop(&first); //Pops 24
    DisplayStack(first); //Displays the stack as 24 and 12 (if pop wasn't there)
    
    return 0;
}
