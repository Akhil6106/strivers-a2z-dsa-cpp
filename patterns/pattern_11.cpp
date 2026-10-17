#include <iostream>
using namespace std;

class Solution {
public:
    void pattern11(int n) {
        for (int i = 1; i <= n; i++) {
            int a = (i % 2 == 0) ? 0 : 1;

            for (int j = 0; j < i; j++) {
                cout << a;
                a = 1 - a;
            }

            cout << endl;
        }
    }
};
