#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
// #include <random.h>
int main()
{
    time_t t;
    srand(time(&t));
    int year = 2023;
    int newYear = 0;
    double pop = 1000;
    double bRate = 0;
    double dRate = 0;
    double mRate = 0;
    double years = 2023;
    double budget = 2350;
    double randP = 0;
    int count = 0;
    printf("Welcome to the town of blahbalh. What year would you like to visit after 2023? \n%d\n", newYear);
    scanf("%d", &newYear);

    while (newYear != count)
    {

        // scanf("%d", &bRate);
        srand((unsigned int)time(NULL));
        double randomP = (double)rand() / RAND_MAX;

        bRate = 0.01 + randomP * (0.02 - 0.01);
        printf("%f", bRate);
        pop = pop * bRate;

        // scanf("%d", &dRate);
        dRate = 0.05 + randomP * (0.05 - .15);
        pop = pop * dRate;

        // scanf("%d", &mRate);
        mRate = -0.03 + randomP * (-0.03 - .4);
        pop = pop * mRate;
        count++;
    }
    budget = budget * year;
    year = newYear;

    printf("The Year: %d\n", year);
    printf("Budget: %f\n", budget);
    printf("Population: %f\n", pop);
}