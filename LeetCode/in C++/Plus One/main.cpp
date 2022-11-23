#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector <int> fun(vector <int > &a, int len ){

 if(   a[len] <9   && len>=0  ){
    a[len]++;
    return a;
 } 
 else if(  a[len] == 9 && len >=0){
    a[len] = 0;
  return fun(a , --len);
 }
 
 else if( a[0]==0 && len-1 <0  ){
  a[0] =1;
  a.push_back(0);
 }

return a;
 
}


vector <int> function(vector <int> &arr){
    
   
       int  a=0 ;
       vector <int> ar;

       for(int i =0 ; i<arr.size() ; i++)
        a = arr[i] + a*10 ;
        a++;
        
      do{ 
          
          ar.push_back(a%10);
          
          a = a/10;

       }while(a);

      reverse(ar.begin(), ar.end());

    return arr;
}

int main(){

vector <int> ar{9,9,9};

  fun(ar,ar.size()-1);
  for(auto x:ar)
  cout<<x<<" ";
        
    return 0;
}