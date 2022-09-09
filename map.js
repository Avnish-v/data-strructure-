const map = new Map([["avnish" , 1] , ['rohit'  , 2]]);
map.set('nikhil',3) //add 
console.log(map.has("avnish"))

for (const [key,value] of map )
{
    console.log(`${key} : ${value}`)
}