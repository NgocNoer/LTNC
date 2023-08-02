#include <iostream>
#include <vector>
using namespace std;

// Hàm tìm kiếm nhị phân đệ qui
int binarySearchRecursive(vector<int>& arr, int low, int high, int target) {
    if (low > high) {
        return -1; // Không tìm thấy phần tử trong mảng
    }

    int mid = low + (high - low) / 2;
    if (arr[mid] == target) {
        return mid; // Tìm thấy phần tử trong mảng
    } else if (arr[mid] > target) {
        return binarySearchRecursive(arr, low, mid - 1, target); // Tìm kiếm bên trái của mảng
    } else {
        return binarySearchRecursive(arr, mid + 1, high, target); // Tìm kiếm bên phải của mảng
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int target = 5;

    int index = binarySearchRecursive(arr, 0, arr.size() - 1, target);
    if (index == -1) {
        cout << "Khong tim thay " << target << " trong mang" << endl;
    } else {
        cout << "Tim thay " << target << " tai vi tri " << index << endl;
    }

    return 0;
}