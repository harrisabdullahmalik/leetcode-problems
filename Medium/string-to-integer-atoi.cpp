/* Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer 
*  (similar to C/C++'s atoi function).
*/

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        string tempString;
        bool sign = false;
        bool leading_zero = false;
        bool digit_started = false;
        int n = 1;
        long long integer = 0;
        char numbers[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

        if (s[0] == '.') {
            return 0;
        }

        for (int i = 0; i < s.length(); i++) {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
                break;
            }
            if (!digit_started && (s[i] == '0')) {
                leading_zero = true;
                continue;
            }

            if (!digit_started && !leading_zero && !sign) {
                if (s[i] == ' ') {
                    continue;
                }

                if (s[i] == '+') {
                    sign = true;
                    continue;
                }

                if (s[i] == '-') {
                    n = -1;
                    sign = true;
                    continue;
                }
            }

            if (s[i] >= '0' && s[i] <= '9') {
                digit_started = true;
                tempString += s[i];
            }
            else if (leading_zero || digit_started || sign) {
                break;
            }
        }

        string tempString2 = tempString;
        int index = tempString.length() - 1;
        for (int i = 0; i < tempString.length(); i++) {
            tempString2[index] = tempString[i];
            index--;
        }

        if (tempString2.length() > 10) {
            if (n == -1) {
                return -2147483648;
            }
            return 2147483647;
        }

        for (int i = tempString2.length() - 1; i >= 0; --i) {
            for (int j = 0; j <= 9; j++) {
                if (tempString2[i] == numbers[j]) {
                    integer += (long long)(j) * (long long)(pow(10, i));
                    if ((n * integer) < -2147483647) {
                        return -2147483648;
                    }
                    if ((n * integer) > 2147483647) {
                        return 2147483647;
                    }
                    break;
                }
            }
        }

        return int(integer) * n;
    }
};

int main() {
    Solution code;
    string s = "4193 with words";
    int output_integer;

    output_integer = code.myAtoi(s);

    cout << "The output of the string \"" << s << "\" passed to the function is: " << output_integer << endl;

    return 0;
}