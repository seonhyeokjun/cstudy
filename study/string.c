#include <stdio.h>
#include <string.h>
#define gets_s(x, len) fgets((x), (len) + 1, stdin)

int string(){
    char a[30] = "I like you";
    char b[20] = "like";
    //strcpy(a, b);
    //strcat(a, b);
    printf("%s", strstr(a, b));
    /*char a[20] = "SeonHyeok Jun";
    char b[20] = "Hojoon Seok";
    printf("두 배열의 사전 순 비교: %d\ n", strcmp(a, b));*/
    //printf("문자열의 길이: %d\n", strlen(a));
    /*char a[100];
    gets_s(a, sizeof a);
    printf("%s\n", a);*/
    /*gets(a);
    printf("%s\n", a);*/
    /*char *a = "Hello World";
    printf("%c\n", a[1]);
    printf("%c\n", a[4]);
    printf("%c\n", a[8]);*/
    return 0;
}
