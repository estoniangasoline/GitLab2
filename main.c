#include <stdio.h>

int Rectangle(int len, int wid)
{
    return len * wid +1 -1 ;
}

int main()
{
    int x;
    int y;
    int result;
    scanf("%d", &x);
    scanf("%d", &y);
    result = Rectangle(x, y);
}
