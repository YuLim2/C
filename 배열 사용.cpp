#include <stdio.h>

int main()
{
    int score[5];
    int i, max=0,sum =0;
    for(i=0;i<5;i++){
            printf("%d�� �л��� ���α׷��� ������ �Է��ض�:", i+1);
    scanf("%d", &score[i]);
    }
    for(i=0; i<5;i++) sum += score[i];
    printf("�հ�: %d\n", sum);
    printf("���: %.2lf\n",(double)sum/5);

    for(i=0;i<5;i++) 
    if(max<score[i])
    max =score[i];
    printf("�ְ���:%d", max);

}

