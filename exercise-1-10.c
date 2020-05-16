/*
Write a program to copy its input to its output, replacing each tab by \t,
each backspace by \b, and each backflash by \\. This makes tab and backspaces visible in an unambiguous way.
*/
#include <stdio.h>

int main() {
    char c;
    while ((c =getchar()) != EOF) {
        switch (c) {
            case '\\':
                putchar('\\');
                putchar('\\');
                break;
            case '\t':
                putchar('\\');
                putchar('t');
                break;
            case '\b':
                putchar('\\');
                putchar('b');
                break;
            default:
                putchar(c);
        }
    }
    return 0;
}
