#include <stdio.h>
#include <stdlib.h>
int getint(char msg[]){
	char s[];
    printf("整数を入力してください：\n");
	gets("%s",s);
	return atoi(s);
}


int main()
{
	int n;
	char msg[];
	
	msg[] = '整数を入力してください：\n');
	n = getint(msg[]);
	printf("入力した数値：%d,n);
	return 0;
}
