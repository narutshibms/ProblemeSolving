#include <iostream>
#include <vector>
using namespace std;

vector <int> f(int n){

vector < vector <int>>  nums;
nums.push_back(vector<int>());
(nums[0]).push_back(1);

int z = 0;




for(int i= 1  ; i<= n  ; i++  ){
    nums.push_back(vector<int>());
    nums[i].push_back(1);
   
   for(int j = 1 ; j< nums[i-1].size() ; j++){
    z = nums[i-1][j-1] + nums[i-1][j];
    nums[i].push_back(z);


   }
   
   nums[i].push_back(1);

    }
    
    
 
  
return nums[n];

}
