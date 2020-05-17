#include <stdio.h>
#define IN 1
#define OUT 0
#define MAX_LEN 11
int main() {
    int inWord = IN;
    int lenWord = 0;
    int arr[MAX_LEN];
    int c;
    for (int i = 0; i < MAX_LEN; i++) {
        arr[i] = 0;
    }
    while((c = getchar()) != EOF) {
        lenWord++;
        if (c == ' ' || c == '\t' || c == '\n') {
            inWord = OUT;
            --lenWord;
        }
        if (inWord == OUT) {
            if (lenWord != 0 && lenWord < MAX_LEN) {
                ++arr[lenWord];
            }
            inWord = IN;
            lenWord = 0;
        }
    }
    printf("Vertical Histogram: \n");
    for (int i = 1; i < MAX_LEN; i++) {
        printf("%2d|",i);
        for (int j = 0; j < arr[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
