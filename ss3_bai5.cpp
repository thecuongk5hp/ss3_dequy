#include <stdio.h>
#include <string.h>
#include <ctype.h>

// H�m �? quy ki?m tra Palindrome
int isPalindrome(char str[], int start, int end) {
    // �i?u ki?n d?ng
    if (start >= end) {
        return 1; // Chu?i l� Palindrome
    }

    // B? qua c�c k? t? kh�ng ph?i ch? c�i ho?c s?
    while (!isalnum(str[start]) && start < end) start++;
    while (!isalnum(str[end]) && start < end) end--;

    // So s�nh k? t? ? hai �?u
    if (tolower(str[start]) != tolower(str[end])) {
        return 0; // Kh�ng ph?i Palindrome
    }

    // G?i �? quy ki?m tra ph?n c?n l?i
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[200];
    
    printf("Nhap chuoi: ");
    scanf("%[^\n]", str); // �?c chu?i c� kho?ng tr?ng �?n khi g?p k? t? xu?ng d?ng

    // G?i h�m ki?m tra Palindrome
    if (isPalindrome(str, 0, strlen(str) - 1)) {
        printf("Palindrome valid\n");
    } else {
        printf("Palindrome invalid\n");
    }
    
    return 0;
}

