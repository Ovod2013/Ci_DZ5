

#include <stdio.h>

int rav(int a)
{
int sum = 0, pr = 1;
while (a>0)
	{
	sum = sum + a%10;
	pr = pr*a%10;
	a = a/10;
	}
return (sum==pr);
}

int main()
{
printf("Vvedite chislj\n");
int a; 
scanf("%d", &a);
printf("Summa cyfr ravna proizvedeniyu? \t ");
if (rav(a)==1)
printf("YES");
else printf("NO");
return 0;
}
