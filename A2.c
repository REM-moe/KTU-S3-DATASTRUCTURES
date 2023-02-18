#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
node *temp;
int main(){
    int n;node*new;int item;node*head = NULL,*prev;
    printf("Enter no. of nodes ");
    scanf("%d",&n);
    while(n>0){
        new = (node*)malloc(sizeof (node));
        if(head == NULL){
            head = new;
        }
        else{
            prev->next = new;
        }
        new->next = NULL;
        printf("Enter data to insert\n --->>> ");
        scanf("%d",&item);
        new->data = item;
        prev = new;
        n = n-1;
    }
    printf("*****Elements Before Deletion*****\n");
    node*p = head;
    while(p != NULL){
        printf("%d\n",p->data);
        p = p->next;
    }
    node*ptr,*ptr1;
    ptr = head;
    while(ptr != NULL){
        int x = ptr->data;
        if(x%2 == 0){
            ptr1 = ptr;
            ptr = ptr->next;
        }
        else{
            ptr1->next = ptr->next;
            ptr->data = 0;
            ptr = ptr->next;
        }
    }
    printf("******Elements after Deletion*****\n");
    node*p1 = head;
    while(p1 != NULL){
        printf("%d\n",p1->data);
        p1 = p1->next;
    }
}
