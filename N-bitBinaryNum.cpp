#include <bits/stdc++.h>
using namespace std;

void generate(int n, string curr, int ones, int zeros) {
    if (curr.length() == n) {
        if (ones > zeros) cout << curr << " ";
        return;
    }
    generate(n, curr + '1', ones + 1, zeros);
    generate(n, curr + '0', ones, zeros + 1);
}

int main() {
    int n;
    cin >> n;
    generate(n, "", 0, 0);
    return 0;
}
