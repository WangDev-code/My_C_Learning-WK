#include "stdio.h"
int main(){
int x;
int y;
printf("请输入一个整数："); 
scanf("%d",&x);
if(x>0)
{
    y=1;
    printf("y=1");
}
else if(x==0)
{
    y=0;
    printf("y=0");
}
else if(x<0)
{
    y=-1;
    printf("y=-1");
}
return 0;
}
