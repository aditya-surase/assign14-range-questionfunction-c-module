#include <stdio.h>

void printNumbers(int);   // 1️⃣ declaration

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    printNumbers(n);      // 2️⃣ function call
    return 0;
}

void printNumbers(int n) { // 3️⃣ definition
    int i;
    for(i = 1; i <= n; i++)
        printf("%d ", i);
}