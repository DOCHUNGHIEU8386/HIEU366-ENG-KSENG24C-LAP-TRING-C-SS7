#include <stdio.h>

int main() {
    int arr[5] = {3, 7, 2, 10, 5}; // Khai báo và gán giá tr? cho m?ng
    int max = arr[0]; // Gi? s? ph?n t? d?u tiên là l?n nh?t
    int min = arr[0]; // Gi? s? ph?n t? d?u tiên là nh? nh?t
    
    // Duy?t qua m?ng d? tìm ph?n t? l?n nh?t và nh? nh?t
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    // In ra ph?n t? l?n nh?t và nh? nh?t
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phan tu nho nhat trong mang la: %d\n", min);
    
    return 0;
}


