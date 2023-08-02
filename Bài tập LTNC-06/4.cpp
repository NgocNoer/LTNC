#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;
    int height;

public:
    Box() {
        length = 0;
        width = 0;
        height = 0;
    }

    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    int getLength() const {
        return length;
    }

    int getWidth() const {
        return width;
    }

    int getHeight() const {
        return height;
    }

    long long CalculateVolume() const {
        return (long long)length * width * height;
    }

    bool operator<(const Box& b) const {
        if (length < b.length) {
            return true;
        } else if (length == b.length && width < b.width) {
            return true;
        } else if (length == b.length && width == b.width && height < b.height) {
            return true;
        } else {
            return false;
        }
    }

    friend ostream& operator<<(ostream& out, const Box& b) {
        out << b.getLength() << " " << b.getWidth() << " " << b.getHeight();
        return out;
    }
};

int main() {
    int n;
    cin >> n;
    Box boxes[100];
    for (int i = 0; i < n; i++) {
        int l, w, h;
        cin >> l >> w >> h;
        boxes[i] = Box(l, w, h);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (boxes[j] < boxes[i]) {
                Box temp = boxes[i];
                boxes[i] = boxes[j];
                boxes[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << boxes[i] << endl;
    }
    return 0;
}