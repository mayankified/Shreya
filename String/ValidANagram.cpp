#include <bits/stdc++.h>
using namespace std;

//Mayank Kashyap
//https://leetcode.com/problems/valid-anagram/description/

// Problem: Given two strings s and t, return true if t is an anagram of s, and false otherwise.

//APPROACH: We will use a map to store the frequency of the characters of the strings. We will iterate through the first string and increment the frequency of the characters in the map. Then we will iterate through the second string and decrement the frequency of the characters in the map. If the frequency of the characters are not equal, we will return false. If the frequency of the characters are equal, we will return true.


class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;//if the size of the strings are not equal, return false
        unordered_map<char,int> mp;//map to store the frequency of the characters
        for(int i=0;i<s.size();i++){ //iterate through the first string
            mp[s[i]]++;//increment the frequency of the character
            mp[t[i]]--;//decrement the frequency of the character
        }
        for(auto i:mp) cout<<i.first<<" "<<i.second<<endl;//print the map
        for(auto x:mp){//iterate through the map
            if(x.second!=0) return false;//if the frequency of the characters are not equal, return false
        }
        return true;//return true
    }
};

int main() {
    Solution s;
    string s1="rat",s2="car";
    cout<<s.isAnagram(s1,s2)<<endl;
    return 0;
}
