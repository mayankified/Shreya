#include <bits/stdc++.h>
using namespace std;

//Mayank Kashyap
//https://leetcode.com/problems/group-anagrams/description/

// Problem: Given an array of strings strs, group the anagrams together. You can return the answer in any order.

//APPROACH: We will use a map to store the frequency of the characters of the strings. We will iterate through the strings and sort the strings. We will store the sorted strings in the map and the original strings in a vector. We will iterate through the map and store the original strings in a vector. We will return the vector of vectors.

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;//map to store the sorted strings and the original strings
        for(auto s:strs){//iterate through the strings
            string temp=s;
            sort(temp.begin(),temp.end());//sort the string
            mp[temp].push_back(s);//store the sorted string and the original string in the map
        }
        vector<vector<string>> ans;//vector of vectors to store the original strings
        for(auto i:mp){
            ans.push_back(i.second);//store the original strings in the vector of vectors
        }
        return ans;//return the vector of vectors
    }
};