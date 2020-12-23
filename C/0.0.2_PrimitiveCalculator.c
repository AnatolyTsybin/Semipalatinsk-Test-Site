#include <stdio.h>

int main()
{
    double a, c;
    char b;
    scanf("%lf%c%lf", &a, &b, &c);

    switch(b) {
        case '+':
            a += c;
            break;
        case '-':
            a -= c;
            break;
        case '*':
            a *= c;
            break;
        case '/':
            a /= c;
            break;
        default:
            return 1;
    }

    printf("%.2lf\n", a);

    return 0;
}

