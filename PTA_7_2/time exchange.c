#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int h = a / 100;
    int m = a % 100;
    int all_m = h * 60 + m + b;
    int end_h = all_m / 60;
    int end_m =all_m % 60;
    printf("%d%02d\n", end_h, end_m);
    return 0;
}



    
   



