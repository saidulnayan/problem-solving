#include <stdio.h>
#include <math.h>

int main ()
{
    double n;
    int i;

    while (scanf ("%lf", &n) != EOF)
        {
            double sum=0;
            for(i=1;i<=n;i++)
            {

            sum=sum+pow(i,3);

            }
            printf("%0.lf\n",sum);

    }

    return 0;
}
