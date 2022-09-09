const set   =  new Set([1,2,3])
console.log(set.has(2))
set.delete(2)
console.log(set.size)
set.clear();
for(const items  of set ){
    console.log(items)
}