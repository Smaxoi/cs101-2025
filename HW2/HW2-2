#include <stdio.h>

int main()
{
    FILE*fileO = fopen("main.c", "r");
    FILE*fileC = fopen("main.txt", "w");
    
    char words[100];
    
    while(fgets(words, sizeof(words), fileO) != NULL) {
        
        fprintf(fileC, "%s", words);
        
    }
    
    fclose(fileO);
    fclose(fileC);
    
    return 0;
}
