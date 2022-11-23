 function Deas(element) {
   let stack = [];
   let pointer = -1;

   for (let index = 0; index < element.length; index++) {
     if (pointer >= 0) {
       if (stack[pointer] == element[index]) {
         stack.pop();
         pointer -= 1;
       } else {
         stack.push(element[index]);
         pointer +=1
       }
     } else {
       stack.push(element[index]);
       pointer += 1;
     }
   }

   return stack.join("");
 }