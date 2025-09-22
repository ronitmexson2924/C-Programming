#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
    int data;
    struct node *next;
}*first = NULL;

void create(int A[], int n){
    int i;
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first -> data = A[0];
    first -> next = NULL;
    last = first;

    for(int i = 1; i < n; i++){
        t = (struct node *)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void displayInfo(){
    struct node *p = first;

    while(p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}
int main(){
    int A[] = {1,2,3,4,5};

    create(A,5);

    displayInfo();
}