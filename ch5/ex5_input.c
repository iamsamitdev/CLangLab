#include <stdio.h>

void main() {
    
    // การรับค่าจากผู้ใช้
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("The sum of %d and %d is %d\n", a, b, a + b);

    // การแปลงชนิดข้อมูลระหว่าง int และ char
    int c;
    printf("Enter an integer: ");
    scanf("%d", &c);
    printf("The character equivalent of %d is %c\n", c, c);
    
}