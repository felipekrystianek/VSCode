#include <stdio.h>

int main() {
    int n = 100;
    int fib[n];
    scanf("%d", &n);

    fib[0] = 0;
    fib[1] = 1;

    // generowanie tablicy z liczbami Fibonacciego
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    // wypisanie tablicy
    printf("Tablica %d liczb Fibonacciego:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }

    // obliczenie sumy liczb Fibonacciego
     int sum = 0;
     for (int i = 0; i < n; i++) {
        sum += fib[i];
     }

    printf("\nSuma liczb Fibonacciego: %d\n", sum);

    return 0;
}
