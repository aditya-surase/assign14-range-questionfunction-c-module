#include <stdio.h>

void printTable(int);   // 1️⃣ declaration

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printTable(n);      // 2️⃣ function call
    return 0;
}

void printTable(int n) { // 3️⃣ definition
    int i;
    for(i = 1; i <= 10; i++)
        printf("%d ", n * i);
}