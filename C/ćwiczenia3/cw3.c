#include <stdio.h>

int main() {
    double xa, xb, xs, fa, fb, fs;
    int n = 20;

    // wczytanie początkowych wartości przedziału
    printf("Podaj xa: ");
    scanf("%lf",&xa);
    printf("Podaj xb: ");
    scanf("%lf",&xb);

    // pętla wykorzystująca metodę bisekcji
    for(;;) {
        xs = (xa + xb) / 2.0; // obliczenie środka przedziału
        fa = xa * xa * xa + 3.0 * xa - 7; 
        fb = xb * xb * xb + 3.0 * xb - 7; 
        fs = xs * xs * xs + 3.0 * xs - 7; 

        if (fa * fs < 0) { // jeśli miejsce zerowe znajduje się w przedziale (xa,xs), zawęż przedział do (xa,xs)
            xb = xs;
        } else { // w przeciwnym razie zawęż przedział do (xs,xb)
            xa = xs;
        }

        if (xb - xa <= 0.000001) // jeśli długość przedziału jest mniejsza lub równa zadanej tolerancji, zakończ pętlę
            break;
    }

    // wyświetlenie wyniku
    printf("Miejsce zerowe funkcji: %lf\n", xs);

    return 0;
}
