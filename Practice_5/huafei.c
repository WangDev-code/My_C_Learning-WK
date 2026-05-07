#include "stdio.h"
int main(){
int week;
float weekly_cost,total=0;
for(week=1;week<=4;week++){
	printf("请输入第%d周的花费：",week);
	scanf("%f",&weekly_cost);
	total=total+weekly_cost;
}
	printf("这个月你花了%.2元")
return 0;
}
