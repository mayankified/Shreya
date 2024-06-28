#include<bits/stdc++.h>
using namespace std;

// Mayank Kashyap
// https://leetcode.com/problems/valid-palindrome/description/

//problem: Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

class Solution {
public:
    bool isPalindrome(string s) {
        string shreya="";
        for(auto i :s){//storing only the alphanumeric characters in shreya
            if(isalnum(i)){
                shreya+=tolower(i);
            }
        }
        int left=0,right=shreya.size()-1;//using two pointers to check if the string is a palindrome
        while(left<right){
            if(shreya[left]!=shreya[right]) return false;//if the characters at the left and right pointers are not equal, return false
        }
        return true;

    }
};

