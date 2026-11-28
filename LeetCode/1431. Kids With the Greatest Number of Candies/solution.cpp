/*
 * LeetCode 1431 - Kids With the Greatest Number of Candies
 * https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
 * Difficulty: Easy
 *
 * Idea:
 *   Two loops: first to find the global max, second to check each kid's total (max + extraCandies) and store the boolean result in ans
 */
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int maxvalue=INT_MIN;
        vector<bool> ans;

        for(auto inter:candies) if(inter > maxvalue) maxvalue=inter;

        for(auto inter:candies) ans.push_back(inter+extraCandies >= maxvalue);
        
        return ans;
    }
};
