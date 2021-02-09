//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include<math.h>

typedef struct points
{
float x, y;
}
Points;

float calc_distance(Points a, Points b)
{
return sqrt(((a.x - b.x)*(a.x - b.x))+((a.y - b.y)*(a.y - b.y)));
};

Points input(Points temp)
{
printf("X: ");
scanf("%f",&temp.x);
printf("\nY: ");
scanf("%f",&temp.y);
return temp;
};

void show_output(float distance)
{
printf("The distance between the points is %.2f",distance);
};

int main()
{
Points a, b;
float distance;
printf("Please enter the Point 1 coordinates:\n");
a = input(a);
printf("Please enter the Point 2 coordinates:\n");
b = input(b);
distance = calc_distance(a,b);
show_output(distance);

return 0;
}
