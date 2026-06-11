#include <stdio.h>
int main(void){
	char str[20];
	int n=0,i=0,j=0,k=0;
	gets(str);
	while(str[n]!='\0'){
		if (str[n]>='\0'&&str[n]<='9')
			i++;
		else if(str[n]>='a'&&str[n]<='z')
		j++;
		else if(str[n]>='A'&&str[n]<='Z')
		k++;
		else printf("Error");
		n++;
	}
	printf("该字符串中由数字%d个，小写字母%d个，大写字母%d个\n",i,j,k);
	return 0;
}
