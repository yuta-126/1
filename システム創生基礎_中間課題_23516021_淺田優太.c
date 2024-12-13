#include <stdio.h>

int main()
{
    char password[100];
    int length, large = 0, small = 0, number = 0;
    
    printf("パスワードを入力してください。");
    scanf("%s", password);
    
    while (password[length] != '\0')
    {
        length++;
    }
    
    if (length < 8) printf("パスワードは８文字以上にしてください。 \n");
    
    for (int i = 0; i < length; i++)
    {
        if (password[i] >= 'A' && password[i] <= 'Z') large = 1;
        if (password[i] >= 'a' && password[i] <= 'z') small = 1;
    }
    
    if (large == 0) printf("大文字のアルファベットを含めてください。 \n");
    if (small == 0) printf("小文字のアルファベットを含めてください。 \n");
    
    if (length >= 8 && small == 1)
    {
        printf("パスワードは強いです。");
    }
    
    return 0;
}