class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n =nums.size();
        vector<int>arr(n);
        for(int i =0 ;i<n;i++){
            if(nums[i]==0){
                arr[i] = 0;
            }else{
                int move = nums[i] % n; 
                int nw = (i+move+n)%n;
                arr[i]= nums[nw];
            }
        }
        return arr;
    }
};