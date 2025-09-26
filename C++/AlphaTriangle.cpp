#include <iostream>
using namespace std;

class Solution {
public:
    void AlphaTriangle(int n) {
        for (int i = 0; i < n; i++) {
            for(char ch = ('A' + n - 1) - i; ch <= ('A' + n - 1); ch++) {
                cout << ch << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;
    Solution obj;
    obj.AlphaTriangle(n);
    return 0;
}