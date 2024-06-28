#include <bits/stdc++.h>
using namespace std;

//Mayank Kashyap
//https://leetcode.com/problems/divide-two-integers/
//Problem: Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.

// approach: We can subtract the divisor from the dividend until the dividend is greater than or equal to the divisor.
// used bit manipulation to optimize the solution, as subtraction is slow.

class Solution {
public:
    int divide(int dividend, int divisor) {
        const int MAX_INT = INT_MAX;
        const int MIN_INT = INT_MIN;

        if(divisor==0) return MAX_INT;
        if(dividend==0) return 0;
        if(dividend==MIN_INT && divisor==-1) return MAX_INT;

        bool negative = (dividend<0) ^ (divisor<0);//XOR

        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        long  ans=0;

        while(a>=b){
            long long temp=b;//temp is the divisor
            long long m=1;//m is the multiplier
            //if a is greater than or equal to 2*temp, then we can add 2*temp to the answer and double the multiplier
            while(a>=(temp<<1)){//temp<<1 is 2*temp
                temp<<=1;//temp is doubled
                m<<=1;//multiplier is doubled
            }
            a-=temp;//decrement a by temp
            ans+=m;//add m to the answer
        }
        if(negative) ans=-ans;
        if(ans>MAX_INT) return MAX_INT;
        if(ans<MIN_INT) return MIN_INT;
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.divide(10,3)<<endl;
    cout<<s.divide(7,-3)<<endl;
    return 0;
}