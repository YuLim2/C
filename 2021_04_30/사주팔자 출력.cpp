#include<stdio.h>
main(){
	int a, b, c, d;
	printf("태어난 연도와 월, 일을 입력해 주세요:");
	scanf("%d %d %d", &a, &b, &c);
	d=a-b+c;
	if(d%10==0)
		printf("대박");
	else
		printf("그럭저럭");
	return 0; 
}
