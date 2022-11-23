#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


void swaps(int *a, int *b){

    int t = *a;

    *a = *b ;
    *b = t;

}

vector <int> recu(vector <int> &a,int i,int k, int *mins){

    if(i<k)
    {

        if(*mins>a[i])
        *mins = a[i];

        recu(a,++i,k,mins);


    }
    return a;
}


 int rotateRight(vector <int> &a){

   int mins = a[0];

    recu(a,1,a.size(),&mins);

    cout<<"the minimum in this array is : "<<mins;

    return mins;
}

int main(){

   vector <int> a;
  a.push_back(7);
  a.push_back(711);
  a.push_back(0);
  a.push_back(-1);
  a.push_back(-1);
  a.push_back(-88);
  a.push_back(-10);
  a.push_back(-11);
  a.push_back(-1);
  a.push_back(141);
  a.push_back(11);
  a.push_back(0-1);



    rotateRight(a);

    return 0;
}
