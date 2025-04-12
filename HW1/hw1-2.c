#include <stdio.h>

int main() {
    char ch;
    int count;
     // 用 while 迴圈一組一組讀入「字元 + 數字」的格式，直到輸入結束（EOF）
    while (scanf("%c%d", &ch, &count) == 2) {
        for (int i = 0; i < count; i++) {
            printf("%c", ch);
        }
    }
    
    printf("\n");
    return 0;
}

//(scanf("%c%d", &ch, &count) == 2) 

第一次 scanf("%c%d", &ch, &count)：
讀到 ch = 'A'，count = 4

第二次 scanf(...)：
讀到 ch = 'B'，count = 1

第三次 scanf(...)：
讀到 ch = 'c'，count = 3

第四次 scanf(...)：
讀到 ch = 'f'，count = 3
