abs(i - j) <= k
nums[i] == nums[j]

let nums = [1,2,3,1,2,3];
let k = 2;
let backup = 0;
function test(nums) {
  let len = nums.length - 1;
  for (let i = 0; i <= len - 1; i++){
    for (let j = i + 1; Math.abs(i - j) <= k; j++){
      if (nums[i] == nums[j]  ) return true;

    }
  }
  return false;
}