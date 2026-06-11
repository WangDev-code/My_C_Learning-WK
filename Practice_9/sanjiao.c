#include <stdio.h>
int main(){
char triangle[3][5]={{' ',' ','*'},{' ','*','*','*'},{'*','*','*','*','*'}};
int i,j;
for (i=0;i<3;i++){
	for (j=0;j<5;j++)
	 printf("%c",triangle[i][j]);
	 printf("\n");
}
char color[3][6] = {"red","green","blue"};
printf ("%s",*(color+1));
return 0;
}
