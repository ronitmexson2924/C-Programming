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

void insert(int pos, int x){
    struct node *t, *p;

    if(pos == 0){
        t = (struct node *)malloc(sizeof(struct node));
        t->data  = x;
        t->next = first;
        first = t;
    }
    else if(pos > 0){
        p = first;

        for(int i = 0; i < (pos-1) && p; i++){
            p = p->next;
        }

        if(p){
            t = (struct node *)malloc(sizeof(struct node));
            t->data  = x;
            t->next = p->next;
            p->next = t;
        }
    }
}

void insertLast(struct node *p, int x){
    struct node *t, *q = NULL;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    if(first == NULL){
        first = t;
    }
    else{
        while(p && p->data < x){
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t -> next = first;
            first = t;
        }
        else{
            t -> next = q ->next;
            q->next = t;
        } 
    }
}

int delete(struct node *p, int index){
    struct node *q;
    int x = -1;

    // if(index < 1){
    //     return -1;
    // }
    if(index == 1){
        q = first;
        first = first->next;
        free(q);
        return x;
    }
    else{
        for(int i = 0; i < index-1; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        free(p);
    }
}

void displayInfo(struct node *first){
    struct node *p = first;

    if(p != NULL){
        printf("%d ",p-> data);
        displayInfo(p->next); 
    }
    printf("\n");
}
int main(){
    int A[] = {1,2,3,4,5};

    create(A,5);

    // insert(0,4);
    // displayInfo(first);
    // insert(1,8);
    // displayInfo(first);
    // insert(2,12);
    // displayInfo(first);
    insertLast(first, 9);
    displayInfo(first);
    delete(first,2);
    displayInfo(first);
}