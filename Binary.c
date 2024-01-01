#include <stdio.h>

int binary  (int arr[] , int size , int element   ){
    int mid , high = size  , low = 0;
    
    while(low <= high){
mid =  (low + high)/2;
    
    if(element == arr[mid]){
        return mid ;
    }
     if(arr[mid] < element){
        low  =  mid + 1; 
     }else  if(arr[mid] >  element){
        high =  mid -1 ;
     }
    }
    return -1;
    
}
int main (){
 int arr []  ={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
 int size  =  sizeof(arr)/sizeof(int);
 int element  =  14  ;
int data =  binary(arr ,  size , element) ; 

printf("the index is %d" , data );
    return 0;
}