#include<stdio.h>
struct structure{
    int RollNo;
    char Name [100];
    int Chemistry;
    int Mathematics;
    int Physics;
}   s[5];

int main(){
    for(int i=0; i<5; i++){
        printf("Enter details of std %d\n",i+1);

        printf("Enter your Rollno. :");
        scanf("%d",&s[i].RollNo);

        printf("Enter your name :");
        scanf("%s",s[i].Name);
  


        printf("Enter your Chemistry marks :");
        scanf("%d",&s[i].Chemistry);

        printf("Enter your Mathematics marks :");
        scanf("%d",&s[i].Mathematics);

        printf("Enter your Physics marks :");
        scanf("%d",&s[i].Physics);


        printf("\n");
    }

    int total=0;
    float per=0;

    for(int i=0; i<5; i++){
        printf("Details of student %d:\n",i+1);

        printf("Name: %s\n",s[i].Name);
        printf("RollNo.:%d",s[i].RollNo);
        printf("Chemistry: %d\n",s[i].Chemistry);
        printf("Mathematics:%d",s[i].Mathematics);
        printf("Physics: %d\n",s[i].Physics);


        total = s[i].Chemistry + s[i].Mathematics + s[i].Physics;
        per =(float)total / 3;


        printf("Total marks is :%d\n",total);
        printf("per: %.2f",per); 
    }


    return 0;
}