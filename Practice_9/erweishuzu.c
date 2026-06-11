#include <stdio.h>
int main(){
	int a[3][5];
	int i,j,count=0;
	printf("请输入15个整数：");
	for (i=0;i<3;i++)
	  for (j=0;j<5;j++)
	scanf("%d",&a[i][j]);
    for (i=0;i<3;i++)
	  for (j=0;j<5;j++)
	if(a[i][j]%2==0){
		count++;
		printf("%d ",a[i][j]);
		printf(" 偶数为%d个。\n",count);
	}
	return 0;
}
	
