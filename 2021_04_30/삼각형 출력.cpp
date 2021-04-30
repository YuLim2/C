#include<stdio.h>
main(){
	int a, b, c, max, l , n;
	printf("세 변의 길이를 입력하세요:");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a+b<=c) printf("삼각형 아님");
	else if(a==b && b==c) printf("정삼각형"); 
	else if(a==b || b==c) printf("이등변 삼각형");
	else if(a*a + b*b ==c*c) printf("직각삼각형");
	else printf("삼각형");
	return 0; 
}
