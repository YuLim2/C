#include <stdio.h>

int main()
{
    int score[5];
    int i, max=0,sum =0;
    for(i=0;i<5;i++){
            printf("%d번 학생의 프로그래밍 성적을 입력해라:", i+1);
    scanf("%d", &score[i]);
    }
    for(i=0; i<5;i++) sum += score[i];
    printf("합계: %d\n", sum);
    printf("평균: %.2lf\n",(double)sum/5);

    for(i=0;i<5;i++) 
    if(max<score[i])
    max =score[i];
    printf("최고점:%d", max);

}

