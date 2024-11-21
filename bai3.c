#include <stdio.h>

int main() {
    int num1 = 15; 
    int num2 = 25; 

    int sum = num1 + num2;       // Tong cua num1 va num2
    int difference = num1 - num2; // Hieu cua num1 va num2
    int product = num1 * num2;   // Tich cua num1 va num2

    // Kiem tra chia cho 0 truoc khi tinh thýuong
    float quotient = 0; // Khoi tao bien thuong
    if (num2 != 0) {
        quotient = (float)num1 / num2; // Thuong cua num1 va num2 (ep kieu float)
    } else {
        printf("Khong the chia cho 0!\n");
    }

    // In ket qua ra man hinh
    printf("Tong cua %d va %d la: %d\n", num1, num2, sum);
    printf("Hieu cua %d va %d la: %d\n", num1, num2, difference);
    printf("Tich cua %d va %d la: %d\n", num1, num2, product);
    if (num2 != 0) {
        printf("Thuong cua %d va %d la: %.2f\n", num1, num2, quotient);
    }

    return 0;
}

