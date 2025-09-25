#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void RectangularPattern(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
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
    obj.RectangularPattern(n);
    return 0;
}