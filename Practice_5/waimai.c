#include "stdio.h" 
int main(){
//定义一个变量num，用于存放订单值 
float num;
printf("请输入订单值: ");
scanf("%f", &num);
if(num>20)
num-= 5;
printf("您的本次订单需要支付的金额为%.2f\n",num);
return 0;
}
