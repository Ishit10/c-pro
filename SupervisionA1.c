#include <stdio.h>

int main(){
    FILE *EVEN;
    FILE *ODD;

    EVEN= fopen("EVEN.txt","w");
    ODD= fopen("ODD.txt","w");

    for(int i=40; i<=60; i++){
        if(i%2==0){
            fprintf(EVEN,"%d \n",i);
        }else{
            fprintf(ODD, "%d \n",i);
        }
    }
    fclose(EVEN);
    fclose(ODD);

    return 0;
}