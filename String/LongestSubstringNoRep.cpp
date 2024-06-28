#include <bits/stdc++.h>
using namespace std;

//Mayank Kashyap
// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

// Problem: Given a string s, find the length of the longest substring without repeating characters.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();//size of the string
        if(!n) return 0;//if the string is empty, return 0
        int ans=0;//answer
        int start=0;//start of the substring
        unordered_map<char,int> mp;//map to store the index of the characters
        for(int i=0;i<n;i++){//iterate through the string
            if(mp.find(s[i])!=mp.end()){//if the character is already present in the map
                start=max(start,mp[s[i]]+1);//update the start of the substring
            }
            mp[s[i]]=i;//update the index of the character, if it is not present in the map
            ans=max(ans,i-start+1);//update the answer, if the length of the substring is greater than the answer
        }
        return ans;
    }
};