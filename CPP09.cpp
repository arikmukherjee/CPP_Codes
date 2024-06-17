#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* top = NULL;

void push() {
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    printf("Enter a value: ");
    scanf("%d", &temp->data);
    temp->link = top;
    top = temp;
}

void pop() {
    if (top == NULL) {
        printf("Stack underflow\n");
    } else {
        struct node* temp = top;
        top = top->link;
        printf("Popped value = %d\n", temp->data);
        free(temp);
    }
}

void display() {
    if (top == NULL) {
        printf("Empty stack\n");
    } else {
        struct node* temp = top;
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("Enter 1 for push\n");
        printf("Enter 2 for pop\n");
        printf("Enter 3 for display\n");
        printf("Enter 4 for exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting the program\n");
                exit(0);
            default:
                printf("Wrong choice\n");
        }
    }
    return 0;
}