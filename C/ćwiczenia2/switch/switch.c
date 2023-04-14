#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    printf("Podaj x:");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("było 1\n");
        break;
    case 2:
        printf("było 2\n");
        break;
    case 3:
        printf("było 3\n");
        break;
    case 4:
        printf("było 4\n");
        break;
    default:
        printf("było xxxx");
        break;
    }

    printf("Koniec!!!");

}
