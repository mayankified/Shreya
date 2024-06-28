#include <bits/stdc++.h>
using namespace std;

//Mayank Kashyap
//https://leetcode.com/problems/reverse-integer/
//Problem: Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
//Approach: We can reverse the integer by taking the last digit of the number and adding it to the answer and then removing the last digit from the number.
//If the answer goes out of the range of 32-bit signed integer, then return 0.


class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x!=0){
            if (ans > INT_MAX / 10 || ans < INT_MIN / 10 )  return 0; 
            ans=10*ans+(x%10);
            x/=10;
        }
        return ans;
    }
};