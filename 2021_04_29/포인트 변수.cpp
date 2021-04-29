#include<stdio.h>
main(){
	int *p;
	int a;
	scanf("%d", &a);
	p = &a; //a를 가리키는 q 
	printf("%d\n", *p);
	printf("%d %d\n", p, &a);  
}
