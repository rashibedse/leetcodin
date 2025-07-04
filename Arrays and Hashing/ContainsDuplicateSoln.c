class Solution
{
    public:
        bool containsDuplicate(vector<int>& nums)
        {
            unordered_set<int> dict;
            for(auto num:nums)
            {
                if (dict.count(num)>0) 
                    return true;
                dict.insert(num);
            }
            return false;
        }
};