#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void DiamondPyramidPattern1(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                cout << "  ";
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << "* ";
            }
            for (int j = 0; j < n - i - 1; j++) {
                cout << "  ";
            }
            cout << endl;
        }
    }
    void DiamondPyramidPattern2(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                cout << "  ";
            }
            for (int j = 0; j < 2 * n - ( 2 * i + 1 ); j++) {
                cout << "* ";
            }
            for (int j = 0; j < i; j++) {
                cout << "  ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;
    Solution obj;  
    obj.DiamondPyramidPattern1(n);
    obj.DiamondPyramidPattern2(n);
    return 0;
}