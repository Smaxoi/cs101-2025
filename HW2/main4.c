#include <stdio.h>
#include <string.h>

typedef struct BOOKS {
    int id;
    int Price;
    char title[100];
} book_t;

void total_price (book_t bk[]) {
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum = sum + bk[i].Price;
    }
    printf("%d", sum);
}

void list_book (book_t bk[], int p){
    printf("%d %s", bk[p-1].Price, bk[p-1].title);
}

book_t bk[] = {
    {1, 1000, "All the Light We Cannot See"},
    {2,  300, "The 38 Letters from J.D. Rockefeller to his son"},
    {3, 1000, "The Ballad of Songbirds and Snakes"},
    {4,  550, "Killers of the Flower Moon"},
    {5,  870, "Elon Musk"},
    {6, 1344, "Milk and Honey 12-Month 2024"}
};

int main()
{ 
    int p;
    scanf("%d", &p);
    if (p == 0){
        total_price(bk);
    }
    else{
        list_book(bk, p);
    }
    return 0;
    
}
