//
// Created by 애플워치사줘야하는여자와사귀는남자 on 2021/06/13.
//
#include <stdio.h>

int ifelse(){
    /*printf("손님이 몇 명 왔나요? ");
    int a;
    scanf("%d", &a);
    if (a == 1 || a == 2){
        printf("2인석으로 안내합니다. \n");
    } else if (a == 3 || a == 4){
        printf("4인석으로 안내합니다. \n");
    } else {
        printf("대형석으로 안내합니다. \n");
    }*/
    /*int size;
    printf("메인 메모리 크기를 입력하세요. (GB) ");
    scanf("%d", &size);
    if (size >= 16){
        printf("메인 메모리 크기 충분합니다.\n");
    } else {
        printf("메인 메모리를 증설하세요. \n");
    }*/

    printf("월을 입력하세요. ");
    int a;
    scanf("%d", &a);
    switch (a) {
        case 1:
        case 2:
        case 3:
            printf("봄\n");
            break;
        case 4:
        case 5:
        case 6:
            printf("여름\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("가을\n");
            break;
        case 10:
        case 11:
        case 12:
            printf("겨울\n");
            break;
    }
    /*switch (a) {
        case 'A':
            printf("A 학점입니다. \n");
            break;
        case 'B':
            printf("B 학점입니다. \n");
            break;
        case 'C':
            printf("C 학점입니다. \n");
            break;
        default:
            printf("학점을 바르게 입력하세요. \n");
    }*/
    return 0;
}
