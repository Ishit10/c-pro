#include<stdio.h>
int main(){
    int n,m;
  
    printf("Enter your n:");
    scanf("%d",&n);
    printf("Enter your m:");
    scanf("%d",&m);

    int arr[n][m];

    printf("Enter arr elements:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max =arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    printf("%d",max);
    return 0;
}