#include <stdio.h>
int main(){
	double a,b,result;
	char ch;
	printf("请输入第一个数字：");
	scanf("%lf",&a);
	printf("请输入第二个数字");
    scanf("%lf",&b);
	printf("请输入运算符号(+,-,*,/):");
	scanf(" %c",&ch);	 
	switch(ch){
	case'+':
		result=a+b;
		printf("%.2f+%.2f=%.2f\n",a,b,result);
		break;
	case'-':
		result=a-b;
	    printf("%.2f-%.2f=%.2f\n",a,b,result);
	    break;
	case'*':
		result=a*b;
		printf("%.2f*%.2f=%.2f\n",a,b,result);
		break;
	case'/':
		if(b==0){
			printf("除数不能为0");
		}else{
		result=a/b;
		printf("%.2f/%.2f=%.2f\n",a,b,result);}
		break;
	default:
		printf("输入的运算符有误\n");
		break;
	}
	return 0;
}
