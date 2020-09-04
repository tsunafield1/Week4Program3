#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n, q, j;
    scanf("%d", &n);
    int an[6];
    for (int i = 0; i < n; i++)
    {
        int t = 1, d = 6, l = 3, r = 4, f = 2, b = 5;
        char a[1000];
        scanf("%s", a);
        for (q = 0; a[q] != '\0'; q++){}
        q++;
        for (j = 0; j < q; j++)
        {
            int w, x, y, z;
            if (a[j] == 'F')
            {
                x = t;
                t = b;
                y = f;
                f = x;
                b = d;
                d = y;
            }
            else if (a[j] == 'B')
            {
                w = t;
                x = f;
                y = b;
                z = d;
                t = x;
                f = z;
                b = w;
                d = y;
            }
            else if (a[j] == 'L')
            {
                w = t;
                x = l;
                y = r;
                z = d;
                t = y;
                l = w;
                r = z;
                d = x;
            }
            else if (a[j] == 'R')
            {
                w = t;
                x = l;
                y = r;
                z = d;
                t = x;
                l = z;
                r = w;
                d = y;
            }
            else if (a[j] == 'C')
            {
                w = f;
                x = l;
                y = b;
                z = r;
                f = z;
                l = w;
                b = x;
                r = y;
            }
            else if (a[j] == 'D')
            {
                w = f;
                x = l;
                y = b;
                z = r;
                f = x;
                l = y;
                b = z;
                r = w;
            }
        }
        an[i] = f;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", an[i]);
    }
}