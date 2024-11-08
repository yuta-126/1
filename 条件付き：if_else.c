#include <stdio.h>

int main()
{
    int k;
    printf("How many students?");
    scanf("%d", &k);
    
    if (k >= 50)
    {
        printf("There are many students!");
    }
    
    else
    {
        printf("There are few students!");
    }
    
    return 0;
    
}