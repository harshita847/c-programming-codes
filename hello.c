// break- when the condition become true loop breaks 
// continue- when condition become true it leaves that value and continue after that

// to find whether a number is prime or not using for loop
#include <stdio.h>
int main()
{
    int i, n, count = 0;
        printf ("enter a number-");
        scanf("%d",&n);
        if(n<=1)
        {
            printf("number is not prime");
            return 0;
        }

        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
                count++;
        }
        if (count == 0)
        {
            printf( "number is prime");
        }
        else
        {
            printf( "number is not prime");
        }


 // to print fabnoacci series using while loop

    int a = 10, t1 = 0, t2 = 1, next, i = 0;
    while (i <= a)
    {
        i++;
        printf(" %d", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }




//to print fabnoacci series using for loop
int b = 10, t3 = 0, t4 = 1, nextt;
    for(int j=0;j<=b;j++)
    {
    
        printf(" %d", t3);
        nextt = t3 + t4;
        t3 = t4;
        t4 = nextt;
    }
    return 0;
}
