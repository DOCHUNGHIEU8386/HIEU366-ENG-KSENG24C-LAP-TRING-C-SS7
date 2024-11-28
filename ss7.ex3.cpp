#include <stdio.h>

int main() {
    int arr[5] = {3, 7, 10, 14, 21}; // Khai b�o v� g�n gi� tr? cho m?ng
    int has_even = 0; // Bi?n d? ki?m tra s? t?n t?i c?a s? ch?n
    
    // In ra c�c ph?n t? l� s? ch?n trong m?ng
    printf("Cac so chan trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            has_even = 1;
        }
    }

    // N?u kh�ng c� s? ch?n n�o
    if (!has_even) {
        printf("Mang khong chua so chan.");
    }

    return 0;
}

