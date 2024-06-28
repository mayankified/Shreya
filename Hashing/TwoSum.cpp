#include <bits/stdc++.h>
using namespace std;

// Mayank Kashyap
//https://leetcode.com/problems/two-sum/
//Problem: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//Approach: Using Hashing, we can store the value and its index in a map and check if the value is present in the map or not.
//If it is present, then we return the index of the value and the index of the current element.
//Else, we store the value and its index in the map.
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int value=target-nums[i];
            if(mp.find(value)!=mp.end())
            return {i,mp[value]};
            else{
                mp[nums[i]]=i;
            }
        }
        return {};
    }
};