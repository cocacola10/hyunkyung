#include <stdio.h>

void fn_swap(int *a, int *b){
     int temp = *a;
        *a = *b;
        *b = temp;
}

int main(){
    int a,b;
    scanf("%d %d",&a , &b );
    printf("a : %d\n", a);
    printf("b : %d\n", b);

    fn_swap(&a, &b);

    printf("a : %d\n", a);
    printf("b : %d\n", b);
    return 0;
}