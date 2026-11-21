
// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {

//         int n = nums.size();

//         int i = n - 2;

//         while (i >= 0 && nums[i] >= nums[i + 1]) {
//             i--;
//         }

//         if (i >= 0) {

//             int j = n - 1;

//             while (nums[j] <= nums[i]) {
//                 j--;
//             }

//             // Swap both elements
//             int temp = nums[i];
//             nums[i] = nums[j];
//             nums[j] = temp;
//         }

//         int left = i + 1;
//         int right = n - 1;

//         while (left < right) {

//             int temp = nums[left];
//             nums[left] = nums[right];
//             nums[right] = temp;

//             left++;
//             right--;
//         }
//     }
// };
