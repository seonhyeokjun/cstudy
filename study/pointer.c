#include <stdio.h>

int pointer(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int *b = a;
    printf("%d\n", b[2]);
    /*int a = 5;
    int *b = &a;
    int **c = &b;
    printf("%d\n", **c);*/
    /*int a[] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", &a[i]);
    }*/
    /*int a = 5;
    int *b = &a;
    printf("%d\n", *b);*/
    return 0;
}