#include<stdio.h>
#define MAX 100

int Q[MAX] ;
int front = -1;
int rear = -1 ;

void insertion(int value){
  if(rear = MAX -1){
    printf("Queue Overflow !\n");
  }
  else{
    if(front = -1){
        front = 0;
    }
    rear++ ;
    Q[rear] = value ;
    printf("%d element is inserted !\n",value);
  }
}
void deletion(int value){
  if(front = -1 || rear < front){
    printf("Queue undeflow !\n");
  }
  if(front == rear){
    Q[front] = NULL ;
    front = 0 ;
    rear = 0 ; 
  }
  else{
    Q[front] = NULL ;
    front++ ;
  }
}
void display(){
    printf("After the operation the final Queue !\n");
    for(int i =0  ; i <= rear ; i++){
        printf("%d\t",&Q[i]);
    }
}
int main(){
    int value, choice ;
    while(1){
         printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        if(choice == 1){
            printf("Enter value to insert: ");
            scanf("%d",&value);
            Enqueue(value);
        }
        else if(choice == 2){
            dequeue();
        }
        else if(choice == 3){
            display();
        }
        else{
            break;
        }
    }
    return 0;
}
