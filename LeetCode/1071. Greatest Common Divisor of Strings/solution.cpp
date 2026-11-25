/*
 * LeetCode 1071 - Greatest Common Divisor of Strings
 * https://leetcode.com/problems/greatest-common-divisor-of-strings/
 * Difficulty: Easy
 *
 * Idea:
 *   The greatest common divisor must come from the smallest of the two. So I just need to take all
 *   the profixes of the shorter string, form longest to shortest, and check each of them against both 
 *   strings; the first one that can be repeated to form both strings is correct answer. 
 */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public
:
    bool check(const string& s, const string& minstr){
      
        if(s.size()%minstr.size()!=0) return false;

        int n=s.size()/minstr.size();
  
        for(int i=0; i<n; i++) if(s.compare(i * minstr.size(), minstr.size(), minstr) != 0)  return false;
  
        return true;
    }
 
    string gcdOfStrings(string str1, string str2) {
      
        for(int len=size(str2); len>0; len--){
            string minstr=str2.substr(0,len);
            if(check(str1, minstr) && check(str2, minstr)) return minstr;
        }
      
        return "";
    }
};
