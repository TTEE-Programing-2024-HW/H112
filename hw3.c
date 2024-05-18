#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("  000000000                     4444               000000000                77777777777777777777             \n");
    printf(" 00000000000                   44444              00000000000               77777777777777777777             \n");
    printf("0000000000000                 444444             0000000000000              7777            7777             \n");
    printf("000       000                444 444             000       000              7777            7777             \n");
    printf("000       000               444  444             000       000              7777            7777             \n");
    printf("000       000              444   444             000       000                              7777             \n");
    printf("000       000             444    444             000       000                             7777              \n");
    printf("000       000            444     444             000       000                            7777               \n");
    printf("000       000           444      444             000       000                           7777                \n");
    printf("000       000          444       444             000       000                          7777                 \n");
    printf("000       000         444        444             000       000                         7777                  \n");
    printf("000       000        444         444             000       000                        7777                   \n");
    printf("000       000       444          444             000       000                       7777                    \n");
    printf("000       000       4444444444444444444444       000       000                      7777                     \n");
    printf("000       000       4444444444444444444444       000       000                     7777                      \n");
    printf("000       000                    444             000       000                    7777                       \n");
    printf("000       000                    444             000       000                   7777                        \n");
    printf("000       000                    444             000       000                  7777                         \n");
    printf("000       000                    444             000       000                 7777                          \n");
    printf("000       000                    444             000       000                7777                           \n");
    printf("0000000000000                    444             0000000000000                7777                           \n");
    printf(" 00000000000                     444              00000000000                 7777                           \n");
    printf("  000000000                      444               000000000                  7777                           \n");
    printf("\n");
    
    
    
    int password=2024; //Set the initial password to 2024
    int inputPassword; //Set the password you input as 'inputpassword'
    int count=0; //set the count of input errors to 0 initially
    
    
    while(count <3) //If the number of input errors is less than 0, then perform
    {
        printf("Please enter a password consisting of 4 digits:"); //Print
        scanf("%d", &inputPassword); //Enter a number
        
        if(password==inputPassword)
        {
            printf("Correct\n"); //Print
            printf("The password you enter is：%d\n", inputPassword); //Print
            break; //中止並結束迴圈
        }
        else
        {
            count++; //"Add 1 to the count because of an input error."
            
            printf("Error, Please try again\a\n");
        }
        if (count==3){
            printf("Warning: Three consecutive incorrect inputs.\n");
        }
        
        printf("%d", inputPassword); //print the password you enter
        
    }
    
    system ("cls"); //clear
}
