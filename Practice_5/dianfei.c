#include <stdio.h>
int main(){
double num;
double expense;
printf("请输入用电量: ");
scanf("%f",&num);
if(num<=200){
	expense=num*0.56;
	printf("应缴电费：");
} else if(num<=400){
	expense=200*0.56+(num-200)*0.61;
} else if(num>400){
	expense=200*0.56+200*0.61+(num-400)*0.86;
}

return 0;
}
