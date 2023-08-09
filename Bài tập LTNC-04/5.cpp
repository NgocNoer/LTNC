#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Khởi tạo tập hợp để lưu trữ các phần tử của dãy A và B
    set<int> A;
    set<int> B;

    // Đọc dữ liệu vào dãy A và thêm các phần tử vào tập hợp
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        A.insert(x);
    }

    // Đọc dữ liệu vào dãy B và thêm các phần tử vào tập hợp
    for (int i = 0; i < n+1; i++) {
        int x;
        cin >> x;
        B.insert(x);
    }

    // Duyệt qua dãy B và tìm phần tử duy nhất không có trong dãy A
    for (int i = 0; i < n+1; i++) {
        if (A.find(x) == A.end()) {
            cout << x << endl;
            break;
        }
    }

    return 0;
}
