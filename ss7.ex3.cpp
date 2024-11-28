#include <stdio.h>

int main() {
    int arr[5] = {3, 7, 10, 14, 21}; // Khai báo và gán giá tr? cho m?ng
    int has_even = 0; // Bi?n d? ki?m tra s? t?n t?i c?a s? ch?n
    
    // In ra các ph?n t? là s? ch?n trong m?ng
    printf("Cac so chan trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            has_even = 1;
        }
    }

    // N?u không có s? ch?n nào
    if (!has_even) {
        printf("Mang khong chua so chan.");
    }

    return 0;
}

