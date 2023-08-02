#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int q;
    cin >> q;

    // Sử dụng unordered_map để lưu điểm của từng sinh viên
    unordered_map<string, int> scores;

    // Thực hiện các thao tác
    for (int i = 0; i < q; i++) {
        int type, score;
        string name;
        cin >> type >> name;

        if (type == 1) {
            cin >> score;
            // Nếu sinh viên chưa có điểm, thêm điểm mới
            if (scores.find(name) == scores.end()) {
                scores[name] = score;
            } else {
                scores[name] += score;
            }
        } else if (type == 2) {
            // Xoá điểm của sinh viên
            scores.erase(name);
        } else if (type == 3) {
            // In ra tổng điểm của sinh viên
            if (scores.find(name) == scores.end()) {
                cout << 0 << endl;
            } else {
                cout << scores[name] << endl;
            }
        }
    }

    return 0;
}