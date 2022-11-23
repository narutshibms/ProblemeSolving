
 function toFrame(n) {
   console.log(n);
   if (n > 122) return n - 26;
   else if (n < 97) return 26 + n;

   return n;
 }

 class ShiftCipher {
   constructor(shift) {
     this.shift = shift;
   }

   encrypt(m) {
     let char = "";
     let ascci = 0;
     m = m.toLowerCase();

     for (let i = 0; i < m.length; i++) {
       if (m.charCodeAt(i) <= 122 && m.charCodeAt(i) >= 97)
         ascci = toFrame(m.charCodeAt(i) + this.shift);
       else ascci = m.charCodeAt(i);

       char += String.fromCharCode(ascci);
     }

     return char.toUpperCase();
   }

   decrypt(m) {
     m = m.toLowerCase();

     let char = "";
     let ascci = 0;
     for (let i = 0; i < m.length; i++) {
       if (m.charCodeAt(i) <= 122 && m.charCodeAt(i) >= 97)
         ascci = toFrame(m.charCodeAt(i) - this.shift);
       else ascci = m.charCodeAt(i);
       char += String.fromCharCode(ascci);
     }

     return char;
   }
 }

