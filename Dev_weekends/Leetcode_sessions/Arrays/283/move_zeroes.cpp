#include<iostream>
#include<vector>
using namespace std;

/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.


Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]
 

Constraints:
1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 

Follow up: Could you minimize the total number of operations done?

*/

/*
  - we have given an array of integers, we have to move all the zeros to the end while maintaining the relative order of non-zero elements. we must do it by manipulating the original array
       - How to change/move the order of zeros into the end?
       - How to maintain the order of non-zeroes?
       - How to manipulate the original array without creating another one?

  
  - Solving by creating new array(Brute Force)
    - create a new array of nonzeroes
    - iterate through the array
      - if there is non zero element then append/push that to the nonzereos array
    - iterate over the nums to the nonZeroes size(3)--- 0, 1, 2
      - update the nums[i] to nonZeroes[i] ----- nums[0],[1], [2] ---- [0,1,0] = [1,3,12]
    - iterate over the nums(starts from nonZeroes.size(3) to the n(4))
      - update the nums[i] to 0 ---> nums[i] --- nums[3],[4] --- [3,12] = [0,0]
      nums = [1,3,12,0,0]
                                             

*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> nonZeroes;

        
        for(int i = 0; i < n; i++){
            if(nums[i] != 0) nonZeroes.push_back(nums[i]);
        }
        for(int i = 0; i < nonZeroes.size(); i++){
            nums[i] = nonZeroes[i];
        }
        for(int i = nonZeroes.size(); i < n; i++){
            nums[i] = 0;
        }

        
    }
};



int main(){
    Solution sol;
    vector<int> nums = {0,1,0,3,12};
    sol.moveZeroes(nums);

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;

}