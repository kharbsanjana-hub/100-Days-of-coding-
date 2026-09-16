//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
# include <stdio.h>
int main()
{
    float length,breadth,area,perimeter;
    printf("Length of rectangle is");
    scanf("%f",&length);
    printf("Breadth of rectangle is");
    scanf("%f",&breadth);
    area=length*breadth;
    perimeter=2*(length + breadth);
    printf("Area of rectangle is= %f\n",area);
    printf("Perimeter of rectangle is= %f\n",perimeter);
    return 0;
}