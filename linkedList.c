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
print(head); 
    return 0;
}