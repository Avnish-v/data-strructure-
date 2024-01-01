#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
}; // Don't forget the semicolon here

void print(struct Node* head) {
    while (head != NULL) {
        printf("element %d\n", head->data);
        head = head->next; // Move to the next node
    }
}

int main() {
    struct Node* head;
    struct Node* sec;
    struct Node* third;
    struct Node* four;

    head = (struct Node*)malloc(sizeof(struct Node));
    sec = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    four = (struct Node*)malloc(sizeof(struct Node));

    head->data = 12;
    head->next = sec;
    sec->data = 123;
    sec->next = third;
    third->data = 333;
    third->next = four;
    four->data = 22432;
    four->next = NULL;

    print(head);
    return 0;
}
