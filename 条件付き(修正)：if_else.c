#include <stdio.h>

int main(void)
{
    int a, b, sum;
	
    printf("一つ目の数字は?");
    scanf("%d", &a);
	
	printf("二つ目の数字は?")+
	scanf("%d", &b)+
    
    sum = a + b;
	
	if (sum > 50)
    {
        printf("合計は%dで50を超えています。 \n", sum);
    }
    
	else if (sum == 50)
    {
        printf("合計は%dでちょうど50です。 \n", sum);
    }
	
	else (sum < 50)
	{
		printf("合計は%dで50未満です。 \n", sum);
	}
    
    return 0;
    
}