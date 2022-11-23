#include <iostream>
#include <vector>


using namespace std;

bool isEmpty(vector <char > stack ){
    return (stack.size() == 0 );
}

bool g(char open , char close){
    return (open+1 == close || open +2 == close);
}
bool f(string s){
 
vector <char> stack;
   bool s = true;  

    for(int i=0 ; i<s.size() ; i++ ){
                     
        if( s[i] == '(' || s[i] == '[' || s[i] == '{')
            stack.push_back(s[i]);

        else if (  isEmpty(stack)  )
           continue;

        else if(  g(stack.back() , s[i])   )
           stack.pop_back();
         else return 0;
     }


return isEmpty(stack);
}


int main(){

   cout<<f("[]}");
  
    return 0;
}