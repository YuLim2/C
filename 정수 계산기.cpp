#include <stdio.h>
int main()
{
	double r1, r2, r3;
	int mid, final, suhang;
	double score;
	printf("�� ���� ���� ��� ���α׷���\n");
	printf("�߰���� �ݿ������� ���� ������ �Է��ض�� :");
	scanf("%lf %d", &r1, &mid);
	printf("�⸻��� �ݿ������� ���� ������ �Է��ض�� :");
	scanf("%lf %d", &r2, &final);
	printf("������ �ݿ������� ���� ������ �Է��ض�� :");
	scanf("%lf %d", &r3, &suhang);
	score=r1*mid+r2*final+r3*suhang;
	printf("������ %.1lf�̴�!!!\n",score);
	
	if (score>=90){
	printf("��A�� �����Ѵ١�");
}
	else if (score>=80){
	printf("��B�� �����Ѵ١�");
}
	else if (score>=70){
	printf("��C�� �����Ѵ١�");
}
	else{
	printf("�١ٺй� �ϵ��ϡ١�"); 
}
	 
 } 
