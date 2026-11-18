#include <stdio.h>

int main() {
    int length;
    int width;
    int area;
    printf("enter the length =");
    scanf("%d" ,&length);
    printf("enter the value of width =");
    scanf("%d" ,&width);
    area = length*width;
    printf("area of rectangle = %d\n" ,&area);
}