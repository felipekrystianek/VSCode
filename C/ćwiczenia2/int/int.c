#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x;
    printf("Podaj x:");
    scanf("%lf", &x);
    if (x > 5) 
    {
        x = x * x;
    }
    printf("x=%f", x);

    return 0;
}
