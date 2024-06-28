#include<bits/stdc++.h>
using namespace std;

// Mayank Kashyap
// https://leetcode.com/problems/longest-consecutive-sequence/description/

// Problem: Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

//Approach: We will use a set to store the elements of the array. We will iterate through the array and insert the elements in the set. We will iterate through the array again and check if the element-1 is present in the set. If the element-1 is not present in the set, we will check if the element+1 is present in the set. If the element+1 is present in the set, we will increment the count and update the maximum length. We will return the maximum length.

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());//inserting the elements of the array in the set
        int max_length=0;

        for(int i=0;i<nums.size();i++)//iterating through the array
        {
            if(s.find(nums[i]-1)==s.end()){//checking if the element-1 is present in the set
                int count=1;
                int num=nums[i];//storing the element in num
                while(s.find(num+1)!=s.end())//checking if the element+1 is present in the set
                {
                    count++;
                    num++;
                }
                max_length=max(max_length,count);//updating the maximum length
            }
        }
        return max_length;
    }
};