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
Nope: it wont work it wont work i actually need to look at solutions. 
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

Day 2. 
I am gonna study all the solutions: without chatgpt cuz I like to torture myself that way. But in the extended solutions I found what looks like is the closest to the solution NC provided: but i am gonna ask for the complexities to perplexity cuz: explanations and added info rock. This is a good way to spend the hour: it is gonna be a good roi fs. 

Solution by uniqs: May 31 2023. 

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

Yeah this would not work on MS Turbo C lmao. New keyworkds include: vector, unordered_set, auto (can figure that much out), count and insert. brb. 
I am stupid. 
I really am stupid. 
C doesnt have classes. I was wondering wtf was wrong with this solution yeah yep. C doesnt have classes. It has procedures and modules. C++ has classes. and vectors. There is no optimal solution: Language has been switched to C++ unfamiliarity purposes. She's learning people. She is learning.
DISCLAIMER: I still study concepts using a pencil and paper cuz your girly has not advanced and evolved since 2010. Old school works best for me. 
STL stands for standard template library omg. 

I have studied and now everything makes sense. It is actually really simple, I just did not know stuff existed. We have our original array of elements nums and we make our empty has table dict. Then we are traversing through the nums dynamic array. Then we are seeing if the number of times the element num is present in the dict set: if that is greater than 0, then the set contains duplicate. If we add stuff like, count the number of duplicates and print those out: I suspect we'd require set and not unordered set. But yeah: the traversing takes O(n) worst case and O(n) SC.

And with that: Im done with my first (?) dsa problem. 