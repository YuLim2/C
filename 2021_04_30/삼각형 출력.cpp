#include<stdio.h>
main(){
	int a, b, c, max, l , n;
	printf("�� ���� ���̸� �Է��ϼ���:");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a+b<=c) printf("�ﰢ�� �ƴ�");
	else if(a==b && b==c) printf("���ﰢ��"); 
	else if(a==b || b==c) printf("�̵ �ﰢ��");
	else if(a*a + b*b ==c*c) printf("�����ﰢ��");
	else printf("�ﰢ��");
	return 0; 
}
