#include<stdio.h>
#define MAX 200 

int queue[MAX];
int rear = -1;
int front = -1;

void Enqueue(int value){
    if(rear == MAX-1){
        printf("Queue Overflow! elements can't be pushed.\n");
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("%d element is pushed to the queue successfully!\n", value);
    }
}

void dequeue(){
    if(front == -1 || rear < front){
        printf("Queue Underflow! element can't be popped.\n");
    }
    else{
        printf("%d element is popped successfully!\n", queue[front]);
        front++;
    }
}

void display(){
    if(front == -1 || rear < front){
        printf("The Queue is empty!\n");
    }
    else{
        printf("The elements in queue after operation are:\n");
        for(int i = front; i <= rear; i++){
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice, value; 

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