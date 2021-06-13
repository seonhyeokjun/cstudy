#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char studentId[10];
    char name[10];
    int grade;
    char major[100];
} Student; //s = {"20153157", "선혁준", 4, "컴퓨터과학과"}; // 전역변수

int structs(){
    Student *s = malloc(sizeof(Student));
    strcpy(s->studentId, "20153157");
    strcpy(s->name, "선혁준");
    s->grade = 4;
    strcpy(s->major, "컴퓨터과학과");
    printf("학번: %s\n", s->studentId); // 구조체 내용 출력
    printf("이름: %s\n", s->name);
    printf("학년: %d\n", s->grade);
    printf("학과: %s\n", s->major);
    //Student s = {"20153157", "선혁준", 4, "컴퓨터과학과"};
    //struct Student s = {"20153157", "선혁준", 4, "컴퓨터과학과"};
    /*struct Student s;
    strcpy(s.studentId, "20153157");
    strcpy(s.name, "선혁준");
    s.grade = 4;
    strcpy(s.major, "컴퓨터과학과");*/
    /*printf("학번: %s\n", s.studentId); // 구조체 내용 출력
    printf("이름: %s\n", s.name);
    printf("학년: %d\n", s.grade);
    printf("학과: %s\n", s.major);*/
}
