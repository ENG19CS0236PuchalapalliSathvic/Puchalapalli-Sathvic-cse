//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float input()
{
	float n;
	scanf("%f",&n);
	return n;
}

float dist(float x_1,float y_1,float x_2,float y_2)
{
	float a;
	a=sqrt(((x_2-x_1)*(x_2-x_1))+((y_2-y_1)*(y_2-y_1)));
	return a;
}
void output(float distance)
{
	printf("Distance =%2f",distance);
}


int main()
{
	float x1,y1,x2,y2,d;
	printf("Enter the x coordinate of point 1");
	x1=input();
	printf("Enter the y coordinate of point 1");
	y1=input();
	printf("Enter the x coordinate of point 2");
	x2=input();
	printf("Enter the y coordinate of point 2");
	y2=input();
	d=dist(x1,y1,x2,y2);
	output(d);
	return 0;
}

