#include <bits/stdc++.h>

//  int max   =  -2147483648
//  int min   = 2147483647

using namespace std;

int saver = 0;

int h(int n)
{
 saver = n / 10;
 return n % 10;
}


int to_int(char c) { return ((int)(c)-48); }

char to_strings(int c) { return ((char)(c) + 48); }

int detect(string s){
  
  for(int i=0 ; i<s.length() ; i++ ){
    if( s[i] != '0' ) return i;
  }
  return 0;
}

int f(int a, int b)
{

  if (a == INT_MIN && b == -1)
    return INT_MAX;

  int sign = (signbit(a) == signbit(b)) ? 1 : -1;

  a = -abs(a);
  b = abs(b);

  int counter = 0;

  while (-b >= a)
  {

    a = a + b;
    counter += sign;
  }

  return counter;
}

string g(string a, string b){

  int vect[b.length()][1000] = { {0} };
  vector <int> vects;

 
  int startAt = -1;
  int r = -1;
  int w = 0;
  int max = 0;
  
  int l1 = a.size();
  int l2 = b.size();

  // liner counter ;
  int n = l1 -1;
  int j = l2 -1;

  string tmp = a;
  int sam = 0;
  string str = "";
  string str2 = "";


  while (j>=0){

      r++;
      startAt++;
      w = startAt;

  n = a.length()-1; /// up size;
 
    while (n>=0)
    vect[r][w++] = (h(  to_int(b[j]) * to_int(a[n--]) + saver)),
    vects.push_back(h(  to_int(b[j]) * to_int(a[n--]) + saver));
    

  vect[r][w] = (h(saver));

    j--; // down size

  }


saver = 0;


   
for (int x = 0; x <1000 ; x++){ 
    sam = 0;
for (int k = 0; k <b.length(); k++)
  sam += vect[k][x];

    str += to_strings(h(sam + saver));
  }

reverse(str.begin(), str.end());

int i = detect(str); // to detect first non-zero number

for ( i; i < str.size(); i++)
    str2 += str[i];
  
  return str2;
}

int main(int argc, char const *argv[]){

cout<<g("498828660196", "840477629533");

  return 0;
}
// row = num size;
// colim, = num size +1;
