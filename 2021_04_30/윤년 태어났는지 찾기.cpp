#include <stdio.h>
main(){
	int a;
	printf("�¾ ������ �Է��ϼ���:");
	scanf("%d", &a);
	if(a%4==0 && a&100!=0) printf("���⿡ �¾���ϴ�.");
	else if(a%400==0) printf("���⿡ �¾���ϴ�.");
	else printf("���⿡ �¾�� �ʾҽ��ϴ�");
	return 0; 
}
