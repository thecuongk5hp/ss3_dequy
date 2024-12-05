#include <stdio.h>

// Hàm hi?n th? chu?i Fibonacci
void hienThiFibonacci(int n) {
    int f0 = 0, f1 = 1, fn;

    if (n >= 1) {
        printf("%d", f0); // In F(0)
    }
    if (n >= 2) {
        printf(",%d", f1); // In F(1)
    }
    for (int i = 3; i <= n; i++) { // B?t ð?u t? F(2)
        fn = f0 + f1;
        printf(",%d", fn);
        f0 = f1;
        f1 = fn;
    }
    printf("\n");
}

int main() {
    int n;

    // Nh?p giá tr? n
    printf("Nhap so lan hien thi chuoi Fibonacci (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So lan hien thi phai lon hon 0.\n");
    } else {
        printf("Chuoi Fibonacci voi n = %d la: ", n);
        hienThiFibonacci(n);
    }

    return 0;
}

