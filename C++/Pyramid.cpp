#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void Pyramid(int n) {
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
};

int main() {
    int n;
    cin >> n;
    Solution obj;  
    obj.Pyramid(n); 
    return 0;
}