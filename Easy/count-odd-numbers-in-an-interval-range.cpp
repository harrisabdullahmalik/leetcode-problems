/* Given two non-negative integers low and high. 
*  Return the count of odd numbers between low and high (inclusive).
*/

#include <iostream>
using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        for (int i = low; i <= high; i++) {
            if (i % 2 != 0) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution code;
    int low = 2, high = 17, numberOfOdds;

    numberOfOdds = code.countOdds(low, high);

    cout << "The number of odds between " << low << " and " << high << " is: " << numberOfOdds << endl;

    return 0;
}