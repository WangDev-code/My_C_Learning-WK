#include <stdio.h>
#define N 60

int main(){
int i,num;
float max,min,avg,score[N],sum;
avg=sum=0;
printf("请输入班级总人数："); 
scanf("%d",&num);
for(i=1;i<=num;i++){
	printf("请输入第%d个同学的成绩：",i); 
	scanf("%f",&score[i]);
}
max=min=score[1];
for(i=1;i<=num;i++){
	if(score[i]>max)
	   max=score[i];
	if(score[i]<min)
	   min=score[i];
	sum+=score[i];
}
avg=sum/num;
printf("该班同学该门课程最高分为：%.2f分\n",max);
printf("该班同学该门课程最低分为：%.2f分\n",min);
printf("该班同学该门课程平均分为：%.2f分\n",avg);
return 0;
}
