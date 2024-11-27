#include <stdio.h>

void display();
void main()
{
    display();
    display();
    display();
}
void display()
{
    static int x=10;
    x+=10;
    printf("x=%d\n",x);
}

