#include <stdio.h>
int fac(int num){
if (num==0|num==1)
	return 1;
else
	return num*fac(num-1);
}
int main(){
	int num;
	int result;
	printf("输入一个数：");
	scanf("%d",&num);
	result=fac(num);
	printf("%d的阶乘是：%d\n",num,result); 
	return 0;
}


