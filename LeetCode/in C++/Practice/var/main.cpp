#include <iostream>
#include <math.h>


using namespace std;

void powers(long long int *n, int base, int *tab);
int saperate(int n);

int saperate(int n)
{
       
    int NumberDg = (int)log10(n) +1;
    
    long long int c = 0;
    long long  int tmp = n;
    
    (NumberDg<0)?(NumberDg=-NumberDg):1;
    
   int tab[NumberDg]; 
    
    do
    {

        powers(&c, n % 10, tab);
        n = n / 10;
        c++;
     
    } while (n);
    
       c=0;
     
    for (int i = 0; i <NumberDg; i++)
        c =  (long long int)10*c + tab[i];
    
    if(  c >( pow(2,32) - 1) || c < (-pow(2,31))   )
        return 0;
    
    return c;
}

void powers(long long int *n, int base, int *tab)
{
    tab[*n] = base;
}




int reverse(long long int x){
  
    if(x<0)
    x = -saperate(-x);
    else
    x = saperate(x);

    
    return x;
}

int main(){


     cout<<reverse(1234567890101);
    

    return 0;
}