#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Hàm ð? quy ki?m tra Palindrome
int isPalindrome(char str[], int start, int end) {
    // Ði?u ki?n d?ng
    if (start >= end) {
        return 1; // Chu?i là Palindrome
    }

    // B? qua các k? t? không ph?i ch? cái ho?c s?
    while (!isalnum(str[start]) && start < end) start++;
    while (!isalnum(str[end]) && start < end) end--;

    // So sánh k? t? ? hai ð?u
    if (tolower(str[start]) != tolower(str[end])) {
        return 0; // Không ph?i Palindrome
    }

    // G?i ð? quy ki?m tra ph?n c?n l?i
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[200];
    
    printf("Nhap chuoi: ");
    scanf("%[^\n]", str); // Ð?c chu?i có kho?ng tr?ng ð?n khi g?p k? t? xu?ng d?ng

    // G?i hàm ki?m tra Palindrome
    if (isPalindrome(str, 0, strlen(str) - 1)) {
        printf("Palindrome valid\n");
    } else {
        printf("Palindrome invalid\n");
    }
    
    return 0;
}

