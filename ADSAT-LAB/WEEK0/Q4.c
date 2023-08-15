#include<stdio.h>
#include<stdbool.h>
#include<gmp.h>
#include<math.h>
bool isPrime(int n)
{
    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    //To check through all numbers of the form 6k ± 1(new approach)
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}
int main()
{
    long int i,j,temp=1;
    mpz_t sum;
    mpz_init_set_ui(sum,1);
    bool flag;
    for( i=10; i<=100; i++)
    {
        flag=false;
        flag = isPrime(i);
        if(flag==true)
        {
            mpz_mul_ui(sum,sum,i);
        }
    }
    for(i=0; i<sqrt(100); i++)
    {
        temp = 1;
        if(isPrime(i))
        {
            while(temp<=100)
            {
                temp*=i;
                mpz_mul_ui(sum,sum,i);
            }
        }
    }
    gmp_printf("%LCM of numbers from 10 to 100 is: Zd",sum);
    mpz_clear(sum);

    return 0;
}
