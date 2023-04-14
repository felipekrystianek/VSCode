#include <stdio.h>

// Definicja funkcji obliczającej wartość funkcji f(x) = x^2
double f(double x) {
    return x*x;
}

// Definicja funkcji obliczającej wartość całki oznaczonej funkcji f(x) na przedziale [a,b] metodą prostokątów
double integrate(double a, double b, double dx) {
    double x = a + dx;
    double sum = 0.0;
    while (x <= b) {
        sum += f(x - dx/2.0) * dx;
        x += dx; 
    }
    return sum; 
}
// Zapaytanie o początek i koniec przedziału
int main() {
    double a, b;
    printf("Podaj początek przedziału: ");
    scanf("%lf", &a); 
    printf("Podaj koniec przedziału: ");
    scanf("%lf", &b); 

// Szerokość prostokąta, wywołanie funkcji z podanymi wartościami i wyświetlenie
    double dx = 0.001; 
    double area = integrate(a, b, dx); 
    printf("Pole = %f\n", area); 

    return 0;
}
