#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void RightAngledNumberPyramid2(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;
    Solution obj;
    obj.RightAngledNumberPyramid2(n);
    return 0;
}