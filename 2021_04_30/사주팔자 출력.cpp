#include<stdio.h>
main(){
	int a, b, c, d;
	printf("�¾ ������ ��, ���� �Է��� �ּ���:");
	scanf("%d %d %d", &a, &b, &c);
	d=a-b+c;
	if(d%10==0)
		printf("���");
	else
		printf("�׷�����");
	return 0; 
}
