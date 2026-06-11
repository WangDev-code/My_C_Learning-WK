#include <stdio.h>

float calcAverage(int scores[], int n);

int countFail(int *p, int n);

int findMax(int *start, int n);


int main(){
 	int scores[10];
 	int i;
 	printf("请输入10位同学的成绩(0-100): \n");
 	for(i=0;i<10;i++){
 		printf("第%d位同学的成绩是：\n",i+1);
 		scanf("%d",&scores[i]);
	 }

	  float avg = calcAverage(scores, 10);     
   
    int failCount = countFail(scores, 10);    

    int maxScore = findMax(scores, 10);

 

    printf("\n========== 成绩分析报告 ==========\n");

    printf("班级平均分: %.1f 分\n", avg);

    printf("最高分: %d 分\n", maxScore);

    printf("不及格人数: %d 人\n", failCount);

 return 0;
 }
 float calcAverage(int scores[],int n){
 	int sum=0,i;
 for (i=0;i<n;i++){
 	sum+=scores[i];
 } 
   return (float)sum/n;
}
int countFail(int *p, int n) { 

   int count = 0;
   int i; 

   for ( i = 0; i < n; i++) {  

         if (*(p + i) < 60) {     

               count++; 

          } 

    }

    return count; 

}
int findMax(int *start, int n) {

    int max = *start;            
    int *p;                    

    for (p = start + 1; p < start + n; p++) {

       if (*p > max) { 

            max = *p; 

       } 

     } 

     return max; 

}
