#include <stdio.h>
#include <stdlib.h>
#define INF 10000

/*typedef struct {
    int data;
    struct Node *next;
} Node;

Node *head;

void addFront(Node *root, int data) {
    Node *node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->next = root->next;
    root->next = node;
}

void removeFront(Node *root) {
    Node *front = root->next;
    root->next = front->next;
    free(front);
}

void freeAll(Node *root) {
    Node *cur = head->next; while (cur != NULL) {
        Node *next = cur->next;
        free(cur);
        cur = next;
    }
}

void showAll(Node *root) {
    Node *cur = head->next; while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
}*/

/*int arr[INF];
int count = 0;
void addBack(int data) {
    arr[count] = data; count++;
}
void addFirst(int data) {
    for (int i = count; i >= 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = data;
    count++;
}
void show() {
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
}

void delete(int index){
    for (int i = index; i < count - 1; i++) {
        arr[i] = arr[i + 1];
    }
    count--;
}*/

int linkedlist(void) {
    /*head = (Node*) malloc(sizeof(Node));
    head->next = NULL;
    addFront(head, 2);
    addFront(head, 1);
    addFront(head, 7);
    addFront(head, 9);
    addFront(head, 8);
    removeFront(head);
    showAll(head);
    freeAll(head);*/
    /*addFirst(4);
    addFirst(5);
    addFirst(1);
    addBack(7);
    addBack(6);
    addBack(8);
    delete(3);
    show();*/
    //system("read");
    return 0;
}