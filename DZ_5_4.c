

#include <stdio.h>

int sum(int a)
{
int sum = 0, ost = a;
while (ost>0)
	{
	sum = sum + ost;
	ost = ost-1;
	}
return (sum);
}

int main()
{
printf("Vvedite chislj\n");
int a; 
scanf("%d", &a);
printf("Summa vsex chisel ot 1 do N: \t ");

printf("%d", sum(a));

return 0;
}
