//WAP to find the volume of a tromboloid using 4 functions.

#include<stdio.h>
    float volume(float h,float b,float d)
    {
       return((h*d)+d/(3*b));
     }
     int main()
     {
        float h,b,d,vol;
        printf("Enter the h,b & d:");
        scanf("%f%f%f",&h,&b,&d);
        vol=volume(h,b,d);
        printf("Volume of the tromboloid is :%2f",vol);
        return 0;
     }
