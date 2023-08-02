#include <iostream>
#include <string>
using namespace std;

string caesarCipher(string str, int k) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            char base = isupper(str[i]) ? 'A' : 'a';
            result += (char)((str[i] - base + k) % 26 + base);
        } else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    int n, k;
    string str;
    cin >> n;
    cin >> str;
    cin >> k;

    string result = caesarCipher(str, k);
    cout << result << endl;

    return 0;
}