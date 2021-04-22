#include <stdio.h>

int main()
{
	char str[101];
	int i;
	printf("Input String:");
	scanf("%s", str);
	printf("------------\n");
	printf("Output String:");
	for(int i=0;str[i]!='\0';i++){
		printf("%c",str[i]+32);
	}
}
