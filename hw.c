#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 10

// 定義學生結構
struct Student {
    char name[50];
    int id;
    int mathScore;
    int physicsScore;
    int englishScore;
};

void inputStudentData(Student students[], int n);


int main()
{
// No1
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

    system("cls");

// No2
    printf("------------[Grade System]------------\n");
    printf("|   a. Enter student grades          |\n");
    printf("|   b. Display students grade        |\n");
    printf("|   c. Search for student grade      |\n");
    printf("|   d. Grade ranking                 |\n");
    printf("|   e. Exit system                   |\n");
    printf("--------------------------------------\n");
    char ch;
    printf("請輸入您的選擇(a-e)：");
    scanf("%c", &ch);
    
    
    switch(ch)
    {
            
// No3
        case 'a': //enter a or A
        case 'A':
            system("cls"); //clear
            
            
            Student students[MAX_STUDENTS];

            int n;
            printf("請輸入數字(5-10)：");
            scanf("%d", &n);
            if(n>10||n<5)
            {
                printf("錯誤請重新輸入!");
                break;
            }
          
                for (int i = 0; i < n; ++i) //有幾個學生就輸入多少資料
                {
                    printf("學生 %d 的姓名: ", i + 1);
                    scanf("%s", students[i].name);
                    
                    printf("學號 (6位整數): ");
                    scanf("%d", &students[i].id);
                    
                    printf("數學成績 (0~100): ");
                    scanf("%d", &students[i].mathScore);
                    
                    printf("物理成績 (0~100): ");
                    scanf("%d", &students[i].physicsScore);
                    
                    printf("英文成績 (0~100): ");
                    scanf("%d", &students[i].englishScore);
                    
                    // 檢查成績是否合法
                    if (students[i].mathScore < 0 || students[i].mathScore > 100 ||students[i].physicsScore < 0 || students[i].physicsScore > 100 ||students[i].englishScore < 0 || students[i].englishScore > 100)
                    {
                        printf("錯誤：請輸入有效的成績範圍 (0~100)。\n");
                        --i;
                    }

                }
            break;
        }
            
            
    }


