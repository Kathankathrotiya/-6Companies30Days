#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<vector<int>> ans;
        comb(k, n, 1, {}, ans);
        return ans;
    }

 private:
    void comb(int k, int n, int s, vector<int>&& res, vector<vector<int>>& ans) 
    {
        if (k == 0 && n == 0) 
        {
            ans.push_back(res);
            return;
        }

        if (k == 0 || n <= 0)
        return;

        for (int i = s; i <= 9; ++i) 
        {
            res.push_back(i);
            //recursive call till returns and reduces to 0
            comb(k - 1, n - i, i + 1, move(res), ans);
            res.pop_back();
        }
    }
};