#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //用於getch()函數

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
        
    }
    
    system ("cls"); //清除螢幕
    
    printf("----------------------\n");
    printf("|  a. 畫出直角三角形    |\n");
    printf("|  b. 顯示乘法表       |\n");
    printf("|  c. 結束            |\n");
    printf("|                    |\n");
    printf("----------------------\n");
    
    //print主選單
    
    
    
    char word, n, a;
    int times;
    
    printf("請輸入一個字元(a到c之間)：\n");
        scanf(" %c", &word);

        switch (word) {
            case 'a': //輸入字母為a A則執行
            case 'A':
                printf("請輸入一個字元(a到n之間)：\n");
                scanf(" %c", &n);
                
                if (n >= 'a' && n <= 'n') { //若n在a到n之間則可以執行
                    for (char c = 'a'; c <= n; ++c) { //產生'a'到'n'
                        for (char d = 'a'; d <= c; ++d) //在字母序列中列印字母，直到達到當前字母（如a, ab, abc)
                        {
                            printf("%c ", d);
                        }
                        printf("\n");
                    }
                } else {
                    printf("請輸入a到n之間的字母\n");
                }
                break;
                    
            case 'B':
            case 'b':
                printf("請輸入一個數(1到9之間):");
                scanf("%d", &times);
                
                if (times >= 1 && times <= 9) //若數字在1到9間可執行
                {
                    printf("乘法表：\n");
                    for (int i = 1; i <= times; ++i) //i=1時 i小於等於times 則i值+1
                    {
                        for (int j = 1; j <= times; ++j) //j=1時 j小於等於times 則j值+1
                        {
                            printf("%d\t", i * j);
                        }
                        printf("\n");
                    }
                } else {
                    printf("警告，請輸入1到9之間的數!\n");
                }
                getch(); //按任意鍵
                system("cls");
                break;
                    
            case 'C':
            case 'c':
                printf("continue?(y/n)\n");
                getchar(); //吸收換行符號
                scanf(" %c", &a); //吸收輸入
                if(a == 'y') 
                {
                    getch(); //按任意鍵
                    system("cls"); //clear
                    break;
                } 
                else if(a == 'n' || a == 'N')
                {
                    return 0; //end
                } else {
                    printf("請重新輸入\n");
                    break;
                }
            default:
                printf("輸入錯誤，請重新輸入 'a', 'b' 或 'c'。\n");
                break;
        }
        
        return 0;
    }

//這次遇到的問題很多，尤其是因為Xcode沒有conio.h的file讓我在使用getch的時候很卡，會讓我一直在Xcode跟web c++上漆來切去超級麻煩
//希望我可以早點對Xcode上手
