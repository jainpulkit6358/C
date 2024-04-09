#include <stdio.h>
int main()
{

    int n, m, w, i, a[40], temp, j;
    printf("Enter size of Array");
    scanf("%d", &n);
    printf("Enter rotation");
    scanf("%d", &m);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    /* ***********    left Shift  ***********/
    /*
            for (j = 0; j < m; j++)
        {
            temp = a[0];
            for (i = 0; i < n-1; i++)
            {
                a[i] = a[i + 1];
            }
            a[n-1] = temp;
        }
    */
    /* ***********    Right Shift  ********** */

    for (j = 0; j < m; j++)
    {
        temp = a[n - 1];
        for (i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = temp;
    }

    /*    *****Searching Element    **********  */
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("Enter element ? ");
    scanf("%d", &w);
    int s = 0, e = n-1, mid;
    for (i = 0; i <= n; i++)
    {
        mid = (s + e) / 2;
        if (a[mid] == w)
            printf("found  index of");
        else if (a[mid] > a[i])
        {
            e = mid;
        }
        else if (a[mid] < a[n])
        {
            s = mid;
        }
        else
        {
            printf("Not");
        }
    }

    return 0;
}
