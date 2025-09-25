#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void RightAngledTrainglePattern(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
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
    obj.RightAngledTrainglePattern(n); 
    return 0;
}