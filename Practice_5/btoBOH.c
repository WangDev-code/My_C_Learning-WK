#include "stdio.h"
int main(){
//定义3个变量 ，给变量i进行了初始化 
int num,temp,i=0; 
//数组bin[32] , 该数组有32个元素
//每个元素相当于一个变量 ， 可以存放整型数 
int bin[32];
//puts("请输入一个十进制整数：");
printf("请输入一个十进制整数: \n");
scanf("%d", &num);//接收键盘输入的一个整数给变量num
temp = num;
if(num==0) {
	printf("二进制: 0\n");
}else{
	while(temp>0){
     bin[i++] = temp % 2;
     temp/=2;
     
	}
	printf("二进制: ");
	while(--i>=0){
	printf("%d",bin[i]);
	
    }
    printf("\n");
    
} 
printf("八进制: %o\n",num);
printf("十六进制: %x\n",num);
printf("该数是%s数\n",(num % 2 == 0) ? "偶" : "奇"); 

return 0;
}
