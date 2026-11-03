// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int m = nums.size();
//         for(int i = 0; i<m; i++){
//             for(int j= i+1; j<m; j++){
//                 if(target == nums[i] + nums[j]){
//                      return {i,j};
//                 }
//             }
//         }
//         return {};
//     }
// };