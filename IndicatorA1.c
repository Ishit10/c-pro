#include <stdio.h>
int main(){
    char str[100];
    char *p=str;
    int length=0;

    printf("Enter your char:");
    gets(str);

    while(*p != '\0'){
        length++;
        p++;
    }
    printf("the length is : %d\n",length);

    return 0;
}