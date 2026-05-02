#include<stdio.h>

int main(){
    int rows , coloums ;
    printf("Enter the number of rows : ") ;
    scanf("%d",&rows);
    printf("Enter the numbe of coloums : ");
    scanf("%d",& coloums);
    int spar[rows][coloums];
    printf("Enter the elements of the array : ");
    for(int i=0; i<rows ;i++){
        for(int j=0 ;j<coloums ;j++){
            scanf("%d",&spar[i][j]);
        }
    }
    printf("The entered matrix is : \n") ;
     for(int i=0; i<rows ;i++){
        for(int j=0 ;j<coloums ;j++){
            printf("%d \t ",spar[i][j]);
        }
        printf("\n");
    }
    printf("\n   The sparse matrix is :- \n");
    printf("\trows\tcoloums\tvalue\n");
     for(int i=0; i<rows ;i++){
        for(int j=0 ;j<coloums ;j++){
            if(spar[i][j]!=0){
                printf("\t%d \t%d \t%d\n", i,j,spar[i][j]);
            }
           printf("\n");
        } 
    }
    return 0;
}