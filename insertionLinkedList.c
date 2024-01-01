/* jab hum  meoery milte h heap me jab dynmic memoryy lete h */
#include <stdio.h>
#include <stdlib.h>


struct Node  {
     int data ;
     struct Node * next;
};


void print (struct Node* ptr){
    while (ptr != NULL) {
printf("%d" , ptr->data , " %d" ,ptr);
ptr = ptr->next ;
printf("\n");

    }
}
struct Node * insertFirst(struct Node *head ,  int data  ){
       struct Node * ptr =  (struct Node *) malloc(sizeof(struct Node));
       ptr->next = head;
       ptr->data = data ;
       return ptr;

} 


struct Node * between(struct Node *head , int data , int index){
       struct Node * ptr =  (struct Node *) malloc(sizeof(struct Node));
       struct Node * p = head ;
       int i = 0;
       while (i != index - 1){
              p = p->next ;
              i++;
       }
       ptr ->data  =  data;
        ptr ->next  = p->next;
        p -> next  =  ptr;
        return head;
}

struct Node * end(struct Node *head , int data){
       struct Node * ptr  =  (struct Node *) malloc(sizeof(struct Node));
       struct Node * p  =  head ; 
        ptr->data = data;
       while (p->next != NULL){

              p =  p->next;
       }
              p->next =  ptr;
              ptr ->next =  NULL;
       return head;
}


struct Node * given (struct Node * prev ,  int data){
       struct Node * ptr  =  (struct Node *) malloc(sizeof(struct Node));
       ptr -> next  =  prev->next;
       prev -> next =  ptr ;

       ptr ->data  =  data ; 
}
int main (){
    struct Node * head ;
    struct Node * second;
    struct Node * third ;

    // dynmica address milega  
     head =  (struct Node *) malloc(sizeof( struct Node));
     second =  (struct Node *) malloc(sizeof( struct Node));

third =  (struct Node *) malloc(sizeof( struct Node));
     // link
head -> data  =  7 ;
second -> data = 8 ;
third -> data =  12 ; 
head -> next  =  second ;
second -> next = third ;
third -> next =  NULL;


// // print(head); 
// between(head , 56 , 1);
// // print(head); 
// end(head , 10000 );
// // print(head);
given(head ,  122112);
print(head);
    return 0;
}