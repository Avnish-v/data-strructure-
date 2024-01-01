#include<stdio.h>
#include<stdlib.h>



struct Node{

    int data ;
    struct Node * next ;
};



void print (struct Node * head){
    while(head != NULL){
            printf("data is %d " , head->data);
         head =  head-> next;
printf("\n");
    }
    
}

struct Node * deleteHead (struct Node * head , struct Node * prev  ){
    struct Node * ptr ;
    ptr  =  (struct Node *) malloc(sizeof(struct Node));\
    ptr = head ;
    head = head -> next;

free(head);

return ptr;
}

int main (){
    struct Node * head ;
    struct Node *  second ; 
    struct Node * third ;
    head  =  (struct Node *) malloc(sizeof(struct Node)) ;
    second =   (struct Node *) malloc(sizeof(struct Node));
    third  =  (struct Node *) malloc(sizeof(struct Node));
        head ->data =  12;
        head->next  =  second ; 
        second ->data =  143;
        second ->next =  third ;
        third ->data =  123;
        third->next = NULL ;
        
head = deleteHead(head,second);
        print(head);

    return 0 ;
}