#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void InvertedNumberRightPyramid(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = n; j > i; j--) {
                cout << n - j + 1 << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;
    Solution obj;
    obj.InvertedNumberRightPyramid(n);
    return 0;
}