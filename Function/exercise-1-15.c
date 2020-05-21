#include <stdio.h>

float fahrtocelsius(float fahr) {
   return (5.0/9.0) * (fahr - 32);
}

int main() {
    float upper, lower, step;
    float fahr, celsius;
    upper = 300;
    lower = 0;
    step = 20;
    fahr = lower;
    while (fahr <= upper) {
        celsius = fahrtocelsius(fahr);
        printf("%.2f   %.2f\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}
