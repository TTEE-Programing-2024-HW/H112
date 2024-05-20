#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

int main()
{
    
    printf("--------[Booking System]--------------\n");
    printf("|       a. Available seats            |\n");
    printf("|       b. Arrange for you            |\n");
    printf("|       c. Choose by yourself         |\n");
    printf("|       d. Exit                       |\n");
    printf("---------------------------------------\n");
    //print out these table
    char seats[ROW][COL];
    
    for (int i = 0; i < ROW; ++i) //Initialize seats
    {
        for (int j = 0; j < COL; ++j) 
        {
            seats[i][j] = '-';
        }
    }
    
    // Randomly generate seat arrangement
    srand((unsigned int)time(0)); // Use current time as seed for random number generator
    
    for (int i = 0; i < 10; ++i) 
    {
        int row = rand() % ROW; // Generate random row index
        int col = rand() % COL; // Generate random column index
        seats[row][col] = '*'; // Mark the seat as reserved
    }
    
    
    char choice = ' '; //Declare variable choice and initialize it with a space to store the user's choice
    
    while(choice != 'd')
        { //Continue looping until the user's choice is 'd'
       
        printf("Enter your choice: "); //Prompt the user to enter their choice
        scanf(" %c", &choice); //Read the user's input choice
        
        switch(choice)
            { //Execute the corresponding operation based on the user's choice
           
            case 'a':
                printf("  123456789\n"); //Display seat arrangement
                
                for (int i = 0; i < ROW; ++i)
                {
                    printf("%d ", i + 1);
                    for (int j = 0; j < COL; ++j) 
                    {
                        printf("%c", seats[i][j]); //Display the seat status
                    }
                    printf("\n");
                }
                break;
                
            case 'b':
            {
                int seatnumber;
                printf("Enter the number of seats needed (1-4): ");
                scanf("%d", &seatnumber);

                if (seatnumber >= 1 && seatnumber <= 3) {
                    // Randomly select consecutive seats
                    // Implementation for selecting consecutive seats
                    printf("Consecutive seats have been arranged.\n");
                    
                    // Mark consecutive seats with '@'
                    int startRow = rand() % ROW;
                    int startCol = rand() % COL;
                    for (int i = startRow; i < startRow + seatnumber && i < ROW; ++i) {
                        for (int j = startCol; j < startCol + seatnumber && j < COL; ++j) {
                            seats[i][j] = '@';
                        }
                    }
                }
                else if (seatnumber == 4) {
                    // Arrange seats either in a row or adjacent rows
                    // Implementation for arranging seats either in a row or adjacent rows
                    printf("Seats have been arranged in a row or adjacent rows.\n");
                }
                else {
                    printf("Invalid number of seats. Please enter a number between 1 and 4.\n");
                    break; // Return to main menu
                }

                // Display seat arrangement with '@' for suggested seats
                // Implementation for displaying seat arrangement with '@' for suggested seats
                printf("Seat arrangement with suggested seats marked with '@':\n");
                printf("  123456789\n");
                for (int i = 0; i < ROW; ++i) 
                {
                    printf("%d ", i + 1);
                    for (int j = 0; j < COL; ++j) 
                    {
                        printf("%c", seats[i][j] == '*' ? '*' : (seats[i][j] == '@' ? '@' : '-'));
                    }
                    printf("\n");
                }
                break;
            }
                
                case 'c':
                {
                int seatnumber = 1; // Only input one seat
                int row, col;

                // Initialize seats array
                char seats[ROW][COL];

                // Manually initialize seats array
                for (int i = 0; i < ROW; ++i)
                    {
                    for (int j = 0; j < COL; ++j)
                        {
                        seats[i][j] = '-';
                        }
                    }

                // Prompt user to enter seat in row-col format
                printf("Enter seat (format: row-col): ");
                while (true)
                    {
                    scanf("%d-%d", &row, &col);
                    // Check if input is valid and seat is available
                    if (row < 1 || row > ROW || col < 1 || col > COL || seats[row - 1][col - 1] != '-') 
                    {
                        printf("Invalid input or seat already taken. Please try again.\n");
                        printf("Enter seat (format: row-col): ");
                    }
                    else
                    {
                        // Mark seat as selected
                        seats[row - 1][col - 1] = '@';
                        break;
                    }
                }

                // Display seat arrangement with selected seats marked
                printf("Seat arrangement with your selected seat marked with '@':\n");
                printf("  123456789\n");
                for (int i = 0; i < ROW; ++i) 
                {
                    printf("%d ", i + 1);
                    for (int j = 0; j < COL; ++j)
                        {
                        printf("%c", seats[i][j]);
                        }
                    printf("\n");
                }

                printf("Press any key to confirm your selection and return to the main menu: ");
                while (getchar() != '\n'); // Clear input buffer
                getchar(); // Wait for user to press a key

                // Convert '@' to '*' to signify confirmed selection
                for (int i = 0; i < ROW; ++i) 
                {
                    for (int j = 0; j < COL; ++j) 
                    {
                        if (seats[i][j] == '@') 
                        {
                            seats[i][j] = '*';
                        }
                    }
                }
                break;
            }

            case 'd':
                
        }
    }


