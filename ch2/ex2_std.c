#include <stdio.h>
#include <math.h>
#include <string.h>

void main() {

    puts("C is a real-world, widely available and popular language.");
    puts("C is a small, efficient, powerful, and flexible language.");
    puts("C has been standardized, portable and close to hardware.");


    double x = 1.0;
    double y = sqrt(x);
    printf("sqrt(%f) = %f\n", x, y);
    char *s = "Hello, world!";
    printf("strlen(\"%s\") = %ld\n", s, strlen(s));
    // return 0;
}