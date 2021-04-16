#include <stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("ÇÕ: %d\n", a+b);
	printf("Â÷: %d\n", a-b);
	printf("°ö: %d\n", a*b);
	printf("¸ò: %d\n", a/b);
	printf("³ª¸ÓÁö: %d\n", a%b);
	printf("³ª´« °ª: %.2lf", (double)a/b); 
	
}
