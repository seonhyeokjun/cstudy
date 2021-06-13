#include <stdio.h>

/*int a[2][3][3] = { { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } },
                   { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } } };*/


int twodarray(){
    int a[2][5] = {{1,2,3,4,5}, {6,7,8,9,10}};
    int (*p)[5] = a[1];
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", p[0][i]);
    }
    /*int a[5] = {1,2,3,4,5};
    int *p = a;
    printf("%d\n", *(p++));
    printf("%d\n", *(++p));
    printf("%d\n", *(p + 2));*/
    /*double b[10];
    printf("%d %d\n", b, b+9);*/
    /*int a[5] = {1,2,3,4,5};
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }*/
    //int *b = a;
    //printf("%d\n", b[2]);
    /*int i, j, k;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }*/
    return 0;
}
