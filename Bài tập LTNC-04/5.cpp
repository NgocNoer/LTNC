#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Khởi tạo tập hợp để lưu trữ các phần tử của dãy A
    set<int> A;

    // Đọc dữ liệu vào dãy A và thêm các phần tử vào tập hợp
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        A.insert(x);
    }

    // Duyệt qua dãy B và tìm phần tử duy nhất không có trong dãy A
    for (int i = 0; i < n+1; i++) {
        int x;
        cin >> x;
        if (A.find(x) == A.end()) {
            cout << x << endl;
            break;
        }
    }

    return 0;
}