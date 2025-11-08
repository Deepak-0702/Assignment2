#include <bits/stdc++.h>
using namespace std;

void deleteMidUtil(stack<int>& s, int k) {
    if (k == 1) {
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    deleteMidUtil(s, k - 1);
    s.push(temp);
}

void deleteMid(stack<int>& s) {
    int k = (s.size() / 2) + 1;
    deleteMidUtil(s, k);
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    deleteMid(s);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
