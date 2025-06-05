#include <stdlib.h>

int* clone_array(int* np, int n) {
    int* new_array = (int*)calloc(n, sizeof(int)); 
    for (int i = 0; i < n; i++) {
        new_array[i] = np[i];
    }
    return new_array;
}

void print_array(int* p, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", p[i]);
        if (i < n - 1) printf(", ");
    }
    printf(",\n"); // 符合範例的格式，最後一個後面仍有逗號
}

int main() {
    int n = 5;
    int np[5] = {0, 1, 2, 3, 4};
    int* p = clone_array(np, n);
    print_array(p, n);
    free(p); // 釋放動態記憶體
    return 0;
}
