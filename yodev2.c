#include <stdio.h>
int main()
{

    int age;
    float vkindeks, boy;
    int kilo;

    printf("Yasinizi giriniz: ");
    scanf("%d", &age);
    
    printf("Kilonuzu giriniz(kilogram): ");
    scanf("%d", &kilo);

    printf("Boyunuzu giriniz(metre):");
    scanf("%f", &boy);

    vkindeks = kilo / (boy * boy);
    //k
    if (18.50 <= vkindeks && vkindeks <= 24.99 && 13 <= age && age <= 17)
    {
        printf("\nKabul edildiniz!");
    }
    else
        printf("\nKabul edilmediniz.");

    return 0;
}