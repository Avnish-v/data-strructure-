class Stack {
constructor (){
this.item  =  []
}
push(Element){
    this.item.push(Element)
}
pop(){
   return  this.item.pop()
}
peak(){
    return this.item[this.item.length  -1 ];
}
isEmpty(){
 return  this.item.length === 0 

}
 Size (){
 return this.item.length;
 }
 print(){
console.log(this.item.toString())

 }
}
 const  stack   = new Stack();
 stack.push(10) 
 stack.push(11) 
 stack.push(12)
  stack.push(13)
   stack.push(14)


//  console.log(stack.isEmpty());
//  console.log(stack.pop());
 console.log(stack.print())
//  console.log(stack.Size());
console.log(stack.peak());

//complexity is const in the stack as compare to array