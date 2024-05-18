#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

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
    
    printf("--------[Booking System]--------------\n");
    printf("|       a. Available seats            |\n");
    printf("|       b. Arrange for you            |\n");
    printf("|       c. Choose by yourself         |\n");
    printf("|       d. Exit                       |\n");
    printf("---------------------------------------\n");
//print out these table
    char seats[ROW][COL];

        // Initialize seats
        for (int i = 0; i < ROW; ++i) {
            for (int j = 0; j < COL; ++j) {
                seats[i][j] = '-';
            }
        }

        // Randomly generate seat arrangement
        srand((unsigned int)time(0)); // Use current time as seed for random number generator
        for (int i = 0; i < 10; ++i) {
            int row = rand() % ROW; // Generate random row index
            int col = rand() % COL; // Generate random column index
            seats[row][col] = '*'; // Mark the seat as reserved
        }
    
    
    char choice = ' '; //Declare variable choice and initialize it with a space to store the user's choice
    
    while(choice != 'd') { //Continue looping until the user's choice is 'd'
        printf("Enter your choice: "); //Prompt the user to enter their choice
        scanf(" %c", &choice); //Read the user's input choice

        switch(choice) { //Execute the corresponding operation based on the user's choice
            case 'a':
                //Display seat arrangement
                printf("  123456789\n");
                for (int i = 0; i < ROW; ++i) {
                    printf("%d ", i + 1);
                    for (int j = 0; j < COL; ++j) {
                        printf("%c", seats[i][j]); //Display the seat status
                    }
                    printf("\n");
                }
                break;
            case 'b':
            case 'c':
                
            case 'd':
                
            default:
                printf("Invalid choice. Please try again.\n"); //Notify the user of an invalid choice and prompt them to try again
        }
    }
}


