#include<stdio.h>
#define MAX 200 

int stack[MAX];
int top = -1 ;

void push(int value){
    if(top == MAX -1){
      printf("Stack Overflow ! Element can't be pushed.\n");
    }
    else{
        top++ ;
        stack[top] = value ;
        printf("%d is pushed to the stack.",value);
      }
 }
 void pop(int value){
    if(top == -1){
        printf("Stack Empty  ! Element can't be pop.", stack[top]);
        top-- ;
    }
    else{
        printf("%d Element popped !", stack[top]);
        top-- ;
    }
 }
 void display(){
    printf("The Stack after operation is :\n");
    for(int i=0 ; i<=top ;i++){
        printf("%d\t",stack[i]);
    }
 }
 int main(){
    int value, choose;
    while(1){
    printf("\nEnter 1 for push.\nEnter 2 for pop.\nEnter 3 for display.\nEnter 4 for exit.\n");
    printf("Enter the choice :\t");
    scanf("%d",&choose);
       if(choose == 1){
         printf("Enter the element to be pushed : \t");
         scanf("%d",&value);
          push(value);
        }
       else if(choose==2){
          pop(value);
        }
       else if(choose == 3){
           display();
       }
       else if(choose==4){
          break ;
       }
       else{
        printf("Invalid choice enter a valid choice!\n");
       }
    }
    return 0;
 }
   