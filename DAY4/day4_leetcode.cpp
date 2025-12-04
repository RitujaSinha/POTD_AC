class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());

        int greatest =0, maxGreatest = INT_MIN;

        for(int i = 1; i <= 1000; i++){
            if(maxi % i == 0 && mini % i == 0){
                greatest = i;
                maxGreatest = max(greatest, maxGreatest);
            }
        }
        return maxGreatest;
    }
};