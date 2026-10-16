#include <iostream>
using namespace std;

class Solution {
public:
    void pattern7(int n) {
        int cnt = 1;

        for (int i = n; i >= 1; i--) {
            for (int j = 0; j < i - 1; j++) {
                cout << " ";
            }

            for (int j = 0; j < cnt; j++) {
                cout << "*";
            }

            cout << endl;
            cnt += 2;
        }
    }
};
