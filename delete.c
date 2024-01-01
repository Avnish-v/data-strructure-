#include<stdio.h>
#include <stdlib.h>

struct Node {
    int data ; 
    struct Node * next ;
};

void print(struct Node* Head){
    while (Head !=NULL){
        printf("%d",Head->data);
        printf("\n");
        Head = Head->next;
    }
}


//! insertion  head
struct Node * insertHead(int value , struct Node * head){
     struct Node * ptr ;
     ptr =  (struct Node *)malloc(sizeof(struct Node));
     ptr->next  =  head ;
     ptr->data =  value ; 
     return ptr; 
}
// given index insert 
struct Node * insertany (int value ,  int index ,  struct Node * Head){
    struct Node * ptr  = (struct Node *)malloc(sizeof(struct Node));
    struct Node * q = Head ; 
   for (int i = 0 ;  i < index - 1 ; i ++){
            q=  q->next ;
   }

   ptr->data = value ;  

   ptr->next =  q->next ; 
    q->next =  ptr ; 
    return Head;


}

// at the end 
void insertAtEnd  (struct Node * Head , int value){
    struct Node * ptr  =  (struct Node *)malloc(sizeof(struct Node ));
    struct Node * p =   Head;
    while (p->next != NULL){
        p =  p->next ;
    }
    p->next  =  ptr;
    ptr->data  =  value ; 
    ptr->next  =  NULL;
}

struct Node * deleteHead (struct Node * head){
struct Node * ptr ;
ptr =  head->next ;
free(head);
return ptr;
}

int main(){
    struct Node * head ;
    struct Node * second ;
    struct Node * third ; 
    head =( struct Node * )malloc(sizeof(struct Node));
    second =(struct Node *)malloc(sizeof(struct Node));
    third =  (struct Node *)malloc(sizeof(struct Node));
    head->data =  12;
    head->next =  second;
    second->data =  1232 ;
    second->next =  third ;
    third->data =  1334;
    third->next = NULL ;
    print(head) ;
    head = deleteHead(head);
    printf("After deletion\n");
    print(head); 
    printf("Insertion head\n");
    head = insertHead(1,head);
    print(head);
   head =  insertany(24 , 2 , head);
   printf("inser at index \n");
   print(head);
   printf("insert at end \n" ) ;
   insertAtEnd(head,  2000) ; 
   print(head);

   printf("insert after given node 2\n"); 
   insertAfterNode(second  , 334);
   print(head);
printf("delete at index , \n"); 
deleteAtIndex(1 , head);
print(head);
printf("delete at last , \n"); 
deletelast(head);
print(head);
head  =   reverseLink(head) ; 
printf("this is reverse \n");
print(head);
    return 0 ;
}
void insertAfterNode  (struct Node * prev , int value ){
    struct Node * ptr   =  (struct Node *)malloc(sizeof(struct Node));
    ptr->next  =  prev ->next ;
    prev->next  =  ptr ;  
    ptr->data  =  value ;
}


void deleteAtIndex (int index ,  struct Node * head){
struct Node *  p  =  head ; 
struct Node * q  =NULL  ;
for (int i = 1 ; i < index -1 ; i ++  ){
    p = p->next ; 
}
q =  p->next ; 
p->next  =  q->next ;
free(q);
}


struct Node * reverseLink (struct Node * head){
    struct Node * current =  head ;
    struct Node * prev = NULL ; 
    struct Node * next   ;

    while(current != NULL){
        next   =  current->next ; 
        current->next  =  prev ; 
        prev  =   current ; 
        current  =  next;   
    } 
    return prev ; 

}


// void deletelast  (struct Node * head){
//     struct Node *  p  = head ; 
//     struct Node * q  =  NULL;
//     while(p != NULL){
// p = p->next ; 
//     }
//     p =  q ; 
//     p->next  =  NULL; 
//     free(q);
// }

