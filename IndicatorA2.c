#include <stdio.h>
    int cube(int *p, int r, int c){
        printf("Cube of all element:");

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                int element=*(p+i*c+j);
                printf("%d",element*element*element);
            }
            printf("\n");
        }
    }

int main(){
    int r,c;

    printf("Enter your r:");
    scanf("%d",&r);

    printf("Enter your c:");
    scanf("%d",&c);

    int arr[r][c];

    printf("Enter the elements for arr:");

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    cube((int *)arr , r, c);
   
    return 0;
}