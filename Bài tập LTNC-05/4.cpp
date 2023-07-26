#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (nums[mid] == target) {
            return mid; // trả về vị trí của Y trong dãy số
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return left; // trả về vị trí của giá trị nhỏ nhất nhưng lớn hơn Y (cận trên) trong dãy
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n); // khởi tạo vector để lưu trữ các số
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int target;
        cin >> target;

        int index = binarySearch(nums, target); // sử dụng tìm kiếm nhị phân để tìm vị trí của Y

        if (nums[index] == target) {
            cout << "Yes " << index + 1 << endl;
        } else {
            cout << "No " << index + 1 << endl;
        }
    }

    return 0;
}