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