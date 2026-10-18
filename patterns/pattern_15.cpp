#include <iostream>
using namespace std;

class Solution {
public:
    void pattern15(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                char a = 'A' + j;
                cout << a;
            }
            cout << endl;
        }
    }
};
