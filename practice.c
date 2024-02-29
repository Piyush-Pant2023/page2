#include<stdio.h>
int stack[5],top=-1;
    void push(){
        int val;
        if(top==5){
            printf("overflow");
      }else{
        printf("enter the no\n");
        scanf("%d",&val);
        top=top+1
        stack[top]=val;
      }
    }
void show(){
    int i;
    for(i=0;i<=top;i++){
        printf("\n%d",stack[i]);
    }
}
int main(){
    push();
    push();
    push();
    push();
}