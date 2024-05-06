#include <stdio.h>
#include <stdlib.h>

int main
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
    
    //個人頁面
    
    int password=2024; //設定初始密碼為2024
    int inputPassword; //設定要輸入的密碼為inputPassword
    int count=0; //設定計算輸入錯誤的次數，一開始為0
    
    
    while(count <3) //若輸入錯誤次數小於0，執行
    {
        printf("請輸入4個數字的密碼:"); //print
        scanf("%d", &inputPassword); //輸入數字
        
        if(password==inputPassword)
        {
            printf("輸入正確\n"); //print
            printf("您輸入的密碼為：%d\n", inputPassword); //print
            break; //中止並結束迴圈
        }
        else
        {
            count++; //因輸入錯誤所以count+1
            printf("錯誤, 請再輸入一次\a\n");
        }
        if (count==3){
            printf("警告已連續輸入錯誤三次!\n");
        }
        
        printf("%d", inputPassword); //print輸入的數值
        system ("CLS"); //清除螢幕
    }
}


printf("----------------------\n");
printf("|  a. 畫出直角三角形    |\n");
printf("|  b. 顯示乘法表       |\n");
printf("|  c. 結束            |\n");
printf("|                    |\n");
printf("----------------------\n");

//print主選單





char word, n;
    printf("請輸入一個字元(a到c之間)：\n");
    scanf(" %s", &word);

switch (word) 
    {
    case 'a': //輸入字母為a A則執行
    case 'A':
        printf("請輸入一個字元(a到n之間)：\n");
        scanf(" %c", &n);
        
        if (n >= 'a' && n <= 'n') //若n在a到n之間則可以執行
        {
            for (char c = 'a'; c <= n; ++c) //產生'a'到'n'
            {
                for (char d = 'a'; d <= c; ++d) //在字母序列中列印字母，直到達到當前字母（如a, ab, abc)
                {
                    printf("%c ", d);
                }
                printf("\n");
            }
        }
        else //其餘執行
        {
            printf("請輸入a到n之間的字母\n");
        }
        
        break;
    }

    return 0;
}

