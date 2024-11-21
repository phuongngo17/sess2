#include <stdio.h>

int main() {
    // Khai bao va khoi tao bien canh hinh vuong
    int side = 5; // Bien side luu chieu dai canh hinh vuong, gia tri khoi tao la 5

    // Tinh chu vi va dien tich
    int perimeter = 4 * side;    // Chu vi = 4 * canh
    int area = side * side;      // Dien tich = canh * canh

    // In ket qua ra man hinh
    printf("Canh hinh vuong: %d\n", side);
    printf("Chu vi hinh vuong: %d\n", perimeter);
    printf("Dien tich hinh vuong: %d\n", area);

    return 0;
}

