#include <stdio.h>

//문자열 s1을 s2로 복사하는 함수
void fn_strcpy(char* s1, char*s2);

int main(){
    char s1[] = "hello world!!";
    char s2[20];

    fn_strcpy(s1, s2);

    printf("s1: ");
    for(char* ptr_s1 = s1; *ptr_s1!='\0' ; ptr_s1++){
        printf("%c", *ptr_s1);
    }
    printf("\n");

    printf("s2: ");
    for(char* ptr_s2 = s2; *ptr_s2 !='\0' ; ptr_s2++){
        printf("%c", *ptr_s2);
    }
    printf("\n");

}

void fn_strcpy(char* s1, char* s2){
    for(int i=0; *(s1+i) !='\0' ; i++){
        *(s2+i) = *(s1+i);
    }
}
