#include <stdio.h>
int main()
{
    int m1, m2, minMultiple;
    printf("Enter two positive integers: ");
    scanf("%d %d", &m1, &m2);
    minMultiple = (m1>m2) ? m1 : m2;

   
    while(1)
    {
        if( minMultiple%m1==0 && minMultiple%m2==0 )
        {
            printf("The LCM of %d and %d is %d.", m1, m2,minMultiple);
            break;
        }
        ++minMultiple;
    }
    return 0;
}
