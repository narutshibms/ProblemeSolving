#include <iostream>
#include <vector>

using namespace std;




int FindTarget(int start ,int mcol, int ends  , vector <vector <int >> &arr ,int target){
 int mid = 0;

    if(ends>=mcol ){
    mid = (ends+mcol)/2;
  if(   target == arr[start][mid]   ) return 1;
  else if( target > arr[start][mid]  )
       mid = FindTarget(start,mid+1,ends,arr,target);
  else mid = FindTarget(start,mcol,mid,arr,target);

                }

 return mid;

}

int FindIN2D(int row , int col ,vector <vector <int >> &arr , int target ){
int pos;
 if(    row < arr.size()    ){
    if(   target > arr[row][col] )
     pos =  FindIN2D(++row,col , arr,target);
    else if(   row >0 )
        return 1;
      else
         pos = FindTarget(row,0,col,arr,target);
 }
return 0;
}

int main(){

  vector <vector <int>> a{{7,10,15},{30,31,41},{180,181,200}};



   cout<<FindIN2D( 0 ,2,a,15);

    return 0;
}
