#include <stdio.h>

void sumRange(int, int);   // 1️⃣ declaration

int main() {
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);

    sumRange(start, end);  // 2️⃣ function call
    return 0;
}

void sumRange(int start, int end) { // 3️⃣ definition
    int i, sum = 0;
    for(i = start; i <= end; i++)
        sum = sum + i;

    printf("Sum = %d", sum);
}