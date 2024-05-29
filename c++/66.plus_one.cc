class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int data = 1;
        for(auto it = digits.rbegin() ; it != digits.rend() ; it++) {
            *it = *it + data;
            data = *it / 10;
            *it = *it % 10;
            if (data == 0) break;
        }
        if (data == 1) digits.insert(digits.begin(), 1);
        return digits;
    }
};