#include <stdio.h>
int main(){
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = (a + 24)*(60+b-30);
	printf("%d, %d", (c/60)%24, c%60); 
}
