#include <stdio.h>
int main(){
    int n;
    printf("Enter your n:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter arr elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("arr of nagetive elements");
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            printf("%d",arr[i]);
        }
    }
    printf("\n");

    return 0;
}