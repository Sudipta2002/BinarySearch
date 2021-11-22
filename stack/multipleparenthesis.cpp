#include<stdio.h>
#include<stdlib.h>

struct stack{

    int size;
    int top;
    char *arr;
};
int match(char a,char b){
    if(a=='('&&b==')'){
        return 1;
    }
    if(a=='{'&&b=='}'){
        return 1;
    }
    if(a=='['&&b==']'){
        return 1;
    }
    return 0;
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
void Push(struct stack* ptr,char val){
    if(isFull(ptr)){
        printf("Stack overflow");
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
char Pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Underflow");
        return -1;
    }else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}


int multipleparenthesis(char *exp){
    struct stack* sp;
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));

    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
            Push(sp,exp[i]);
        }else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
            if(isEmpty(sp)){
                return 0;
            }
            char temp=Pop(sp);
            if(!match(temp,exp[i])){
                return 0;
            }
        }
    }
    if(isEmpty(sp)){
        return 1;
    }
}
int main(){

    char * exp="[{(})]";
    if(multipleparenthesis(exp)){
        printf("The parenthesis is matching");
    }else{
        printf("Not matching");
    }
    
    return 0;
}