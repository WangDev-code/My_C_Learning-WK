#include <stdio.h>
int main(void){
	char str1[20]="Hello ";
	char str2[]="world!";
	char *p,*q;
	p=str1;
	q=str2;
	while(*p!='\0'){
		p++;
	}
	while(*q!='\0'){
		*p=*q;
	    p++;
	    q++;
	}
	printf("str1=%s\n",str1);
	printf("str2=%s\n",str2);
	return 0;
}
