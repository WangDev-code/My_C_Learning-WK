#include <stdio.h>
int main(){
	float high,weight,x;
	printf("请输入某人的身高：");
	scanf("%f",&high);
	weight=(high-100)*0.9;
	x=weight*2;
	printf("此人的标准体重为%.2f斤",x);
	return 0;
}
