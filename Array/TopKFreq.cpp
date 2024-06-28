#include<bits/stdc++.h>
using namespace std;

//Mayank Kashyap
//https://leetcode.com/problems/top-k-frequent-elements/

// Problem: Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

//Approach: We will use a map to store the frequency of the elements of the array. We will iterate through the array and increment the frequency of the elements in the map. We will use a priority queue to store the elements of the map. We will iterate through the map and store the elements in the priority queue. We will pop the elements from the priority queue and store them in a vector. We will return the vector.

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;//map to store the frequency of the elements
        for(auto i:nums){//iterate through the array
            mp[i]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;//min heap, pair of frequency and element
        for(auto i:mp){//iterate through the map
            pq.push({i.second,i.first});//store the frequency and the element in the priority queue
            if(pq.size()>k){//if the size of the priority queue is greater than k
                pq.pop();//pop the element
            }
        }
        vector<int> ans;//vector to store the elements
        while(!pq.empty()){//iterate through the priority queue
            ans.push_back(pq.top().second);//store the element in the vector
            pq.pop();//pop the element
        }
        return ans;
    }
};