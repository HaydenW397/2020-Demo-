#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    while (0 == 0)
    {
        while(analog(1) <= 500)
        {
         motor(0,80);
         motor(3,80);
        }
    }
    return 0;
}
