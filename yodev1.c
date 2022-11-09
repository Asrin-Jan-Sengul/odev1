#include <stdio.h>
int main()
{
    int ing;
    int ales;
    int agno;
    int toplampuan;
    printf("Ingilizce puaninizi girin:");
    scanf("%d", &ing);

    printf("Ales puaninizi girin");
    scanf("%d", &ales);

    printf("Agno puaninizi girin");
    scanf("%d", &agno);

    toplampuan = ales / 2 + ing / 4 + agno / 4;
     printf("%d \n", toplampuan);
    if (toplampuan > 60)
    {
        printf(" Puaniniz:%d", toplampuan);
        printf("\n Siralamaya girebilirsiniz!");
    }
    else
    {
        printf("\nPuaniniz:%d", toplampuan);
        printf("\nSiralamaya giremezsiniz!");
    }
    
    return 0;
}