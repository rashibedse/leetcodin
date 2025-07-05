Wow, in college my self talk really takes a turn for the worse, it is complete unaduterated hindi mahn. I mean I should enjoy this I am not gonna have much chance 3 years later. Well 
I did actually try Two Sum, but like, I am getting a syntax error which is. I think Two Sum is supposed to be the easiest sum but like, oh well. 
my first try cuz im gonna look back at this and laugh so frigging hard: 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int k=0;
        for(auto i : nums)
        {

            for(auto j : nums)
            {
                if(int(&nums[i]+ &nums[j])==target)
                {
                    result[k]=i;
                    result[k+1]=j;
                    return result;
                }
            }
        }
        return result; 
        

    }
};

Yeah line 14 yeah yeah laugh all u want it is my 3rd problem haha v funny. Im in college now so- imma go home: i dont have time at home to do this but, tomorrow probs fs. 