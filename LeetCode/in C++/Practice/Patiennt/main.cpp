#include <iostream>
#include <string.h>

using namespace std;

int solution(string roman) {
  

   string kys = "IVXLCDM";
    int ky[] = {1, 5, 10, 50, 100, 500, 1000};
    int valu = 0;
    int c,cc;

    for (int i = 0; i < 7; i++)
        if (roman[0] == kys[i])
        {
            valu = ky[i];
            c = valu;
            break;
        }

    for (int k = 1; k < roman.size(); k++)
    {
        for (int i = 0; i < 7; i++)
        {

            if (roman[k] == kys[i])
            {
                

                if (c >= ky[i])
                {   
                    valu +=    ky[i]  ;
                    c = ky[i];
                }
                else
                {   
                 
                    cc = ky[i] - c;
                   
                    valu =  valu +  cc - c ;
                   c = ky[i];
                }
               
            }
            
        }

    }
  
   return valu;
}

int main()
{

    string a;

    cout << solution("XXIVVMM");

    return 0;
}