#include <stdio.h>
int main(void){
	int a[5]={12,13,55,88,99,};
	int i;
	int min,max;
	max=a[0];
	min=a[0];
	for (i=1;i<5;i++){
		if(max<a[i]){
			max=a[i];
		}
		if(min>a[i]){
			min=a[i] ;
		}
	}
	printf("数组最大值为%d",max);
	printf("数组最小值为%d",min);
	return 0;
}
