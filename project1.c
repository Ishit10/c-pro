 #include <stdio.h>

int main(){  
   
   int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    char grade;
    
    
    if(marks>90 && marks<=100){
        grade='A' ;
    }else if(marks>80 && marks<=90){
        grade='B' ;
    }else if(marks>70 && marks<=80){
        grade='C' ;
    }else if(marks>60 && marks<=70){
        grade='D' ;
    }else if(marks>=0 && marks<60){
        grade='F' ; 
        
    }else{
        printf("invalid marks\n");
    }
    printf("the grade is : %c",grade);

    switch(grade){
        case 'A':printf(" Excellent work! ");
        break;
        case 'B':printf(" Well done ");
        break;
        case 'C':printf(" Good job ");
        break;
        case 'D':printf(" You passed, but you could do better ");
        break;
        case 'F':printf(" Sorry, you failed ");
        break;
    }

    if(grade>='A' && grade<='D'){
        printf("Congratulations! You are eligible for the next level ");

    }else{
        printf("Please try again next time ");
    }

    return 0;
}