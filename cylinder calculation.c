#include <stdio.h>
#include<math.h>

int main (){
    double height = 0.0;
    double radius =0.0;
    const double pi =3.142;
    double volume=0.0;
    double surface_area=0.0;
    
    printf("Enter heightof the cylinder");
    scanf("%lf",&height);
    
    printf("Enter radius of the cylinder");
    scanf("%lf",&radius);
    
    volume=pi*pow(radius,2)*height;
    printf("volume is %.2lf\n",volume);
    
    surface_area=2*pi*pow(radius, 2 ) +2 *pi*radius*height ;
    printf("surface_area is %.2lf\n",surface_area);
    
 return 0;
 }   