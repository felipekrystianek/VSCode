#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int licznik;
    int a;
    printf("Podaj a: ");
    scanf("%i", &a);
    licznik=0;

    while (a > 0) {

        licznik++;
        a--;
        printf("a=%i\n",a);
    }

printf("licznik=%i\n",licznik);

}
