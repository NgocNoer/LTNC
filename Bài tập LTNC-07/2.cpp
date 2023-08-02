#include <iostream>
#include <string>
using namespace std;

int main() {
    string letters = "abcd";

    // Tạo ra tất cả các chuỗi 3 kí tự từ tập chữ cái
    for (int i = 0; i < letters.size(); i++) {
        for (int j = 0; j < letters.size(); j++) {
            for (int k = 0; k < letters.size(); k++) {
                string s = ""; // Chuỗi 3 kí tự
                s += letters[i];
                s += letters[j];
                s += letters[k];
                cout << s << endl;
            }
        }
    }

    return 0;
}