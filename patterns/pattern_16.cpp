#include <iostream>
using namespace std;

class Solution {
public:
    void pattern16(int n) {
        for (int i = 1; i <= n; i++) {
            char a = 'A' + i - 1;

            for (int j = 0; j < i; j++) {
                cout << a;
            }

            cout << endl;
        }
    }
};
