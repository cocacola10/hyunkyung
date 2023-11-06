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










//출처 https://www.ibm.com/docs/ko/i/7.3?topic=functions-strdup-duplicate-string






























//malloc은 동적할당과 관련된 것. 함수 프로토타입은 void* malloc(size_t size)이다. 
//void*가 자료형, malloc이 함수이름, size_t size가 매개변수이다. 
//


/*malloc 사용해보는 과제입니다.
1.strdup을 만들어라
2.두 배열을 합치는 함수인 fn_strjoin을 만들어라
프로토타입
char *fn_strjoin(const char *s1, const  char *s2)
3. (bonus 어려워용) 매개변수로 들어온 c로 문자열을 나눈뒤 2차원 배열에 새로 할당하는 함수인 fn_split을 만들어라
프로토타입
char **fn_split(char const *s, char c); (편집됨) */

/*1. 동적할당 malloc, free 에 대해서
동적할당이라는 것은 프로그램 실행중에 동적으로 메모리를 할당하는 것을 말합니다.
여기서! 중요한것은 동적으로 메모리를 할당할때 Heap(힙)영역에 할당을 한다는 것 입니다.
메모리 영역에 대해서 궁금하시다면 위에 [운영체제] 프로세스랑? 부분에 정리를 해놓았습니다.
함수 원형은 void* malloc(size_t size) 입니다.
해당 함수를 사용하기 위해서는 <stdlib.h> 헤더파일을 include 해야합니다.
함수 동작은 매개변수에 해당하는 size_t 만큼의 크기만큼 메모리를 할당하고
성공하면 : 할당한 메모리의 첫번째 주소 리턴
실패하면 : NULL 리턴
제일 중요한점
할당한 메모리는 꼭!꼭!꼭!꼭! 해제 해주어야합니다.
그렇지 않으면 메모리 릭, 메모리 누수가 발생합니다. (어마어마하게 자주 발생하니 꼭 잊지 말아주세요)

출처: https://blockdmask.tistory.com/290
*/