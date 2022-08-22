#include <stdio.h>
int main()
 {
    int x1, x2, x3, max_num;
    printf("Enter three positive integers: ");
    scanf("%d %d %d", &x1, &x2, &x3);
 {
        if (max_num % x1 == 0 && max_num % x2 == 0 && max_num % x3 ==0)
        {
            printf("The LCM of %d, %d and %d is %d:", x1, x2, x3 );
            
        }
        
}
    return 0;
}
