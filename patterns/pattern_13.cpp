#include <iostream>
using namespace std;

class Solution {
public:
    void pattern13(int n) {
        int a = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                cout << a << " ";
                a++;
            }
            cout << endl;
        }
    }
};
