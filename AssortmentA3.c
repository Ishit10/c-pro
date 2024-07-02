#include<stdio.h>
int main(){
    int n,m;
  
    printf("Enter your n:");
    scanf("%d",&n);
    printf("Enter your m:");
    scanf("%d",&m);

    int arr[n][m], transpose[n][m];

    printf("Enter arr elements:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            transpose[j][i]=arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d",transpose[i][j]);
        }
        printf("\n");
    }




    return 0;
}