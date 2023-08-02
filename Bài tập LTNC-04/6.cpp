#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Tìm giá trị lớn nhất của tập A và tập B
    int maxA = 0, maxB = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        maxA = max(maxA, x);
    }
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        maxB = max(maxB, x);
    }

    int count = 0;
    // Duyệt qua các số từ 1 đến giá trị lớn nhất của tập A và B
    for (int i = 1; i <= max(maxA, maxB); i++) {
        bool isMiddle = true;
        // Kiểm tra xem i có phải là số "ở giữa" hay không
        for (int j = 0; j < n; j++) {
            if (i % A[j] != 0) {
                isMiddle = false;
                break;
            }
        }
        for (int j = 0; j < m; j++) {
            if (B[j] % i != 0) {
                isMiddle = false;
                break;
            }
        }
        if (isMiddle) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}