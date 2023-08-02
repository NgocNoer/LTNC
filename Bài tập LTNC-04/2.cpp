#include <iostream>
#include <vector>
using namespace std;

int minOperations(vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    if (sum % nums.size() != 0) {
        return -1;
    }
    int target = sum / nums.size();
    int currSum = 0, operations = 0;
    for (int i = 0; i < nums.size(); i++) {
        currSum += nums[i];
        if (currSum == target * (i + 1)) {
            operations += i;
        }
    }
    return operations;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int ans = minOperations(nums);
    if (ans == -1) {
        cout << "Impossible" << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}