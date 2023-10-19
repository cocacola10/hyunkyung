#include <stdio.h>

void fn_swap(int *a, int *b)
{
	int temp = int *a;
	 int *a =  int *b;
	 int *b =  int temp;
}

int main(void){

	int a = 10, b = 20;

	swap(&a, &b);
	printf("a=%d, b=%d\n", &a, &b);

	return 0;
}

