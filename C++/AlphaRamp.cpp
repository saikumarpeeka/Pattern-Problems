#include <iostream>
using namespace std;

class Solution {
public:
    void AlphaRamp (int n) {
        for(int i = 0; i < n; i++) {
            char ch = 'A' + i;
            for(int j = 0; j <= i; j++) {
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
    obj.AlphaRamp(n);
    return 0;
}