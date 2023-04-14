#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta;
    
    // Read the coefficients a, b, and c
    printf("Wypisz a, b i c do rownania kwadratowego (ax^2 + bx + c):\n");
    scanf("%f %f %f", &a, &b, &c);
    
    // Calculate the discriminant
    delta = (b * b) - (4 * a * c);
    
    // Print the discriminant
    printf("Twoja delta to: %.2f\n", delta);
    
    return 0;
}
