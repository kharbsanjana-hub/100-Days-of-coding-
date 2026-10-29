//Q51: Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345
#include <stdio.h>
int main(){
int i,j,k;
for(i=1;i<=5;i++)
{
for (k=5;k>=i;k--)
    {
    printf(" ");
    }
for( j=1;j<=i;j++)
    {
    printf("%d",5-i+j);
    }
printf("\n");
}
    return 0;
}
