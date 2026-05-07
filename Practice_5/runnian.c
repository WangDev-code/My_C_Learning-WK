#include "stdio.h"
int main(){
int year;
printf("请输入一个年份");
scanf("%d",&year);
//能够被4整除，但是不能够被100整除；或者能被400整除
if(year%4==0&&year%100!=0||year%400==0){

	printf("%d是闰年。\n",year);
}
else{
	printf("%d不是闰年。\n",year);
}
return 0;
}
