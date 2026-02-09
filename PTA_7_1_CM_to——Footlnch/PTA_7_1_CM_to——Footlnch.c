#include <stdio.h>

int main() {
    int cm;
    scanf("%d", &cm);

    // 将厘米转换为总英尺数（包含小数）
    double total_feet = cm / 30.48;

    // 提取整数英尺部分
    int feet = (int)total_feet;

    // 计算剩余的英寸数
    // 剩余部分 × 12 = 英寸数
    int inches = (int)((total_feet - feet) * 12);

    printf("%d %d\n", feet, inches);

    return 0;
}





    
   



