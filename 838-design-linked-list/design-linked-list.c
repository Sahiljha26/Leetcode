#include <stdlib.h>

struct Node {
    int val;
    struct Node* next;
};

typedef struct {
    struct Node* head;
    int size;
} MyLinkedList;


// Create Linked List
MyLinkedList* myLinkedListCreate() {
    MyLinkedList* list = malloc(sizeof(MyLinkedList));

    list->head = NULL;
    list->size = 0;

    return list;
}


// Get value at given index
int myLinkedListGet(MyLinkedList* obj, int index) {

    if (index < 0 || index >= obj->size) {
        return -1;
    }

    struct Node* temp = obj->head;

    for (int i = 0; i < index; i++) {
        temp = temp->next;
    }

    return temp->val;
}


// Insert at beginning
void myLinkedListAddAtHead(MyLinkedList* obj, int val) {

    struct Node* newNode = malloc(sizeof(struct Node));

    newNode->val = val;
    newNode->next = obj->head;

    obj->head = newNode;
    obj->size++;
}


// Insert at end
void myLinkedListAddAtTail(MyLinkedList* obj, int val) {

    struct Node* newNode = malloc(sizeof(struct Node));

    newNode->val = val;
    newNode->next = NULL;

    if (obj->head == NULL) {
        obj->head = newNode;
    }
    else {
        struct Node* temp = obj->head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    obj->size++;
}


// Insert at given index
void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {

    if (index < 0) {
        index = 0;
    }

    if (index > obj->size) {
        return;
    }

    if (index == 0) {
        myLinkedListAddAtHead(obj, val);
        return;
    }

    struct Node* newNode = malloc(sizeof(struct Node));

    newNode->val = val;

    struct Node* temp = obj->head;

    for (int i = 0; i < index - 1; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    obj->size++;
}


// Delete node at given index
void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {

    if (index < 0 || index >= obj->size) {
        return;
    }

    struct Node* temp = obj->head;

    if (index == 0) {
        obj->head = temp->next;
        free(temp);
    }
    else {
        struct Node* prev = NULL;

        for (int i = 0; i < index; i++) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;
        free(temp);
    }

    obj->size--;
}


// Free Linked List
void myLinkedListFree(MyLinkedList* obj) {

    struct Node* temp = obj->head;

    while (temp != NULL) {
        struct Node* nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    free(obj);
}