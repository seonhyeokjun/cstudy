#include <stdio.h>
#include <limits.h>

int array(){
    char a[] = "Hello World";
    int count = 0;
    for (int i = 0; i <= 10; i++) {
        if (a[i] == 'l') count++;
    }
    printf("%d\n", count);
    //scanf("%s", &a);
    /*a[4] = ',';
    printf("%s\n", a);*/
    /*int a[10] = {6,5,4,3,9,8,0,1,2,7};
    int i, maxValue = INT_MIN;
    for (i = 0; i < 10; i++) {
        if (maxValue < a[i]) maxValue = a[i];
    }
    printf("%d\n", maxValue);*/
    /*int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }*/
    return 0;
}