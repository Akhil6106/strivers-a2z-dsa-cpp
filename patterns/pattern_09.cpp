#include <iostream>
using namespace std;

class Solution {
public:
    void pattern9(int n) {
        // Upper half
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }
            cout << endl;
        }

        // Lower half
        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};
