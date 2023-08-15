#include<stdio.h>
#include<gmp.h>
int main()
{
    mpz_t a,d,d_initial,temp;
    mpz_init_set_ui(a,1);
    mpz_init_set_ui(d,1);
    mpz_init_set_ui(d_initial,1);
    mpz_init_set_ui(temp,1);
    int i=0,j=0;

    for(i=0; i<=10; i++)
    {
        for(j=0; j<10; j++)
        {
            mpz_set_ui(temp,1);
            mpz_mul_ui(temp,d,j);
            mpz_add(temp, temp, a);
            gmp_printf("%Zd\t",temp);
        }
        printf("\n");
        mpz_add(a, a, d);
        if(i==0)
        {
            continue;
        }
        mpz_mul_ui(d_initial,d_initial,2);
        mpz_mul(d,d,d_initial);
    }
// Clear memory
    mpz_clear(a);
    mpz_clear(d);
    mpz_clear(d_initial);
    mpz_clear(temp);
    return 0;

}
