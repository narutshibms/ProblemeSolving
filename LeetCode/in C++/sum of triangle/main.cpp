#include <iostream>
                                            
#include <vector>

int z = 0;

using namespace std;

int f(vector <int> nums){

    for(int i=0 ; nums.size() > 1 ; i++){

      for(int k=0 ; k< nums.size() -1  ; k++ )
       { 
        z = nums[k+1] + nums[k];
        z = (z>9) ?(z%10) : z; 
        nums[k] = z;
                
        
        }
        nums.pop_back();

    }
   return nums[0];
}


int main(){

   vector <int> nums{5,7,8,5,1};
    cout<<f(nums);
    return 0;
}