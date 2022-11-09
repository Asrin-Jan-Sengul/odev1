#include <stdio.h>
int main()
{

    int sayi;
    int k;
    int l;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    for (k = 1; k <= sayi; k++)
    {
        for (l = 1; l <= k; l++)
        {
            printf(" #");
        }
        printf("\n");
    }

    return 0;
}