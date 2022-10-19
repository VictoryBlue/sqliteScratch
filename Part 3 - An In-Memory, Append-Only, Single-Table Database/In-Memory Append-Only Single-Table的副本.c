 #include <stdio.h>
void swap(int *x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
	printf("a %d b %d", *x, *y);
}

int main(){
	int a = 100;
	int b = 200;
	swap(&a, &b);
	printf("a %d b %d", a, b);
}
