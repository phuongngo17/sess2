#include <stdio.h>

int main() {
    // Khai bao va khoi tao hai bien chieu dai va chieu rong cua hinh chu nhat
    int length = 10; // Chieu dai cua hinh chu nhat, gia tri khoi tao la 10
    int width = 5;   // Chieu rong cua hinh chu nhat, gia tri khoi tao la 5

    // Tinh chu vi va dien tich
    int perimeter = 2 * (length + width); // Chu vi = 2 * (chieu dai + chieu rong)
    int area = length * width;           // Dien tich = chieu dai * chieu rong

    // In ket qua ra man hinh
    printf("Chieu dai hinh chu nhat: %d\n", length);
    printf("Chieu rong hinh chu nhat: %d\n", width);
    printf("Chu vi hinh chu nhat: %d\n", perimeter);
    printf("Dien tich hinh chu nhat: %d\n", area);

    return 0;
}

