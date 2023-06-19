/* Given an array of unique integers salary where salary[i] is the salary of the ith employee.
*  Return the average salary of employees excluding the minimum and maximum salary. 
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        int max = salary[0];
        int min = salary[0];
        double total = 0;
        for (int i = 0; i < salary.size(); i++) {
            if (salary[i] > max) {
                max = salary[i];
            }
            else if (salary[i] < min) {
                min = salary[i];
            }
        }
        
        for (int i = 0; i < salary.size(); i++) {
            if (salary[i] == max || salary[i] == min) {
                continue;
            }
            total += salary[i];
        }
        
        return total / (salary.size() - 2);        
    }
};

int main() {
    Solution code;
    vector<int> salary = {4000, 3000, 1000, 2000};
    double average;

    average = code.average(salary);

    cout << "The average of the salaries is: " << average << endl;

    return 0;
}