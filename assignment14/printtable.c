#include <stdio.h>

void printTable();   // declaration

int main() {
    printTable();    // function call
    return 0;
}

void printTable() { // definition
    int i, n;
    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
        printf("%d ", n * i);
}