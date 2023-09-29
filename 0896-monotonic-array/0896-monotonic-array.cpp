class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        bool isincreasing = true;
        bool isdecreasing = true;
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] < arr[i-1]) {
                isincreasing = false;
            }
            if(arr[i] > arr[i-1]) {
                isdecreasing = false;
            }
        }
        return isincreasing || isdecreasing;
    }
};
