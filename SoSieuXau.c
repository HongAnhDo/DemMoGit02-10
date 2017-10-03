#include <stdio.h>

int KiemTraSSX(int n)
{
    int temp = 0;

    while (n > 0)
    {
        temp = n % 10;

        if(temp != 2 && temp != 4 && temp != 8)
            return 0;
        n /= 10;
    }

    return 1;
}

int main()
{
    int n, i;
    scanf("%d", &n);

    for (i = n + 1; ; i++)
        if(KiemTraSSX(i))
        {
            printf("%d", i);
            break;
        }

    return 0;
}
