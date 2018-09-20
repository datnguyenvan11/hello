#include <stdio.h>

void hoandoi2so(int *a, int *b) {
    int bientam = *a;
    *a = *b;
    *b = bientam;
    printf("sau khi hoan doi ,tai ham hoandoi2so\n");
    printf("gia tri so thu nhat tai con tro a %d\n", *a);
    printf("gia tri so thu hai tai con tro a %d\n", *b);
}

int main() {
    int *a;
    int *b;
    int c = 20;
    int d = 30;
    a = &c;
    b = &d;
    printf(" so thu 1 la%d\n", c);
    printf(" so thu 2 la%d\n", d);
    hoandoi2so(a, b);
    printf("gia tri hai so tai ham main ");
    printf(" gia tri so thu nhat sau khi hoan doi%d\n", c);
    printf("gia tri so thu hai sau khi hoan doi%d\n", d);
}