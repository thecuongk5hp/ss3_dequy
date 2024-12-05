#include <stdio.h>

// Hàm tính t?ng d?y s? t? n ð?n m
int tinhTong(int n, int m) {
    int tong = 0;
    for (int i = n; i <= m; i++) {
        tong += i;
    }
    return tong;
}

int main() {
    int n, m;

    // Nh?p giá tr? n và m
    printf("Nhap so n: ");
    scanf("%d", &n);
    printf("Nhap so m: ");
    scanf("%d", &m);

    // Ki?m tra ði?u ki?n n < m
    if (n >= m) {
        printf("n phai nho hon m.\n");
    } else {
        int ketQua = tinhTong(n, m);
        printf("Tong cac so tu %d den %d la: %d\n", n, m, ketQua);
    }

    return 0;
}

