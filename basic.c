#include<stdio.h>
int queue[5],front=-1,rear=-1;
void enqueue(){
    if(rear==4){
        printf("overflow");

    }else{
        int val;
        printf("/nEnter the value :");
        scanf("%d",&val);
        front=0;
        rear++;
        queue[rear]=val;
    }
}
void show(){
    int i;
    for(i=front; i<=rear;i++){
        printf("\n%d,queue[i]");
    }
}
int main(){
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    show();
}