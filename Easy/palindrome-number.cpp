/* Given an integer x, return true if x is a palindrome, and false otherwise.*/

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string y = to_string(x);

        int string_length = y.length();

        for (int i = 0; i < string_length / 2; ++i) {
            if (y[i] != y[string_length - i - 1]) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution code;
    int x = 121121;
    bool palindrome;

    palindrome = code.isPalindrome(x);
    
    if (palindrome) {
        cout << "The integer " << x << " is a Palindrome" << endl;
    }
    else {
        cout << "The integer " << x << " is not a Palindrome" << endl;
    }
    
    return 0;
}