#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};
void Push(struct stack* ptr,int val){
    if(isFull(ptr)){
        printf("Stack overflow");
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int Pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Nothing to remove");
        return -1;
    }else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int isEmpty(struct stack* ptr){
    if(ptr->top ==-1){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct stack* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }return 0;
}
int peek(struct stack* ptr,int i){
    if(ptr->top-i+1<0){
        printf("Invalid");
        return -1;

    }else{
        return ptr->arr[ptr->top-i+1];
    }
}
int main(){

    // struct stack s;
    // s.size=80;
    // s.top=-1;
    // s.arr=(int *)malloc(s.size * sizeof(int));
    
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    
    s->size=6;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));
    
    //check if the stack is empty

    Push(s,10);
    Push(s,20);
    Push(s,30);
    // int val=Pop(s);
    // printf("%d is popped out\n",val);

    for(int j=1;j<=s->top+1;j++){
        printf("The value at position %d is %d \n",j,peek(s,j));
    }
    if(isEmpty(s)){
        printf("The stack is empty");
    }else{
        printf("The stack is not empty");
    }
    return 0;
}