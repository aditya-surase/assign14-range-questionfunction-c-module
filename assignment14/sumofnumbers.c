#include <stdio.h>

void sumRange();   // 1️⃣ function declaration

int main() {
    sumRange();    // 2️⃣ function call
    return 0;
}

void sumRange() {  // 3️⃣ function definition
    int start, end, i, sum = 0;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++)
        sum = sum + i;

    printf("Sum = %d", sum);
}