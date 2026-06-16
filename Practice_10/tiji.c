#include <stdio.h>
int main(){
	float v,r,pai=3.14;
	printf("输入一个球的半径： ");
	scanf("%f",&r);
	v=4.0/3*pai*r*r*r;
	printf("此球的体积为%.2f",v);
	return 0;
}
