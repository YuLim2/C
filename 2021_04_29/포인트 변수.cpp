#include<stdio.h>
main(){
	int *p;
	int a;
	scanf("%d", &a);
	p = &a; //a�� ����Ű�� q 
	printf("%d\n", *p);
	printf("%d %d\n", p, &a);  
}
