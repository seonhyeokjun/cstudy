#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    int score;
} Student;

int file(){
    int n, sum = 0;
    FILE *fp;
    fp = fopen("input.txt", "r");
    fscanf(fp, "%d", &n);
    Student *students = (Student *)malloc(sizeof(Student) * n);
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%s %d", &((students + i)->name), &((students + i)->score));
        printf("이름: %s, 성적: %d\n", (students + i)->name, (students + i)->score);
    }
    for (int i = 0; i < n; i++) {
        sum += (students + i)->score;
    }
    free(students);
    fclose(fp);
    printf("점수 평균: %.2f\n", (double)sum / n);
    /*char s[20] = "Hello World";
    FILE *fp;
    fp = fopen("temp.txt", "w");
    fprintf(fp, "%s\n", s);
    fclose(fp);*/
    return 0;
}
