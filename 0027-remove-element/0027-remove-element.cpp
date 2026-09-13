class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ram = 0;
        for (int j = 0 ; j<nums.size(); j++ ){
            if(nums[j] != val ){
                nums[ram] = nums[j];
                ram++;
            }
        }
            
            return ram;
        } 
    };

    

        
 