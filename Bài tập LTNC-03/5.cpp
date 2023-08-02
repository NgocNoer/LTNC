#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string str) {
    string target = "hackerrank";
    int j = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == target[j]) {
            j++;
        }
        if (j == target.length()) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        if (isSubsequence(str)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}