#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int ge = num % 10;
    int shi = (num / 10) % 10;
    int bai = num / 100;
    int result = ge * 100 + shi * 10 + bai;

    printf("%d\n", result);

    return 0;
}



    
   



