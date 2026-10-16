#include <iostream>
using namespace std;

class Solution {
public:
    void pattern8(int n) {
        int cnt = 2 * n - 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                cout << " ";
            }

            for (int j = 0; j < cnt; j++) {
                cout << "*";
            }

            cout << endl;
            cnt -= 2;
        }
    }
};
