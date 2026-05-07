#include "stdio.h"
int main(){
int x;
printf("请输入一个整数："); 
scanf("%d", &x);
//x=x+10;
x+=10;
printf("x=%d\n",x);
return 0;
}
