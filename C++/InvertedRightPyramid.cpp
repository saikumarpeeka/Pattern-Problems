#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void InvertedRightPyramid(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = n; j > i; j--) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;
    Solution obj;
    obj.InvertedRightPyramid(n);
    return 0;
}