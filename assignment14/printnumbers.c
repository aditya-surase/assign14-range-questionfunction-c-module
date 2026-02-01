#include <stdio.h>

void printTable();   // 1️⃣ function declaration

int main() {
    printTable();    // 2️⃣ function call
    return 0;
}

void printTable() {  // 3️⃣ function definition
    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
        printf("%d ", n * i);
}