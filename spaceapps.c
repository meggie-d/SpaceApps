#include <stdio.h>
#include <math.h>
#define AU 149597870.70

int main (){
    double radius, latitude, longitude, x,y;

    printf("Enter radius: ");
    scanf("%lf", &radius);
    printf("Enter latitude: ");
    scanf("%lf", &latitude);
    printf("Enter longitude: ");
    scanf("%lf", &longitude);

    x=radius*AU*cos(latitude)*cos(longitude);
    y=radius*AU*cos(latitude)*sin(longitude);

    printf("x and y coordinates are (%f,%f)\n\n\n", x,y);



return 0;
}
