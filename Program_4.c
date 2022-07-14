#include<stdio.h>
int main(){
    float R, A;
    printf("Enter the radius of the circle: \n");
    scanf("%f", &R);
    A = 3.1428 * R * R;
    printf("\"Area of circle is %f having the radius %f.\"", A, R);
    return 0;
}