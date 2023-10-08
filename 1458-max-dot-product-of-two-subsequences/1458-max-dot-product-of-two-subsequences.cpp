class Solution {
public:

    int dp[501][501][2];

    int rec(int pos1,int pos2,bool isEmpty,vector<int> &nums1,vector<int> &nums2){

        //base case
        if(pos1==nums1.size() or pos2==nums2.size()){
            if(isEmpty==true)return -1e9;
            return 0;
        }
        if(dp[pos1][pos2][isEmpty]!=-1)return dp[pos1][pos2][isEmpty];
        
        int p=nums1[pos1]*nums2[pos2]+rec(pos1+1,pos2+1,false,nums1,nums2);
        int q=rec(pos1+1,pos2,isEmpty,nums1,nums2);
        int r=rec(pos1,pos2+1,isEmpty,nums1,nums2);
        return dp[pos1][pos2][isEmpty]=max(p,max(q,r));
    }

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        memset(dp,-1,sizeof(dp));
        return rec(0,0,true,nums1,nums2);
    }
};