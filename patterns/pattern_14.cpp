#include <iostream>
using namespace std;

class Solution {
public:
    void pattern14(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                char ch = 'A' + j;
                cout << ch;
            }
            cout << endl;
        }
    }
};
