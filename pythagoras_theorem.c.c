#include <stdio.h>
#include <math.h>

  int main()
    { int a = 0, b = 0, c = 0;
      printf("Please provide the value of a& b\n");
      scanf("%d %d",&a,&b);


       c = sqrt((a*a)+(b*b));
      printf("C is hypotenuse = %d\n",c);
        return 0;
    }
