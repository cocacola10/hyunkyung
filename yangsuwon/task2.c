#include <stdio.h>

void fn_swap(int *a, int *b){
     int *temp = a;
        a = b;
        b = temp;
    printf("a의 값 : %d\n", *a);
    printf("b의 값 : %d\n", *b);

}

int main(){
    int a,b;
    scanf("%d %d",&a , &b );
    printf("a : %d\n", a);
    printf("b : %d\n", b);

    fn_swap(&a, &b);
    return 0;
}