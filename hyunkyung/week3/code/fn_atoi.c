//atoi = ascii to integ.....? C 언어 코딩 도장: 46.1 문자열을 정수로 변환하기
//
int	ft_atoi(const char *str)
{
	int	t;
	int	minus;
	int	result;

	t = 0;
	minus = 1;
	result = 0;
	while (str[t] == '\t' || str[t] == '\n' || str[t] == '\v' ||
				str[t] == '\f' || str[t] == '\r' || str[t] == ' ')
		t++;
	if (str[t] == '-' || str[t] == '+')
	{
		if (str[t] == '-')
			minus *= -1;
		t++;
	}
	while (str[t] >= '0' && str[t] <= '9')
	{
		result *= 10;
		result += str[t] - '0';
		t++;
	}
	return (result * minus);
}



/*
#include <stdio.h>
#include <string.h>

char is_negative(int n);

int main()
{
    int num;
    char m;

    scanf("%d",&num);
    m = is_negative(num);
    printf("%c",m); 
    return m;   
    
     
}

char is_negative(int n)
{
    char m;

    if(n>0)
    {
        m = 'P'; 
    }
     else if(n<0)
    {
        m = 'N'; 
    }
     else  if(n==0)
    {
        m = '0'; 
    }
    return m;
}*/
