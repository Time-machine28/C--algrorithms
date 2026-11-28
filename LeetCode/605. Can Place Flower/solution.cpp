/*
 * LeetCode 605 - Can Place Flowers
 * https://leetcode.com/problems/can-place-flowers/
 * Difficulty: Easy
 *
 * Idea:
 *   Use a 1-indexed array with zero borders; greedily plant when both
 *   neighbors are empty, then return whether planted count >= n.
 */

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int list[1000000]={}, pos=0, ans=0;

        for(auto inter:flowerbed){
            ++pos;
            if(inter==1) list[pos]=1;
        }

        for(int i=1; i<=flowerbed.size(); i++){
            if(list[i-1]!=1 && list[i+1]!=1 && list[i]==0) list[i]=1, ans++;
        }

        return ans>=n; 
    }
};
