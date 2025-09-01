#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void rand_string(char *str, int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < length; i++) {
        int key = rand() % 26;   
        str[i] = charset[key];
    }
    str[length] = '\0';  
}
void rand_string(char *str, int length);

int main(void) {
    srand((unsigned)time(NULL));

    char word[11];           // 10 chars + '\0'
    rand_string(word, 10);

    printf("Random word: %s\n", word);
    return 0;
}
