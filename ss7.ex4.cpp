#include <stdio.h>

int main() {
    int n;
    
    // Y�u c?u ngu?i d�ng nh?p s? ph?n t? c?a m?ng
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n]; // Khai b�o m?ng v?i s? ph?n t? do ngu?i d�ng nh?p
    
    // Y�u c?u ngu?i d�ng nh?p t?ng ph?n t? c?a m?ng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // In ra c�c ph?n t? trong m?ng
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

