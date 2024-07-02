#include<stdio.h>
int main(){
    int row,col;
  
    printf("Enter your row:");
    scanf("%d",&row);
    printf("Enter your col:");
    scanf("%d",&col);

    int arr[row][col];
    

    printf("Enter arr elements:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    int rowNumber,colNumber;

    printf("Enter your rowNumber");  
    scanf("%d",&rowNumber);

    int rowsum=0;

    printf("row is %d:",rowNumber);
    for(int j=0; j<col; j++){
        printf("%d",arr[rowNumber][j]);
        rowsum+=arr[rowNumber][j];
    }
    printf("\n the sum of row is %d: %d\n",rowNumber, rowsum);



    printf("Enter your colNumber:");
    scanf("%d",&colNumber);

    int colsum =0;

    printf("col is %d:",colNumber);
    for(int i=0; i<row; i++){
        printf("%d",arr[i][colNumber]);
        colsum+=arr[i][colNumber];
    }
    printf("\n the sum of col is %d: %d\n",colNumber, colsum);



    return 0;
}