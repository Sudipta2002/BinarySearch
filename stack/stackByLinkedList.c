#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
int isEmpty(struct Node* ptr){
    if(ptr==NULL){
        return 1;
    }else{
        return 0;
    }
}
struct Node* push(struct Node* ptr,int val){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=val;
    temp->next=ptr;
    ptr=temp;

    return temp;
}
struct Node* pop(struct Node*ptr){
    struct Node*temp=ptr;

    ptr=ptr->next;
    free(temp);
    return ptr;
}
void display(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){

    struct Node* top=NULL;
    printf("%d \n",isEmpty(top));
    // top->data=3;
    // top->next=NULL;

    struct Node* newHead=(struct Node*)malloc(sizeof(struct Node));
    newHead=push(top,4);
    newHead=push(newHead,22);
    newHead=push(newHead,7);
    display(newHead);

    printf("After pop \n");
    newHead=pop(newHead);
    display(newHead);
    printf("%d \n",isEmpty(newHead));
    return 0;
}