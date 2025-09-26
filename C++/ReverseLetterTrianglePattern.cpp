#include <iostream>
using namespace std;

class Solution {
public:
    void ReverseLetterTrianglePattern(int n) {
        for(int i = 0; i < n; i++) {
            for(char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
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
    obj.ReverseLetterTrianglePattern(n);
    return 0;
}