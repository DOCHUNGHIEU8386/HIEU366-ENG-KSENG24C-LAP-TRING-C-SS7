#include <stdio.h>

int main() {
    // Khai báo và gán giá tr? cho m?ng
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]); // Tính d? dài c?a m?ng
    
    // In ra t?ng ph?n t? trong m?ng
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    
    // In ra d? dài c?a m?ng
    printf("\nDo dai cua mang la: %d\n", length);
    
    return 0;
}

