#include <iostream>
#include <vector>
using namespace std;

int equalizeArray(vector<int>& arr) {
    // Đếm tần số xuất hiện của các phần tử trong mảng
    unordered_map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }
    
    // Tìm phần tử có tần số xuất hiện cao nhất
    int maxFreq = 0;
    for (auto it : freq) {
        maxFreq = max(maxFreq, it.second);
    }
    
    // Số lần cần xóa là tổng số phần tử trừ đi tần số xuất hiện cao nhất
    int deletions = arr.size() - maxFreq;
    
    return deletions;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int ans = equalizeArray(nums);
    if (ans == -1) {
        cout << "Impossible" << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}
