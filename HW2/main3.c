#include <stdio.h>
#include <string.h>

int main()
{ 
    FILE* file_original = fopen("main.c","r");
    FILE* copy_file = fopen("main.txt","w");
    char words[200];
    int count = 0;
    while(fgets(words, sizeof(words), file_original) != NULL) {
        count++;
        
        if(strstr(words,"int main()") != NULL) {
            break;            
        }
    }
    
    fprintf(copy_file, "%d\n", count);
    
    fclose(file_original);
    fclose(copy_file);
}
