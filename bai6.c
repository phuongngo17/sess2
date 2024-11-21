#include <stdio.h>

int main() {
    // Khai bao hang so PI
    const float PI = 3.14f; // Hang so PI, gia tri 3.14

    // Khai bao va khoi tao ban kinh hinh tron
    float radius = 5.0f; // Ban kinh hinh tron, gia tri khoi tao la 5.0

    // Tinh chu vi va dien tich
    float circumference = 2 * PI * radius; // Chu vi = 2 * PI * ban kinh
    float area = PI * radius * radius;     // Dien tich = PI * ban kinh^2

    // In ket qua ra man hinh
    printf("Ban kinh hinh tron: %.2f\n", radius);
    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f\n", area);

    return 0;
}

