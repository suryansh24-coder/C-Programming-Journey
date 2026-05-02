#include<stdio.h>

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int num;

    printf("Enter the number whose fibonacci series you want: ");
    scanf("%d",&num);

    printf("The fibonacci series is:\n");

    for(int i=0; i<num; i++){
        printf("%d ", fibonacci(i));
    }

    return 0;
}