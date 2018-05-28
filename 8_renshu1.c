#include <stdio.h>

void array_copy(int *aryTo, int *aryFrom, int len){
	for(int i=0; i<len; i++){
		aryTo[i] = aryFrom[i];
	}
	return 0;
}

int main()
{
	int d1[5], d2[5] = {20, 50, 80, 30, 90};
	
	array_copy(d1,d2,5);
	printf("d1[0]=%d, d1[4]=%d\n", d1[0], d1[4]);
	
	return 0;
}
