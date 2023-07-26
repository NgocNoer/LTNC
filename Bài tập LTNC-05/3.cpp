#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);                        // khởi tạo vector để lưu trữ các số
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int index;
    cin >> index;                               // đọc chỉ số của phần tử cần xoá

    nums.erase(nums.begin() + index - 1);       // xoá phần tử được chỉ định và cập nhật dãy số

    int a, b;
    cin >> a >> b;                              // đọc các số a và b

    nums.erase(nums.begin() + a - 1, nums.begin() + b - 1); // xoá các phần tử từ a đến b - 1

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";                 // in ra dãy số còn lại
    }

    return 0;
}