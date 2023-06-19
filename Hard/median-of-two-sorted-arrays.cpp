/* Given two sorted arrays nums1 and nums2 of size m and n respectively, 
*  return the median of the two sorted arrays.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        int temp_size = size1 + size2;
        vector <int> temp_vector;
        int stop_value = int((temp_size) / 2) + 1;
        int k = 0;
        auto j = nums2.begin();
        auto i = nums1.begin();

        while (true) {
            if (k == stop_value) {
                break;
            }

            if (i == nums1.end()) {
                temp_vector.push_back(*j);
                j++;
                k++;
                continue;
            }

            if (j == nums2.end()) {
                temp_vector.push_back(*i);
                i++;
                k++;
                continue;
            }

            if (*j > *i) {
                temp_vector.push_back(*i);
                i++;
            }

            else if (*j <= *i) {
                temp_vector.push_back(*j);
                j++;
            }

            k++;
        }

        if (temp_size % 2 == 1) {
            return temp_vector[k - 1];
        }
        else {
            return double(temp_vector[k - 2] + temp_vector[k - 1]) / 2.0;
        }
    }
};

int main() {
    Solution code;
    vector<int> nums1 = {1, 2}, nums2 = {3, 4};
    double median;

    median = code.findMedianSortedArrays(nums1, nums2);
    
    cout << "Median of two sorted arrays is: " << median;
    
    return 0;
}