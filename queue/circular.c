#include<stdio.h>
#include<stdlib.h>

struct queue{

    int size;
    int front;
    int rear;
    int *arr;
};
int isEmpty(struct queue* q){
    if(q->rear==q->front){
        return 1;
    }
    return 0;
}
int isFull(struct queue* q){
    if((q->rear+1)%q->size==q->front){
        return 1;
    }
    return 0;
}
int dequeue(struct queue* q){
    int a=-1;
    if(isEmpty(q)){
        printf("Nothing to remove");
    }else{
        q->front=(q->front+1)%q->size;
        a=q->arr[q->front];
    }
    return a;
}
void enqueue(struct queue* q,int val){
    if(isFull(q)){
        printf("Overflow");
    }else{
        q->rear=(q->rear+1)%q->size;
        q->arr[q->rear]=val;
    }

}

int main(){
    //circular Queue

    struct queue* Q=(struct queue*)malloc(sizeof(struct queue));
    
    Q->size=5;
    Q->front=Q->rear=0; //front should be 0
    Q->arr=(int *)malloc(Q->size*sizeof(int));

    // printf("%d \n",isEmpty(Q));
    enqueue(Q,5); 
    enqueue(Q,6);
    enqueue(Q,7);
    enqueue(Q,8);
    dequeue(Q);
    dequeue(Q);
    dequeue(Q);
    dequeue(Q);
    // isEmpty(Q);
    printf("%d \n",isEmpty(Q));
    printf("%d \n",isFull(Q));

    return 0;
}