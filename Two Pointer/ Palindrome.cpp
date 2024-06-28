#include <bits/stdc++.h>
using namespace std;

//Mayank Kashyap
//https://leetcode.com/problems/palindrome-number/
//Problem: Given an integer x, return true if x is palindrome integer.
//Approch: Convert the integer to a string and then check if the string is a palindrome or not.
//Used two pointers to check if the string is a palindrome or not.
//Left pointer starts from 0 and right pointer starts from the end of the string, if the characters at the left and right pointers are not equal, then return false.

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string s=to_string(x);
        int l=0,r=s.size()-1;
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};