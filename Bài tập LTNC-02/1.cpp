#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int count = 0;

        while (N > 0) {
            int digit = N % 10;
            if (digit != 0 && N % digit == 0) {
                count++;
            }
            N /= 10;
        }

        cout << count << "\n";
    }

    return 0;
}