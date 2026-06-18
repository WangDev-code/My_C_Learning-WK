#include <stdio.h>
#include <stdlib.h>
int main(void){
	FILE*file;
	file=fopen("example.txt","w");
	if(file==NULL){
		perror("打开文件失败");
		return EXIT_FAILURE;
	} 
	if(fclose(file)==EOF){
		perror("关闭文件时发生错误");
		return EXIT_FAILURE;
	} 
	printf("文件已成功创建并关闭。\n"); 
		return EXIT_FAILURE;
}
