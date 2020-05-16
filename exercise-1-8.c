#include <stdio.h>

int main() {
    char c;
    int blank = 0;
    int tab = 0;
    int newlines = 0;
    while ((c = getchar()) != EOF) {
        switch (c) {
            case ' ':
                blank++; break;
            case '\t':
                tab++; break;
            case '\n':
                newlines++; break;
            default:
                break;
        }
    }
    printf("Blank:    %d\n", blank);
    printf("NewLines: %d\n", newlines);
    printf("Tab:      %d\n", tab);
    return 0;
}
