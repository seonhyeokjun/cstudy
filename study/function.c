#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void dice(int input){
    printf("동빈이가 던진 주사위: %d\n", input);
}

int add(int a, int b){
    return a + b;
}

void calculator(int a, int b){
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("\n");
}

int factorial(int n){
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}

int main(void){
    dice(3);
    dice(5);
    dice(1);

    printf("%d\n", add(3, 7));
    printf("%d\n", add(50, -30));
    printf("%d\n", add(10, 11));

    calculator(10, 3);
    calculator(15, 2);
    calculator(18, 3);

    int n;
    printf("팩토리얼을 계산할 정수를 입력하세요: ");
    scanf("%d", &n);
    printf("%d\n", factorial(n));

    system("pause");
    return 0;
}