#include <iostream>
#include <stdio.h>

#include <vector>
using namespace std;

int col( vector < vector <char> > &a ,int r, int col , char num){
    int i = 0;

    while(i<a[0].size())
    if(  i!=col && (a[r][i] == num) )
        return 0 ; else ++i;

        return 1;
}

 int  row( vector < vector <char> > &a ,int r, int col , char num ){
      int i = 0 ;
     
      while(   i<a.size() )
        if( a[i][col] == num && i!=r    )
             return 0; else ++i;
      
      
return 1;

  }


int iscol_rowValid(  vector < vector <char> > &a   ){
 
  for(int i=0 ; i<a.size() ; i++)
     for(int j=0 ; j<a[0].size() ; j++)
        if( a[i][j] !='.' && col(a,i,j,a[i][j]) != row(a,i,j,a[i][j])      )
        return 0;

  return 1;
}



int sq(vector < vector <char> > &a ,int  sr , int er , int sc , int ec){
   
   char z[6];
   int zz=0;
    
    for(int i=sr ; i<er; i++)
       for(int j = sc ; j<ec ; j++)
          if(   isalnum(a[i][j])    )
            z[zz++] = a[i][j];



     for(int i=0 ; i<zz ; i++)
     for(int j=0 ; j<zz ; j++)
     if(  j!=i && z[i]==z[j]  )return 0; 
    
return 1;
}

int issquare(   vector < vector <char> > &a  ){


if (!(iscol_rowValid(a))) return 0;


   int sr = 0;
   int er= 3;

   int sc = 0;
   int ec = 0;

   while(er<=a.size()){

   sc = ec;
   ec +=3;
   
     if(!(sq(a,sr,er,sc,ec))) return 0;
   if(ec == 9  ){er +=3; ec = 0; sr +=3 ; } 
   
   }

   return 1; 
}

int main(){
 
    vector < vector <char> > a{ 
                          {'5','3','.', '.' , '7' , '.' ,  '.' , '.' , '.'},
                          {'6','.','.', '1' , '9' , '5' ,  '.' , '.' , '.'},
                          {'.','9','8', '.' , '.' , '.' ,  '.' , '6' , '.'},

                          {'8','.','.', '.' , '6' , '.' ,  '.' , '.' , '3'},
                          {'4','.','.', '8' , '.' , '3' ,  '.' , '.' , '1'},
                          {'7','.','.', '.' , '2' , '.' ,  '.' , '.' , '6'},

                          {'.','6','.', '.' , '.' , '.' ,  '2' , '8' , '.'},
                          {'.','.','.', '4' , '1' , '9' ,  '.' , '.' , '5'},
                          {'.','.','.', '.' , '8' , '.' ,  '.' , '7' , '9'}
             };
           
           cout<<endl<<"the above matrix are : "<<issquare(a)<<"\n";



    return 0;
}