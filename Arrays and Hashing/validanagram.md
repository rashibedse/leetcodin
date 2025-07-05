Well: this is clearly a string matching algorithm implementation and i applied the naive one cuz that was the only one i could make and...
leetcode hanged: ig it went into an infinite loop, or something. imma get perplexity to answer that in a while but first imma see the solutions. Here is my naive approach: 

class Solution {
public:
    bool isAnagram(string s, string t) {
        int m= s.length();
        int n= t.length();
        int i=0, j=0;
        while(i<=(n-m))
        {
            for(j=0; j<m; j++)
            {
                if(s[i+j]!=t[j])
                    break;
                j++;
            }
            if (j==m)
                cout<<"Anagram found at index: "<< t[i];
                i=i+m;
            else if(j==0)
                i++;
            else
                i=i+j;
        }
    }
};

Wow this is: i dont know what to call this approach. Oki my dumbasss didnt read the question correct this is infact not a string matching question: anagrams are the words entirely switched, so first of all, that is complicated to even start thinking about but second, we are couting individual frequencies of each, and then comparing which then actually makes sense to the solution posed. cool. imma watch the whole video. Then we have a naive approach, matching each character. 
Yeah we make a hashmap for the counter- and this solution by niits is really cool and kinda different. Ill spend some time tomorrow, in college kinda covertly how to make this stuff tho, hashmaps and stuff. 

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> counter;

        for (char ch : s) {
            counter[ch] = counter[ch] + 1;
        }

        for (char ch : t) {
            if (counter.find(ch) == counter.end() || counter[ch] == 0) {
                return false;
            }
            counter[ch] = counter[ch] - 1;
        }

        return true;        
    }
};

and this takes O(n) cuz it is iterating over a hashmap: so i think it is O(s+t) and the space complexity is O(1) cuz it is just iterating over one hashmap

Reading the solutions by varma_5247: it is very me friendly and but holyshit my brain has been taken for a ride. 
wait imma just: https://leetcode.com/problems/valid-anagram/solutions/6840474/3-method-s-beginner-freindly-java-c-python
das ist gut meine freunde.

bro uses an array: so that is crazy:
class Solution
{
    public:
        bool isAnagram(string s, string t)
        {
            int count[26]={0};

            for(char x: s)
            {
                count[x-'a']++;  //i am guessing this means save the count at the position of the 22nd letter of the 23rd   letter 
            }

            for (char x: t)
            {
                count[x-'a']--;
            }

            for (int val:count)
            {
                if(val!=0)
                {
                    return false; 
                }
            }
            return true; 
        }
}

And then this was the one leetcode recommended: 
class Solution
{
    public:
        bool isAnagram(string s, string t)
        {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            return s==t; 
        }
}; with constant sc O(1) but the tc going to O(n log n). we dont have time but we have memory- always. 

actually imma finish this today oki: so the last one is the easy one with more memory: O(s+t) O(s+t):

class Solution
{
    public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char,int> count;
        if(s.length()!=t.length)
            return false; 

        for(auto x: s)
            count[x]++;

        for (auto x:t)
            count[x]--;
        
        for (auto x: count)
        {
            if(x.second!=0) //i think that means value in the second column? like of the hashmap. 
                return false;
        }
        return true; 
    }    

};
My bad this is not the NC one, but i kinda like it better.So yep. oki this was cool- I am done with my second problem. Oh wait the last one is the same as the first solution i mentioned. SillY mE. Aight imma give the second one, cuz that is the most difficult to learn hehe. 