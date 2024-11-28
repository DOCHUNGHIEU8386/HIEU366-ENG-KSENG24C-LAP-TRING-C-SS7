#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Khai báo và gán giá tr? cho m?ng
    int n = 5; // S? ph?n t? c?a m?ng

    // Thay d?i m?ng theo yêu c?u
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] += 3; // N?u là s? ch?n, tang lên 3 don v?
        } else {
            arr[i] += 2; // N?u là s? l?, tang lên 2 don v?
        }
    }

    // In ra m?ng m?i sau khi thay d?i
    printf("Mang moi sau khi thay doi:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

