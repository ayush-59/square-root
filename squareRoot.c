#include <stdio.h>
#include <math.h>

float squareRoot(float n, float left, float right, int p){
    float mid = (left + right) / 2;

    if(fabs(mid*mid - n) < pow(10, -p) )
        return mid;

    if(mid*mid < n)
        return squareRoot(n, mid, right, p);
    else
        return squareRoot(n, left, mid, p);
}

int main()
{
    int n, p;
    float res;

    scanf("%d", &n);
    scanf("%d", &p);

    res = squareRoot(n, 0, n, p);
    printf("ans = %.*f",p , res);

    return 0;
}
