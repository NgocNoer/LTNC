#include <iostream>
#include <set>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    set<int> s;

    for (int i = 0; i < Q; i++) {
        int type, x;
        cin >> type >> x;

        if (type == 1) {
            s.insert(x);
        } else if (type == 2) {
            s.erase(x);
        } else if (type == 3) {
            if (s.find(x) != s.end()) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }

    return 0;
}