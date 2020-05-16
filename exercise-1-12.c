/* Write a program that prints its input one word per line*/
#include <stdio.h>
#define IN 1
#define OUT 0

void solve(){
    int c, state;
    state = OUT;
    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == 0) {
                state = 1;
                putchar('\n');
            }
        }
        else {
            state = 0;
            putchar(c);
        }
    }
}

int main() {
    solve();
    return 0;
}
