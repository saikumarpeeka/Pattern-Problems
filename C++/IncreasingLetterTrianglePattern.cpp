#include <iostream>
using namespace std;

class Solution {
public:
    void IncreasingLetterTrianglePattern(int n) {
        for(int i = 0; i < n; i++) {
            for(char ch = 'A'; ch <= 'A' + i; ch++) {
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
    obj.IncreasingLetterTrianglePattern(n);
    return 0;
}