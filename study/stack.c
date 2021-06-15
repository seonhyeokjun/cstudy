#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10000
#define INF 9999999
typedef struct {
    char data[100];
    struct Node *next;
} Node;

typedef struct {
    Node *top;
} Stack;

void push(Stack *stack, char *data) {
    Node *node = (Node*)malloc(sizeof(Node)); strcpy(node->data, data);
    node->next = stack->top;
    stack->top = node;
}
char* getTop(Stack *stack) {
    Node *top = stack->top;
    return top->data;
}

char* pop(Stack *stack) { if (stack->top == NULL) {
        printf("스택 언더플로우가 발생했습니다.\n");
        return -INF;
    }
    Node *node = stack->top;
    char *data = (char*)malloc(sizeof(char) * 100); strcpy(data, node->data);
    stack->top = node->next;
    free(node);
    return data;
}

int getPriority(char *i) {
    if (!strcmp(i, "(")) return 0;
    if (!strcmp(i, "+") || !strcmp(i, "-")) return 1;
    if (!strcmp(i, "*") || !strcmp(i, "/")) return 2;
    return 3;
}

char* transition(Stack *stack, char **s, int size) {
    char res[1000] = "";
    for (int i = 0; i < size; i++) {
        if (!strcmp(s[i], "+") || !strcmp(s[i], "-") || !strcmp(s[i], "*") || !strcmp(s[i], "/")) {
            while (stack->top != NULL && getPriority(getTop(stack)) >= getPriority(s[i])) {
                strcat(res, pop(stack)); strcat(res, " ");
            }
            push(stack, s[i]);
        }
        else if (!strcmp(s[i], "(")) push(stack, s[i]);
        else if (!strcmp(s[i], ")")) {
            while (strcmp(getTop(stack), "(")) {
                strcat(res, pop(stack)); strcat(res, " ");
            }
            pop(stack);
        }
        else strcat(res, s[i]); strcat(res, " ");
    }
    while (stack->top != NULL) {
        strcat(res, pop(stack)); strcat(res, " ");
    }
    return res;
}

void calculate(Stack *stack, char **s, int size) {
    int x, y, z;
    for (int i = 0; i < size; i++) {
        if (!strcmp(s[i], "+") || !strcmp(s[i], "-") || !strcmp(s[i], "*") || !strcmp(s[i], "/")) {
            x = atoi(pop(stack));
            y = atoi(pop(stack));
            if (!strcmp(s[i], "+")) z = y + x;
            if (!strcmp(s[i], "-")) z = y - x;
            if (!strcmp(s[i], "*")) z = y * x;
            if (!strcmp(s[i], "/")) z = y / x;
            char buffer[100];
            sprintf(buffer, "%d", z);
            push(stack, buffer);
        }
        else {
            push(stack, s[i]);
        }
    }
    printf("%s ", pop(stack));
}

/*int stacks[SIZE];
int top = -1;

void push(int data){
    if (top == SIZE -1){
        printf("스택 오버플로우가 발생했습니다.\n");
        return;
    }
    stacks[++top] = data;
}

int pop(){
    if (top == -1){
        printf("스택 언더플로우가 발생했습니다.\n");
        return -INF;
    }
    return stacks[top--];
}

void show(){
    printf("--- 스택의 최상단 ---\n"); for (int i = top; i >= 0; i--) {
        printf("%d\n", stacks[i]);
    }
    printf("--- 스택의 최하단 ---\n");
}*/

/*
typedef struct {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *top;
} Stack;

void push(Stack *stack, int data){
    Node *node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->next = stack->top;
    stack->top = node;
}

int pop(Stack *stack) {
    if (stack->top == NULL) {
        printf("스택 언더플로우가 발생했습니다.\n");
        return -INF;
    }
    Node *node = stack->top;
    int data = node->data;
    stack->top = node->next;
    free(node);
    return data;
}

void show(Stack *stack) {
    Node *cur = stack->top;
    printf("--- 스택의 최상단 ---\n");
    while (cur != NULL) {
        printf("%d\n", cur->data);
        cur = cur->next;
    }
    printf("--- 스택의 최하단 ---\n");
}
*/

int stack(){
    Stack stack;
    stack.top = NULL;
    char a[100] = "( ( 3 + 4 ) * 5 ) - 5 * 7 * 5 - 5 * 10";
    int size = 1;
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == ' ') size++;
    }
    char *ptr = strtok(a, " ");
    char **input = (char**)malloc(sizeof(char*) * size);
    for (int i = 0; i < size; i++) {
        input[i] = (char*)malloc(sizeof(char) * 100);
    }
    for (int i = 0; i < size; i++) {
        strcpy(input[i], ptr);
        ptr = strtok(NULL, " ");
    }
    char b[1000] = "";
    strcpy(b, transition(&stack, input, size)); printf("후위 표기법: %s\n", b);
    /*Stack stack;
    stack.top = NULL;
    push(&stack, 7);
    push(&stack, 5);
    push(&stack, 4);
    pop(&stack);
    push(&stack, 6);
    pop(&stack);
    show(&stack);*/
    /*push(7);
    push(5);
    push(4);
    pop();
    push(6);
    pop();
    show();*/
    return 0;
}
