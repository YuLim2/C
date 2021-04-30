#include <stdio.h>
main(){     //10+10 %d %c %d
	int a=0, b=0;
	int o;
	char c;
	scanf("%d %o %d", &a, &o, &b);
	switch(c){
		case '+': 
			printf("%d", a+b);
			break;
		case '-':
			printf("%d", a-b);
			break;
		case '*':
			printf("%d", a*b);
			break;
		case '/':
			printf("0.2f", (double)a/b);
		}
	}

