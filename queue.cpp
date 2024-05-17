#include <stdio.h>
#include "queue.h"

#define SIZE 5
int queue[SIZE];
int front = -1;
int tail = -1;


int isFull() {
    if ((tail + 1) % SIZE == front) {
        return 1;
    }
    return 0;
}

int isEmpty() {
    if (front == -1) {
        return 1;
    }
    return 0;
}

void insertQueue(int value) {
    if (isFull()) {
        printf("Queue is full!\n");
        return;
    }
    if (isEmpty()) {
        front = 0;
    }
    tail = (tail + 1) % SIZE;
    queue[tail] = value;
    printf("Added %d to the queue.\n", value);
}

int deQueue() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return -1;
    }
    int value = queue[front];
    if (front == tail) {
        front = -1;
        tail = -1;
    } else {
        front = (front + 1) % SIZE;
    }
    printf("Removed %d from the queue.\n", value);
    return value;
}

void displayQueue() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == tail) {
            break;
        }
        i = (i + 1) % SIZE;
    }
    printf("\n");
}