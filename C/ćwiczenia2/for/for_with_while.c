#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int licznik;
    int a;
    int i;

    printf("Podaj a: ");
    scanf("%i", &a);

    licznik = 0;
    i = 1;

    while(i <= a) {
        printf("i=%i\n", i);
        i++;
    }

    printf("licznik=%i\n", licznik);

    return 0;
}
