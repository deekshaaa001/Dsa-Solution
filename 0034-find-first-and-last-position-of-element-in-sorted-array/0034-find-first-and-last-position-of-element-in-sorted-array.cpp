class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int n=nums.size();
    int si=-1,ei=-1;
    for(int i=0;i<n;i++){
    if(nums[i]==target && si==-1){
    si=i;
    }
    if(nums[i]==target && si!=-1){
    ei=i;
    }
    } 
    return {si,ei};
    }
};