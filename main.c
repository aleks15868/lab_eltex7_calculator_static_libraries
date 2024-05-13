#include "calc.h"
#include <stdio.h>

int main(void)
{               
    int Choise=0;//Selecting menu [0; 5]
    int First_number, Second_number;//Initialization of two elements
    while(Choise<5)
    {
        switch(Choise)
        {
        case 1:
			printf("Output: %d\n", add(First_number,Second_number));//Conclusion of the addition function
            break;
        case 2:
			printf("Output: %d\n", subtract(First_number,Second_number));//Conclusion of deduction function
            break;                                                                                   
        case 3:
            printf("Output: %d\n", multiply(First_number,Second_number));//Conclusion of multiplication function
            break;
        case 4:
			printf("Output: %f\n", divide(First_number,Second_number));//Conclusion of division function
            break;                                                                                  
        default :
            break;
        }
        printf("Menu:\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Exit\n");
        printf("Input:");
        scanf("%d",&Choise);
        if (Choise!=5){
            printf("Input first number:");
            scanf("%d",&First_number);//Entering the element from the keyboard
            printf("Input second number:");
            scanf("%d",&Second_number);//Entering the element from the keyboard
        }
    }

    return 0;
}