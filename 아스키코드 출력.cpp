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
		if(str[i]>='A' && str[i]<='Z') printf("%c",str[i]+32);
	else if(str[i]<='z' && str[i]>='a') printf("%c",str[i]-32);
	else printf("%c", str[i]);
	}
}
