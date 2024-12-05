#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return; // Ði?u ki?n d?ng
    }
    
    swap(&str[start], &str[end]);
    
    // G?i ð? quy v?i ph?n c?n l?i
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    int length = strlen(str);
    
    reverseString(str, 0, length - 1);
    
    printf("Chuoi dao nguoc: %s\n", str);
    
    return 0;
}

