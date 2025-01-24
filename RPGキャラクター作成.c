#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n1,n2,n3;
    srand(time(0));
    n1 = (rand() % 21);
    n2 = (rand() % (21-n1));
    n3 = 20-n1-n2;
    
    printf("ステータスは記憶力が%d、瞬発力が%d、魅力が%dです。\n",n1,n2,n3);
    if(n1>n2 && n1>n3)
    {
        printf("クラスはmageです。\n");
    }
    if(n2>n3 && n2>n1)
    {
        printf("クラスはknightです。\n");
    }
    if(n3>n1 && n3>n2)
    {
        printf("クラスはthiefです。\n");
    }
    if(n1==n2 && n1>n3)
    {
        printf("あなたはmageとknightのデュアルクラスです。");
    }
    if(n1==n3 && n1>n2)
    {
        printf("あなたはmageとthiefのデュアルクラスです。");
    }
    if(n2==n3 && n2>n1)
    {
        printf("あなたはknightとthiefのデュアルクラスです。");
    }
    
    return 0;
}