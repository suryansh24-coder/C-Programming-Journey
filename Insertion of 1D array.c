#include<stdio.h>

int main(){

    int size, searchEle, position, choose;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr[100];

    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }

    while(1){

        printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choose);

        if(choose == 1){

            printf("Enter position to insert: ");
            scanf("%d",&position);

            printf("Enter element to insert: ");
            scanf("%d",&searchEle);

            for(int i = size; i >= position; i--){
                arr[i] = arr[i-1];
            }

            arr[position-1] = searchEle;
            size++;
        }

        else if(choose == 2){

            printf("Enter position for deletion: ");
            scanf("%d",&position);

            for(int i = position-1; i < size-1; i++){
                arr[i] = arr[i+1];
            }

            size--;
        }

        else if(choose == 3){

            printf("Array elements:\n");

            for(int i = 0; i < size; i++){
                printf("%d ", arr[i]);
            }
            printf("\n");
        }

        else{
            return 0;
        }
    }
}