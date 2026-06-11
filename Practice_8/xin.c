#include <stdio.h>
float add(float a,float b){
	return a+b;
}
float sub(float a,float b ){
	return a-b;
}
float mul(float a,float b){
	return a*b;
}
float div(float a,float b){
	if(b==0){
	printf("除数不能为零！");
	return 0;
	}
	return a/b;
}

float calculate(float num1, float num2, char op) {

    switch (op) {

        case '+': return add(num1, num2);

        case '-': return sub(num1, num2);

        case '*': return mul(num1, num2);

        case '/': return div(num1, num2);

        default: 

            printf("无效运算符！\n");

            return 0;

    }

}



int main() {

    float a, b;

    char op;

    

    printf("输入表达式 (如 5+3): ");

    scanf("%f%c%f", &a, &op, &b);

    

    float result = calculate(a, b, op); 

    printf("结果: %.2f\n", result);

    

    return 0;

}


