/*다음기능을 하는 함수를 만드시오
int형 매개변수 n을 받습니다
n이 0보다 크면 ‘P’를 출력하고 0보다 작으면 ‘N’을 출력하고 0이면 ‘0’을 출력합니다
함수 프로토 타입 void is_negative(int n);*/

#include <stdio.h>

void is_negative(int n);

int main()
{
    int a = 0;
    scanf("%d", &a);


    is_negative(a);
    
    return 0;
}

void is_negative(int n)
{
    if(n > 0)
    {
        printf("%c\n", 'P');
    }
    else if(n < 0)
    {
        printf("%c\n", 'N');
    }
    else
    {
        printf("%d\n", 0);
    }
}