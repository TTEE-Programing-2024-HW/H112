#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 10

//定義student
struct Student {
    char name[50];
    int id;
    int mathScore;
    int physicsScore;
    int englishScore;
};

struct Student students[MAX_STUDENTS];
int n = 0;

void inputStudentData(struct Student students[], int n);

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
    while (1) {
        printf("------------[Grade System]------------\n");
        printf("|   a. Enter student grades          |\n");
        printf("|   b. Display students grade        |\n");
        printf("|   c. Search for student grade      |\n");
        printf("|   d. Grade ranking                 |\n");
        printf("|   e. Exit system                   |\n");
        printf("--------------------------------------\n");
        char ch;
        printf("請輸入您的選擇(a-e)：");
        scanf(" %c", &ch);
        
        switch(ch)
        {
            case 'a': // enter a or A
            case 'A':
                
// No3
                system("cls"); // clear
                printf("請輸入數字(5-10)：");
                scanf("%d", &n);

                if(n > 10 || n < 5)
                {
                    printf("錯誤請重新輸入!\n");
                    break;
                }

                for (int i = 0; i < n; ++i) // 有幾個學生就輸入多少資料
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
                    if (students[i].mathScore < 0 || students[i].mathScore > 100 ||students[i].physicsScore < 0 || students[i].physicsScore > 100 ||students[i].englishScore < 0 ||students[i].englishScore > 100)
                    {
                        printf("錯誤：請輸入有效的成績範圍 (0~100)。\n");
                        --i; 
                    }
                }
                break;
                
// No4
                
            case 'b':
            case 'B':
                
        
                system("cls");
                
                if (n == 0) {
                    printf("目前沒有學生資料。\n");
                } else {
                    printf("學生資料：\n");
                    for (int i = 0; i < n; ++i) {
                        printf("姓名: %s\n", students[i].name);
                        printf("學號: %d\n", students[i].id);
                        printf("數學成績: %d\n", students[i].mathScore);
                        printf("物理成績: %d\n", students[i].physicsScore);
                        printf("英文成績: %d\n", students[i].englishScore);
                        float average = (students[i].mathScore + students[i].physicsScore + students[i].englishScore) / 3.0f;
                        printf("平均成績: %.1f\n\n", average);
                    }
                }
                printf("按任意鍵回到主選單...");
                getchar();
                getchar();
                break;
                
// No 5
            case 'c':
            case 'C':
                system("cls"); // 清除螢幕
                
                
                if (n == 0)
                {
                    printf("目前沒有學生資料。\n");
                } 
                else
                {
                    char searchName[50];
                    int found = 0;
                    printf("請輸入要搜尋的姓名：");
                    scanf("%s", searchName);
                    for (int i = 0; i < n; ++i) {
                        int j = 0;
                        while (students[i].name[j] != '\0' && searchName[j] != '\0' && students[i].name[j] == searchName[j]) 
                        {
                            ++j;
                        }
                        if (students[i].name[j] == '\0' && searchName[j] == '\0')
                        {
                            printf("姓名: %s\n", students[i].name);
                            printf("學號: %d\n", students[i].id);
                            printf("數學成績: %d\n", students[i].mathScore);
                            printf("物理成績: %d\n", students[i].physicsScore);
                            printf("英文成績: %d\n", students[i].englishScore);
                            float average = (students[i].mathScore + students[i].physicsScore + students[i].englishScore) / 3.0f;
                            printf("平均成績: %.1f\n", average);
                            found = 1;
                            break;
                        }
                    }
                    if (found == 0) {
                        printf("資料不存在。\n");
                    }
                }
                printf("按任意鍵回到主選單...");
                getchar();
                getchar();
                break;
//No 6
            case 'd':
            case 'D':
                system("cls"); // 清除螢幕
                if (n == 0) 
                {
                    printf("目前沒有學生資料。\n");
                }
                else
                {
                    // 計算學生的平均成績
                    float averageScores[MAX_STUDENTS];
                    for (int i = 0; i < n; ++i) 
                    {
                        averageScores[i] = (students[i].mathScore + students[i].physicsScore + students[i].englishScore) / 3.0f;
                    }

                    // 根據平均成績排序學生資料
                    for (int i = 0; i < n - 1; ++i) 
                    {
                        for (int j = 0; j < n - i - 1; ++j) 
                        {
                            if (averageScores[j] < averageScores[j + 1]) 
                            {
                                float tempAverage = averageScores[j];
                                averageScores[j] = averageScores[j + 1];
                                averageScores[j + 1] = tempAverage;
                                
                                struct Student tempStudent = students[j];
                                students[j] = students[j + 1];
                                students[j + 1] = tempStudent;
                            }
                        }
                    }

                    printf("按平均成績高低列出的學生資料：\n");
                    for (int i = 0; i < n; ++i) {
                        printf("姓名: %s\n", students[i].name);
                        printf("學號: %d\n", students[i].id);
                        printf("平均成績: %.1f\n", averageScores[i]);
                        printf("\n");
                    }
                }
                printf("按任意鍵回到主選單...");
                getchar();
                getchar();
                break;

        }
    }
    
    return 0;
}

            
        }
    }
    
    return 0;
}
                   

                        
