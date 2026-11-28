/*
 * LeetCode 151 - Reverse Words in a String
 * https://leetcode.com/problems/reverse-words-in-a-string/
 * Difficulty: Medium
 *
 * Idea:
 *   Extract words by tracking non-space character lengths, store them in
 *   a vector, then concatenate in reverse order with single spaces to
 *   produce the final string.
 */

class Solution {
public:
    string reverseWords(string s) {
        vector<string> pos;
        int idx=0, lenth=0;

        for(int i=0; i<s.size(); i++){
            if(check(s[i])) lenth++;
            else{
                if(lenth>0){
                pos.push_back(s.substr(i-lenth,lenth));
                lenth=0;
                }
            }
        }
        
       if(lenth>0) pos.push_back(s.substr(s.size()-lenth,lenth));

        int len=pos.size();
        for(int i=0; i<(pos.size()/2); i++) swap(pos[i],pos[len-1-i]);
        
        string ans;
        for(int i=0; i<pos.size(); i++){
            if(i>0) ans+=" ";
            ans+=pos[i];
        }

        return ans;
    }
private :
    bool check(char str){
        return str!=' ';
    }
};
