#include <stdio.h>

int loop(){
    /*int n, sum = 0;
    printf("n을 입력하세요.");
    scanf("%d", &n);
    for (int i = 0; i <= n; ++i) {
        sum += i;
    }
    printf("%d\n", sum);*/
    /*int n;
    char a;
    scanf("%d %c", &n, &a);
    while (n--){
        printf("%c ", a);
    }*/
    for (int i = 0; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
    /*while (i <= 9) {
        int j = 1;
        while (j <= 9){
            printf("%d * %d = %d\n", i, j, i*j);
            j++;
        }
        printf("\n");
        i++;
    }*/
    return 0;
}

