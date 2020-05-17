#include <math.h>
#include <stdio.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "ua");
	int as;
	
	

	printf("Введiть номер завдання: (1-3)");
	scanf("%d", &as);

	if(as == 1) 
	{
		exOne();
	}
	else if (as == 2) 
	{
		exTwo();
	} 
	else if (as == 3) 
	{
		exTree();
	}
	else {
		printf("Такого завдання немає! \n\n\n\n");
	}

	printf("\n\n\n");
	system("pause");
	return 0;


}

int exOne() 
{
	
	float modul;
	int a, b, sym,difference;

	printf("Введiть 1-е цiле число: ");
	scanf("%d", &a);
	printf("Введiть 2-е цiле число: ");
	scanf("%d", &b);

	difference = a-b;
	sym = 2*(a+b);
	modul = a/b;


	printf("Подвоєна сума чисел: %d\nЦiла частина вiд дiлення 1-го на 2-е: %1.f\nРiзницю 1-го i 2-го числа: %d ", sym,modul,difference);	


	
	return 0;

	
}

int exTwo() {
	float a,b,c,y;

	printf("Введiть a: ");
	scanf("%f", &a);
	printf("Введiть b: ");
	scanf("%f", &b);
	printf("Введiть c: ");
	scanf("%f", &c);

	y = ((a+b*c)/(2*a-b-c))+((a)/(b+2));

	printf("y = %f", y);
	
}
int exTree() {
	float x,y,z,t;
	printf("Введiть x: ");
	scanf("%f", &x);
	printf("Введiть y: ");
	scanf("%f", &y);
	printf("Введiть z: ");
	scanf("%f", &z);

	t = (1+z)*((x+(y/z))/(x-((1)/(1+pow(x,2)))));

	printf("t = %f", t);

}
