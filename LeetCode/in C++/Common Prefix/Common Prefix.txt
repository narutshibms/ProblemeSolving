#include <iostream>
#include <vector>
#include <string>

using namespace std;

int resulfbr = 1;




int g(string a ,  int k ){

        int sz = a.size();
        int s = 1 ;
        int i = a.find('.',s-1)+1 + k;

       if(resulfbr)
       while(i<sz){

        if( a[i] == a[k] )s++;
        i = a.find('.',i)+1+ k;

        }

    return s;
}

string f(vector <string> a){



    string b="";
    string c="";

    for(int i=0 ; i<a.size() ; i++)
        b += a[i] + ".";

    for(int i=0 ; b[i]!= '.' ; i++)
        if( g(b,i) == a.size() ){

             resulfbr = 1;
            c +=b[i];
            }
            else
                resulfbr = 0;
return c;

}


int main(){

vector <string> a {"cir","car"};

    cout<<f(a);




    return 0;
}
