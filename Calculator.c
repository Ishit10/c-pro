#include <stdio.h>
void Addition() {
    int num1, num2;
    printf("Enter your num1: ");
    scanf("%d", &num1);
    printf("Enter your num2: ");
    scanf("%d", &num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, num1 + num2);
}

void Subtraction() {
    int num1, num2;
    printf("Enter your num1: ");
    scanf("%d", &num1);
    printf("Enter your num2: ");
    scanf("%d", &num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, num1 - num2);
}

void Multiple() {
    int num1, num2;
    printf("Enter your num1: ");
    scanf("%d", &num1);
    printf("Enter your num2: ");
    scanf("%d", &num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, num1 * num2);
}

void Division() {
    int num1, num2;
    printf("Enter your num1: ");
    scanf("%d", &num1);
    printf("Enter your num2: ");
    scanf("%d", &num2);
    if (num2 != 0) {
        printf("The sum of %d and %d is: %.2f\n", num1, num2, (float)num1 / num2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

void Modulow() {
    int num1, num2;
    printf("Enter your num1: ");
    scanf("%d", &num1);
    printf("Enter your num2: ");
    scanf("%d", &num2);
    if (num2 != 0) {
        printf("The modulus of %d and %d is: %d\n", num1, num2, num1 % num2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}





int main(){
    int choice;
    do{
    printf("\n1.Addition ");
    printf("\n2.Subtraction ");
    printf("\n3.Multiple ");
    printf("\n4.Division ");
    printf("\n5.Modulow ");
    printf("\n6.Exit ");

    
    printf("Enter your choice: ");
    scanf("%d",&choice);

    
    
        switch(choice){
        case 1:
        Addition();
        break;
        case 2:
        Subtraction();
        break;
        case 3:
        Multiple();
        break;
        case 4:
        Division();
        break;
        case 5:
        Modulow();
        break;
        case 6:
        printf("Exiting the program.\n");
        break;
        default:
        printf("Invalid choice");
        }
        
    }while(choice<6);


    return 0;
}