#include <stdio.h>

int main() {
    int arr[5];
    
    // Y�u c?u ngu?i d�ng nh?p t?ng ph?n t? trong m?ng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // In ra c�c ph?n t? trong m?ng
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

