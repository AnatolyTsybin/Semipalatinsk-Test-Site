#include <stdio.h>

int main()
{
    int c;
    double current;
    int counter = 0;
    double average = 0.0;

    while((c = fscanf(stdin, "%lf", &current)) != EOF )
    {
        average += current;
        counter++;
    }

    average /= counter;

    printf("Average number is %.3lf.\n", average);

    return 0;
}

