
#include <iostream>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int reversed = 0;

        while (n > 0) {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n = n / 10;
        }

        return reversed;
    }
};
