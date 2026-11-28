/*
 * LeetCode 1071 - Greatest Common Divisor of Strings (Optimal)
 * https://leetcode.com/problems/greatest-common-divisor-of-strings/
 *
 * idea: Another direction of the solution is to consider from a mathematical perspective.
 *       Since str1 and str2 share common divisor string.
 *       So it is easy to consider that str1+str2==str2+str1. If this equation holds, well, the answer is that prefix of string.
 *       The prefix's lenth is just gcd(size(str1),size(str2)).
 */

class Solution{
public:
      string gcdOfStrings(string str1, string str2){

             if (size(str1)<size(str2)) str1.swap(str2);
             if (str1+str2==str2+str1){
                 int len=__gcd(size(str2), size(str1));
                 return str2.substr(0,len);
             }
             else return "";  
    }
}
