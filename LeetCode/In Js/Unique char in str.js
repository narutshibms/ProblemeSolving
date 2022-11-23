 console.log(Deas("abbaca"));

 class hash{
    
     constructor(){

     }
    
     hashfun(key , len){
        return   (key.charCodeAt(0))%len
     }
     assgin(key,map ,len){
         const index = this.hashfun(key,len)
         map[index] += 1 
     }
     getter(key , map , len){
         const index = this.hashfun(key,len)
         return map[index]
     }

 }


 let s = "havanaOhhNN"
 let t = "havanaOhhNN"

 let len = t.length

 const object = new hash()

 let map = (new Array(len)).fill(0);

 for( let i=0 ; i<s.length ; i++){
     object.assgin(t[i],map,len)
     object.assgin(s[i],map,len)
 }

 object.assgin(t[len-1],map,len)

 for( let i=1 ; i<len ; i++)
    if( ((object.getter(t[i],map,len) )%2) == 1 )
     return t[i];


 console.log(object.getter('a', map));
