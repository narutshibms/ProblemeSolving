#include <iostream>

using namespace std;

int f( int n ){

    int moves = 1;
    int z = 2;
    int k = 1;

    while(k<n){

        cout<<endl<<"k =  "<< k <<"  , z =  "<< z <<",  moves =  "<< moves <<" "<<endl;
        moves += z;
        
        z *=2;
        k++;
    }
return moves;
}



int main(){
    
    std::cout<<"min of moves  is : "<<f(9)<<std::endl;


    return 0;
}