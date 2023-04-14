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
    licznik=0;

// liczby podzielne przez 113 i niepodzielne przez coś

    for(i=1;i<=a;i++)
    {
        if (i%113==0)
        {
            printf("i=%i\n",i);
            licznik++;
        }
        
        
    }

printf("licznik=%i\n",licznik);

}



