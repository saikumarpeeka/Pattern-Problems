#include <iostream>
using namespace std;

class Solution {
public:
    void SymmetricVoidPattern(int n) {
        int space = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= n - i; j++) cout << "* ";
            for (int j = 0; j < space; j++) cout << "  ";
            for (int j = 1; j <= n - i; j++) cout << "* ";
            space += 2;
            cout << endl;
            
        }
        space = 2 * n - 2;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) cout << "* ";
            for (int j = 0; j < space; j++) cout << "  ";
            for (int j = 1; j <= i; j++) cout << "* ";
            space -= 2;
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;
    Solution obj;
    obj.SymmetricVoidPattern(n);
    return 0;
}