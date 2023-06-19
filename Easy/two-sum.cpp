/* Given an array of integers nums and an integer target, 
*  return indices of the two numbers such that they add up to target.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> target_vector;
        int size = nums.size();

        for (int i = 0; i < size - 1; ++i) {
            for (int j = i + 1; j < size; ++j) {
                if (nums[i] + nums[j] == target) {
                    target_vector.push_back(i);
                    target_vector.push_back(j);
                    return target_vector;
                }
            }
        }

        return target_vector;
    }

    void print(vector <int> const &vect) {        
        for(int i=0; i < vect.size(); i++) {
            cout  << " " << vect.at(i);
        }
    }
};

int main() 
{
    Solution code;
    vector<int> array= {1, 2, 3, 4, 5}, number_indices;
    int target = 6;
    
    number_indices = code.twoSum(array, target);
    
    cout << "The indices that add up to " << target << " are:";
    code.print(number_indices);

    return 0;
}