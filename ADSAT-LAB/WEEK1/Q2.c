int main() {
    double x;
    double y = 1.0;
    double precision = 0.000000000000001;
    printf("Enter a number:\t");
    scanf("%lf",&x);
    double n = x;
    while(x-y > precision){
        x = (x+y)/2;
        y=n/x;
    }
    printf("Square root of %lf = %.16lf",n,x);


    return 0;
}
