#include <iostream>
#include <algorithm>
using namespace std;

int solve(int n, int p) {
    int num_even = (p % 2 == 0) ? p / 2 : (p - 1) / 2;
    int num_odd = (p % 2 == 0) ? (n - p + 1) / 2 : (n - p) / 2;
    return min(num_even, num_odd);
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n, p;
        cin >> n >> p;
        cout << solve(n, p) << endl;
    }
    return 0;
}
