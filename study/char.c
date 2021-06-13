#include <stdio.h>

int chars(){
    int a;
    char c;
    scanf("%d", &a);
    printf("%d\n", a);
    int temp;
    while ((temp = getchar()) != EOF && temp != '\n'){}
    scanf("%c", &c);
    printf("%c\n", c);
    /*char a = 65;
    printf("%c\n", a);*/
    return 0;
}


