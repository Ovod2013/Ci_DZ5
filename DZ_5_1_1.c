

#include <stdio.h>

unsigned long long pr(int b)
{
	unsigned long long c=1;
	for (int j=2; j<=b; j++)
	c=c*2;
	return c;
} 

int main()
{
printf("Vvedite nomer kletki ot 1 do 64\n");

int a; 
unsigned long long sum = 0;
scanf("%d", &a);
printf("Na etoy kletke lejit ");
sum=pr(a);
	printf("%llu", sum); // вывод на консоль
	printf(" zeren risa. \n");

return 0;
}
