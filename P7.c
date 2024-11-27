#include <stdio.h>

#define METERS_TO_KM 1000.0


double convertToKilometers(double meters) {
    static int callCount = 0; 
    callCount++;
    printf("This function has been called %d times.\n", callCount);
    return meters / METERS_TO_KM;
}

int main() {
    double meters, kilometers;
    int call;
    do{
    printf("Enter distance in meters: ");
    scanf("%lf", &meters);

    
    kilometers = convertToKilometers(meters);

    
    printf("%.2f meters is equal to %.2f kilometers.\n", meters, kilometers);

    printf("Do you want to Call function again(1 for Yes):");

    scanf("%d",&call);

    }while(call==1);

    return 0;
}
