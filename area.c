#include<stdio.h>
circle()
{
	int r;
	float Pi=3.14;
	float area,perimeter;
	printf("Enter radius of a circle");
	scanf("%d",&r);
	area=Pi*(r*r);
	perimeter=2*Pi*r;
	printf("\nArea of Circle is %f",area);
	printf("\nPerimeter of circle is %f",perimeter);
	
}
rectangle()
{
	int l,b,h,area,perimeter;
	printf("\nEnter length ,breadth and height");
	scanf("%d%d%d",&l,&b,&h);
	area=l*b*h;
	perimeter=2*(l+b)*h;
	printf("\nArea of rectangle is %d",area);
	printf("\nPerimeter of rectangle is %d",perimeter);
	
}
square()
{
	int a,area,perimeter;
	printf("\nEnter side of square");
	scanf("%d",&a);
	area=a*a;
	perimeter=4*a;
	printf("Area os square is %d",area);
	printf("Perimeter of square is %d",perimeter);
}
int main()
{
	circle();
	rectangle();
	square();
	getch();
}

