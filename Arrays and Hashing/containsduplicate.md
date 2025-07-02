bool containsDuplicate(int* nums, int numsSize) {
    for(int i=0; i< numsSize; i++)
    {
        int current = *(nums+i);
        for (int j=i+1; j< numsSize; j++) 
        {
            if (current == nums[j])
            {
                return true;
                break;
            }
        }
    }
    return false;    
}

This was my initial try: classic brute force, 10th grader C. This was still a struggle to get through touching C after 3 months at the least but- we gotta start somewhere. Time complexity is O(n^2) and Space is O(1), i think. 
According to NeetCode: I got a Python solution: 


class Solution:
def containsDuplicate (self, nums: List[int]) -> bool:
    hashset = set()
    for n in nums:
        if n in hashet:
            return True
        hashset.add(n)
    return False

With a TC and SC of O(n): said to be the most efficient. Now my illustrious college DAA course had not covered hashing, (really appreciate it, great job), but I think it is that we have a hashset- which is an empty set, and we have our nums array. If the current element the for loop is pointing to is not in the hashset- throw it in the hashset. If we find that the element is already in the hashset- it is true and we break out. Badabaam. So no O(n^2) time complexity. 

Neetcode also mentioned sorting as an option: but I mean: Linear Sorting + actual checking- but that is still O(nlogn)- whoops my bad linear sort is not actually a sort it is a search. Now i understand why i got a C in that practical it is deserved. But still checking: sleection, insertion and bubble: all have their worst cases as O(n^2): so I dont think that really helps.

Unfortunately: I need to craft mine in C so imma get to work. I am thinking instead of hashset i just create a different array, and then compare those 2. In my head, that checks out. Wait lemme check how to make a new pointer(? reference?) array thing. Eh, I dont need it. 
Nope: it wont work it wont work i actually nee dto look at solutions. 
ALL SOLUTIONS IN THIS FRIGGING THING USE VECTORS. oki, the following solution has O(n), O(n) so ig that is the solution nc is talking about:

class Solution
{
    public:
    bool containsDuplicate (vector<int>& nums)
    {
        unordered_map<int,int> mp;
        for(auto i: nums) mp[i]++;
        bool flag = false;
        for (auto i : mp)
        {
            if (i.second >=2) return true;
        }
        return flag;
    }
};

Clearly not what nc said: so immana go study vectors and hashmaps and brb. 

https://leetcode.com/problems/contains-duplicate/solutions/2728722/all-possible-easy-solution-with-single-line-code-c
