#include <stdio.h>
main(){
	int a;
	printf("태어난 연도를 입력하세요:");
	scanf("%d", &a);
	if(a%4==0 && a&100!=0) printf("윤년에 태어났습니다.");
	else if(a%400==0) printf("윤년에 태어났습니다.");
	else printf("윤년에 태어나지 않았습니다");
	return 0; 
}
