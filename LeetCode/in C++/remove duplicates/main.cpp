#include  <iostream>
#include  <algorithm>
#include  <vector>
#include  <string>
using namespace std;

void saw(  vector <int> &a, int index,int target){

   int i =0 ;
   
   for( i=index +1  ; i<a.size() ; i++)
    if( a[i] != target  )
         break;
   
    a.erase( a.begin() + index ,a.begin() + i - 1 );


}

int Remover( vector <int> &arr){

  
    for(int i=0 ; i<arr.size() ; i++)
        saw(arr,i,arr[i]);

return arr.size();
}


int main(){
   
    vector <int> arr{ 0,0,0,0,0,1,1,1,1,1,1,1,1,1,2,2};
    
    Remover(arr);

    for(auto x:arr)cout<<x;

    return 0;
}
