#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Hàm quay lui để đếm số cách biểu diễn X bằng các số có dạng a^N
void countWays(int X, int N, int currNum, int sum, int& count) {
    // Nếu tổng các số đã chọn bằng X, tăng biến đếm lên 1
    if (sum == X) {
        count++;
        return;
    }

    // Chọn các số có dạng a^N để thêm vào tổng
    int num = pow(currNum, N);
    while (num + sum <= X) {
        countWays(X, N, currNum+1, num+sum, count);
        currNum++;
        num = pow(currNum, N);
    }
}

int main() {
    int X = 13;
    int N = 2;

    int count = 0;
    countWays(X, N, 1, 0, count);

    cout << "So cach de bieu dien " << X << " bang tong cac so co dang a^" << N << " la: " << count << endl;

    return 0;
}