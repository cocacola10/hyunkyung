#include <stdio.h>


//주소가 매개변수로 들어온 두 개의 정수의 값을 바꾸는 기능
void fn_swap(int *a, int *b);

int main(){
    int a,b;

    printf("정수 두 개를 입력하세요: ");
    scanf("%d %d", &a, &b);
    printf("\n");

    fn_swap(&a,&b);
    printf("바뀐 정수 : %d, %d", a,b);

}

void fn_swap(int *a, int *b){
    int temp;
    temp =(*a);
    (*a) = (*b);
    (*b) = temp;

}

