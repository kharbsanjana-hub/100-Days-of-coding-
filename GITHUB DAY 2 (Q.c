//Q4: Write a program to calculate the area and circumference of a circle given its radius.
# include <stdio.h>
int main()
{
    float radius,area,circumference;
    printf("Radius of circle is");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("Area of circle is= %f\n",area);
    printf("Circumference of circle is= %f\n",circumference);
    return 0;
}