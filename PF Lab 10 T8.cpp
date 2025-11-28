#include <stdio.h>

const double METER_TO_KM = 0.001;
double convertToKm(double meters) {
    static int Count = 0; 
    Count++;

    printf("Function called %d time(s)\n", Count);

    return meters * METER_TO_KM;
}

int main() {
    double meters, km;
    
    printf("Enter distance in meters: ");
    scanf("%lf", &meters);

    km = convertToKm(meters);
    printf("%.3f meters = %.3f kilometers\n\n", meters, km);


    return 0;
}
