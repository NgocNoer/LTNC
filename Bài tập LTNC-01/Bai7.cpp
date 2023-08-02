#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "So Chu So Trong Mang: ";
    cin >> n;

    int Duong = 0, Am = 0, zero = 0;
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num > 0) {
            Duong++;
        } else if (num < 0) {
            Am++;
        } else {
            zero++;
        }
    }

    cout << "Ti Le So Duong: " << (float)Duong / n << endl;
    cout << "Ti Le So Am: " << (float)Am / n << endl;
    cout << "Ti Le So 0: " << (float)zero / n << endl;

    return 0;
}