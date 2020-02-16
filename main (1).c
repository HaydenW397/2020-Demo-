#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    while (0 ==0)
    {
        if (analog(1)>= 2000)
        { 
            motor(3,30);
            motor(0,-5);
        }
        if (analog(1)<= 400)
        { 
            motor(0,30);
            motor(3,-5);
        }
       
       
   }

  return 0;
 }
