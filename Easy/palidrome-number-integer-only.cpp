/* Given an integer x, return true if x is a palindrome, and false otherwise.
*  But without converting the integer to string
*/

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int intLength(int x) {
        int count = 0;
        while (x > 0) {
            count++;
            x /= 10;
        }
        return count;
    }
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        
        int length = intLength(x);
        
        for (int i = 1; i <= length / 2; ++i) {
            if (int(int(x / pow(10, length - i)) % 10) != 
                int(x % int(pow(10, i)) / pow(10, i - 1))) {
                return false;
        }
    }
    return true;
    }
};

int main() {
    Solution code;
    int x = 121;
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