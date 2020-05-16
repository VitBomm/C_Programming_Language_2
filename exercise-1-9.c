#include <stdio.h>

int main() {
    char c;
    int is_space = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (is_space == 0) {
                putchar(c);
                is_space = 1;
            }
        }
        if (c != ' ') {
            is_space = 0;
            putchar(c);
        }

    }
    return 0;
}
