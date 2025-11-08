#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void backtrack(int n, int k, int start, vector<int>& curr, vector<vector<int>>& ans) {
        if (curr.size() == k) {
            ans.push_back(curr);
            return;
        }
        for (int i = start; i <= n; i++) {
            curr.push_back(i);
            backtrack(n, k, i + 1, curr, ans);
            curr.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> curr;
        backtrack(n, k, 1, curr, ans);
        return ans;
    }
};

int main() {
    Solution sol;
    int n = 4, k = 2;
    vector<vector<int>> res = sol.combine(n, k);
    for (auto v : res) {
        for (auto x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}
