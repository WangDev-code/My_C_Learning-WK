#include <stdio.h>
int main(void){
	int team[7];
	int i;
	for (i = 0;i < 7; i++) {
		team[i]=i+5; 
	}
	for(i=0; i<7; i++){
		printf("第%d球员的得分是：%d\n",i+1,team[i]);
	return 0;
	}
}
