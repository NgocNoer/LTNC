#include <iostream>
#include <string>
using namespace std;

int countWords(string str) {
    int count = 1; // Bắt đầu với một từ
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a camel case string: ";
    cin >> str;

    int count = countWords(str);
    cout << "Number of words: " << count << endl;

    return 0;
}