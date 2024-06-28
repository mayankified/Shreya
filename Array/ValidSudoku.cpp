#include <bits/stdc++.h>
using namespace std;

// Mayank Kashyap
// https://leetcode.com/problems/valid-sudoku/description/

// Problem: Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

// Each row must contain the digits 1-9 without repetition.
// Each column must contain the digits 1-9 without repetition.

// Approach : We will use three sets to store the digits of the rows, columns and the 3x3 subgrids. We will iterate through the board and store the digits of the rows, columns and the 3x3 subgrids in the sets. If the digit is already present in the set, we will return false. If the digit is not present in the set, we will insert the digit in the set. We will return true if the board is valid.

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        unordered_set<char> row[9], col[9], subgrid[9];

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                char digit = board[i][j];
                if (digit == '.') continue;
                if(row[i].find(digit)!=row[i].end()) return false;
                row[i].insert(digit);

                if(col[j].find(digit)!=col[j].end()) return false;
                col[j].insert(digit);
                int subgrid_index=(i/3)*3+j/3;
                if(subgrid[subgrid_index].find(digit)!=subgrid[subgrid_index].end()) return false;
                subgrid[subgrid_index].insert(digit);
            }

        }
        return true;
    }
};