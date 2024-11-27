#include <stdio.h>
#define Max_temp 50.0
void checktemp(double temp)
{
    static int exceed = 0;
    if (temp > Max_temp)
    {
        exceed++;
        printf("Warning: Temperature %.2f exceeds the limit of %.2f°C!\n", temp, Max_temp);
    }
    printf("%d Times Temperature exceed.\n", exceed);
}
int main()
{
    double temp;
    char continueInput;
    do
    {
        printf("Enter Temperature in Celcius:");
        scanf("%lf", &temp);
        checktemp(temp);

        printf("DO You want to Continue(y for yes or n for No): ");
        scanf(" %c", &continueInput);

    } while (continueInput == 'y' || continueInput == 'Y');

    return 0;
}