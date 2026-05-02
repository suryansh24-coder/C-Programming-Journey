#include<stdio.h>

int main(){
    int size , search;
    
    printf("Enter the size of the array :\t");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the %d elements in the array : ",size);
    for(int i=0 ; i<size ; i++){
        scanf("%d",&arr[i]);
    }

    printf("The inserted array is : \n");
    for(int i=0 ; i<size ; i++){
        printf("%d\t", arr[i]);
    }

    printf("\nEnter the element to be searched : \t");
    scanf("%d",&search);

    int found = 0;

    for(int i=0 ; i<size ; i++){
        if(search == arr[i]){
            printf("Element found!\n%d at index %d\n",arr[i],i);
            found = 1;
            break;
        }
    }

    if(found == 0){
        printf("Element not found!\n");
    }

    return 0;
}