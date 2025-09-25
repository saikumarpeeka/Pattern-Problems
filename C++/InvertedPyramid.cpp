#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void InvertedPyramid(int n) {
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
    obj.InvertedPyramid(n); 
    return 0;
}