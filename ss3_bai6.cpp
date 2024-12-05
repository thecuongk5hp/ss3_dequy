#include <stdio.h>

// Hàm ð? quy ð? tính t?ng các ph?n t? c?a m?ng
int sumArray(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = sumArray(arr, n);
    printf("Tong cac phan tu cua mang la: %d\n", sum);

    return 0;
}

