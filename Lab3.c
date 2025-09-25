#include <locale.h>
#include <stdio.h>
#include <math.h>

 int main()

{
	 double x1, x2, x3, y1, y2, y3, S;

	setlocale(LC_CTYPE, "RUS");


	printf("Введите значение координат вершин треугольника:\n");
	
	printf("A(x1,y1):"); 
	
	scanf("%lf, %lf", &x1, &y1);

	printf("A(x2,y2):"); 
	
	scanf("%lf, %lf", &x2, &y2);

	printf("A(x3,y3):"); 
	
	scanf("%lf, %lf", &x3, &y3);

	S = 0.5 * fabs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));

	printf("Площадь треугольника равна %.2f", S);

	return 0;

}