#include <stdio.h>
int main(void){
	int f[10];
	int i;
	f[0]=1;
	f[1]=1;
	for(i=2;i<=10;i++){
		f[i]=f[i-1]+f[i-2];
	}
	printf("斐波那契数列的前10项为：");
	for(i=0;i<=10;i++){
		printf("%d ",f[i]);
	}
	return 0;
} 
