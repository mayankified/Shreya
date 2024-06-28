#include <bits/stdc++.h>
using namespace std;

// Mayank Kashyap
//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

// Problem: Given an array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Return the indices of the two numbers (1-indexed) as an integer array answer of size 2, where 1 <= answer[0] < answer[1] <= numbers.length.

//Approach: We will use two pointers to find the two numbers that add up to the target. We will use two pointers left and right. If the sum of the numbers at the left and right pointers is equal to the target, we will return the indices of the two numbers. If the sum of the numbers at the left and right pointers is less than the target, we will increment the left pointer. If the sum of the numbers at the left and right pointers is greater than the target, we will decrement the right pointer.

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        while(l<r){
            if(numbers[l]+numbers[r]==target) return {l+1,r+1};//returning the indices of the two numbers
            else if(numbers[l]+numbers[r]<target) l++; //incrementing the left pointer
            else r--; //decrementing the right pointer
        }
        return {};
    }
};