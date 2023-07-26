#include <iostream>
#include <cmath>

using namespace std;

void update(int* a, int* b) {
    int sum = *a + *b; // Tính tổng của hai số
    int diff = abs(*a - *b); // Tính trị tuyệt đối của hiệu của hai số
    
    *a = sum; // Cập nhật giá trị của biến a bằng tổng
    *b = diff; // Cập nhật giá trị của biến b bằng trị tuyệt đối hiệu
}