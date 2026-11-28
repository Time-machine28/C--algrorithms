/*
 * LeetCode 345 - Reverse Vowels of a String
 * https://leetcode.com/problems/reverse-vowels-of-a-string/
 * Difficulty: Easy
 *
 * Idea:
 *   Record indices of all vowels using a helper string "aeiouAEIOU", then
 *   use two pointers to swap the vowels from both ends towards the middle,
 *   leaving all non-vowel characters in their original positions.
 */

class Solution {
public:
    string reverseVowels(string s) {

        const int N=3*1e5+10;
        int pos[N], idx=0, cal=0;
        string vowels="aeiouAEIOU";

        for(int i=0; i<s.size(); i++) if(vowels.find(s[i])!=string::npos) pos[++idx]=i, ++cal;
        
        
        for(int i=0; i<(idx/2); i++) swap(s[pos[i+1]],s[pos[cal--]]);

        return s; 
    }
};
