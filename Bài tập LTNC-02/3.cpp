#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> count(K);

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        count[a % K]++;
    }

    int ans = 0;

    for (int i = 1; i < K; i++) {
        int j = K - i;
        if (i < j) {
            ans += count[i] * count[j];
        }
    }

    ans += count[0] * (count[0] - 1) / 2;

    cout << ans << "\n";

    return 0;
}