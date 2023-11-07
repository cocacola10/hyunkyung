/*malloc 사용해보는 과제입니다.
1.strdup을 만들어라
2.두 배열을 합치는 함수인 fn_strjoin을 만들어라
프로토타입
char *fn_strjoin(const char *s1, const  char *s2)
3. (bonus 어려워용) 매개변수로 들어온 c로 문자열을 나눈뒤 2차원 배열에 새로 할당하는 함수인 fn_split을 만들어라
프로토타입
char **fn_split(char const *s, char c); (편집됨) */

#include <stdio.h>
#include <string.h>

char *strdup(const char *string);

int main()
{
    char *string = "this is a copy";
    char *newstr;
    /* Make newstr point to a duplicate of string*/
    if((newstr = strdup(string))!=NULL)
        printf("The new string is: %s\n", newstr);
        return 0;

}
