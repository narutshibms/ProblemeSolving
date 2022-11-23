#include <iostream>

using namespace std;

int s(int a[][3], int m , int x , int target){

    for(int i=0 ; i<m ; i++)
         if (a[i][3] > target)
         return i;
}

bool searcher(int a[][3] ,int m,int x,int target){

        for(int i=0 ; i<m ; i++)
            for(int k=0 ; k<x ; k++)
            if(a[i][k]== target )
            return true;

         return false;

   }



int main()
{
    int a[2][3]  = { {7,10,18} , {22,51,77}};


   cout<<s(a,2,3,10)<<endl;

   cout << searcher(a,2,3,-1) << endl;

    return 0;
}
