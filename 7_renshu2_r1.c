#include <stdio.h>
#include <stdlib.h>
int getint(char msg[]){
	char s[80];
    printf("%s",msg);
	gets(s);
	return atoi(s);
}


int main()
{
	int n;
	char msg[]="整数を入力してください：";
	
	n = getint(msg);
	printf("入力した数値：%d",n);
	return 0;
}
