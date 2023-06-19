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