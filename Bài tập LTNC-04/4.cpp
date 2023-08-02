#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // Khởi tạo mảng hai chiều để lưu trữ các dãy số
    vector<vector<int>> arrays(n);

    // Đọc dữ liệu vào mảng hai chiều
    for (int i = 0; i < n; i++) {
        int len;
        cin >> len;
        for (int j = 0; j < len; j++) {
            int x;
            cin >> x;
            arrays[i].push_back(x);
        }
    }

    // Duyệt qua các câu truy vấn và in ra kết quả tương ứng
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        cout << arrays[a - 1][b - 1] << endl;
    }

    return 0;
}