class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int index = abs(nums[i]) - 1;
            if(index < nums.size()){
                nums[index] = -abs(nums[index]);
            }
        }
        vector<int> vec1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                vec1.push_back(i+1);
            }
        }
        return vec1;
    }
};