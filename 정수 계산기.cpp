#include <stdio.h>
int main()
{
	double r1, r2, r3;
	int mid, final, suhang;
	double score;
	printf("☆ 과목별 점수 계산 프로그램☆\n");
	printf("중간고사 반영비율과 받은 점수를 입력해라☆ :");
	scanf("%lf %d", &r1, &mid);
	printf("기말고사 반영비율과 받은 점수를 입력해라☆ :");
	scanf("%lf %d", &r2, &final);
	printf("수행평가 반영비율과 받은 점수를 입력해라☆ :");
	scanf("%lf %d", &r3, &suhang);
	score=r1*mid+r2*final+r3*suhang;
	printf("점수는 %.1lf이다!!!\n",score);
	
	if (score>=90){
	printf("☆A다 축하한다☆");
}
	else if (score>=80){
	printf("☆B다 축하한다☆");
}
	else if (score>=70){
	printf("☆C다 축하한다☆");
}
	else{
	printf("☆☆분발 하도록☆☆"); 
}
	 
 } 
