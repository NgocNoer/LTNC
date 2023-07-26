#include <iostream>
using namespace std;

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    if (v1 <= v2) {
        cout << "NO\n";
    } else {
        int dx = x2 - x1;
        int dv = v1 - v2;

        if (dx % dv == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}