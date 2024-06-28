#include <bits/stdc++.h>
using namespace std;

// Mayank Kashyap
// https://leetcode.com/problems/product-of-array-except-self/

// Problem: Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// APPROACH: We will use two arrays to store the product of the elements to the left and right of the current element. We will iterate through the array and store the product of the elements to the left of the current element in the left array. We will iterate through the array in reverse and store the product of the elements to the right of the current element in the right array. We will iterate through the array and store the product of the elements to the left and right of the current element in the answer array. We will return the answer array.

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();//size of the array
        int prefix_product[n]{}, suffix_product[n]{};//arrays to store the product of the elements to the left and right of the current element
        prefix_product[0] = 1;
        suffix_product[n - 1] = 1;
        vector<int> answer(n);//vector to store the product of the elements to the left and right of the current element
        for (int i = 0; i < n; i++)
        {
            if (i == 0)//if the current element is the first element
            {
                prefix_product[i] = 1;//product of the elements to the left of the current element is 1
                suffix_product[n - 1 - i] = 1;//product of the elements to the right of the current element is 1
            }
            else
            {
                prefix_product[i] = nums[i - 1] * prefix_product[i - 1];//product of the elements to the left of the current element
                suffix_product[n - 1 - i] = nums[n - i] * suffix_product[n - i];//product of the elements to the right of the current element
            }
        }
        for (int i = 0; i < n; i++)
        {
            answer[i] = prefix_product[i] * suffix_product[i];//product of the elements to the left and right of the current element
        }
        return answer;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4};
    s.productExceptSelf(nums);
    return 0;
}