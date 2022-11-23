 let card = [4, 4, 8, 2, 3, 3, 0, 1, 3, 3, 7, 2, 3, 0, 6, 4];

 function checkCard(card) {
   let num = 0;
   let k = card.length - 1;
   let sum = 0;
   for (let i = card.length - 2; i >= 0; i -= 2) {
     num = card[i] * 2;

     if (num > 9) {
       card[i] = (num % 10) + Math.floor(num / 10);
     } else {
       card[i] = num;
     }
     sum += card[k] + card[k - 1];
     k = k - 2;
   }
   if (!(sum % 10)) return "card is valid";
   return "card is not valid";
 }