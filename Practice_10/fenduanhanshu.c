#include <stdio.h>
int main(){
	int x,y;
	printf("请输入一个整数x的值：");
	scanf("%d",&x);
	if(x<0){
	       y=0;
	}else if(x>=0&&x<10){
		y=x*x*x+5;		
	}else if(x>=10&&x<20){
		y=2*x*x-x-6;	
	}else if(x>=20&&x<30){
		y=x*x+1;	
	}else if(x>=30){
		y=x+3;	
	}
	printf("%d",y);
	return 0;
}
