class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for (auto a : arr) {
            if (a <= k)
                k++;
            else
                break;
        }
        return k;
    }
};