#include <stdio.h>
int main()
{

    int sayi;
    float cevap;
    int k;

    printf("bir sayi giriniz:");
    scanf("%d", &sayi);

    cevap = 0;

    for (k = 1; k <= sayi; k++);
        
    {

        cevap += (k * k + 1.23) / (k - 0.25);
    }

    printf("Cevabiniz: %f \n", cevap);
    return 0;
}
