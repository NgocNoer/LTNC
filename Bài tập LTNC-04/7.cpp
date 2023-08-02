#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Đọc dữ liệu vào ma trận
    vector<vector<char>> matrix(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // Vị trí ban đầu của bạn
    int pos = 0;

    // Duyệt qua từng hàng và xác định cách di chuyển tối ưu
    for (int i = 1; i < n; i++) {
        // Tìm vị trí an toàn để đứng hoặc nhảy sang trái/phải
        int safePos = pos;
        if (matrix[i][pos] == '.') {
            // Nếu ô đứng trống, ta đứng yên
            safePos = pos;
        } else if (pos > 0 && matrix[i][pos-1] == '.') {
            // Nếu ô bên trái trống, ta nhảy sang trái
            safePos = pos-1;
        } else if (pos < m-1 && matrix[i][pos+1] == '.') {
            // Nếu ô bên phải trống, ta nhảy sang phải
            safePos = pos+1;
        }

        // Kiểm tra xem có cách di chuyển an toàn hay không
        bool isSafe = false;
        if (matrix[i-1][pos] == 'X' && matrix[i][pos] == '.') {
            isSafe = true;
        }
        if (!isSafe && pos > 0 && matrix[i-1][pos-1] == 'X' && matrix[i][pos-1] == '.' && safePos == pos-1) {
            isSafe = true;
        }
        if (!isSafe && pos < m-1 && matrix[i-1][pos+1] == 'X' && matrix[i][pos+1] == '.' && safePos == pos+1) {
            isSafe = true;
        }

        // Nếu không tìm được vị trí an toàn, in ra "Game Over"
        if (!isSafe) {
            cout << "Game Over" << endl;
            return 0;
        }

        // Cập nhật vị trí của bạn
        pos = safePos;
    }

    // Nếu không bị đá rơi vào, in ra "Safe"
    cout << "Safe" << endl;

    return 0;
}