#include <stdio.h>
#define N 100
struct athlete{
	unsigned num;
	char name[16];
	char sex;
	int age;
	char nationalilty[20];
	float score;
	int ranking;
};
int main(void){
	struct athlete ath[100];
	char ch;
	int i=0,n;
	while (1){
	  printf("Please input %d athlete information\n",i+1);
	  printf("num: ");
	  scanf("%u",&ath[i].num);
	  printf("name: ");
	  scanf("%s",ath[i].name);
	  printf("sex: ");
	  getchar();
	  scanf("%f",&ath[i].age);
	  printf("nationality: ");
	  scanf("%f",&ath[i].score);
	  ath[i].ranking = 0;
	  i++;
	  getchar();
	  printf("Whether to continue the input?(y/n):");
	  scanf("%c",&ch);
	  if(ch=='y'||ch=='Y'){
	  	continue;
	  }else{
	  	break;
	  }
	}
	n=i;
	for (i=0;i<n;i++){
		printf("%d athlete information:%u %s %c %d %s %f\n",i+1,ath[i].num,
		ath[i].name,ath[i].sex,ath[i].age,ath[i].nationalilty,ath[i].score);
	}
	return 0;
}
