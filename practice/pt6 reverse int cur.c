#include <stdio.h>

int reverse(int num) {
    static int result = 0;

    if (num == 0) {
        int temp = result;
        result = 0; // 重置靜態變數，避免影響下一次呼叫
        return temp;
    }
    
    result = result * 10 + num % 10;
    return reverse(num / 10);
}

int main() {
    int num = 54321;
    printf("Reverse of %d = %d\n", num, reverse(num));
    return 0;
}
