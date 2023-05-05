#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
//    printf("\"A \tB \tC \tD \"\n\n");

    int a, b, c;
//    scanf("%d %d", &a, &b);
//    printf("%d\n", a > b);
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", !a);
    printf("%d\n", a && b);
    printf("%d\n", (a > b) && (b > c));

    int d = 7, e = 7;
    printf("%d\n", ++d);
    printf("%d\n", d++);
    printf("%d\n", ++d);
    printf("%d\n", (d == e) ? 100 : -100);

    system("pause");
    return 0;
}

