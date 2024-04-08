

#include <stdio.h>

int nod(int a, int b)
{
while (a!=b)
	{
	if (a>b) a=a-b;
	else b=b-a;
	}
return a;
}

int main()
{
printf("Vvedite dva chisla\n");
int a, b; 
scanf("%d%d", &a, &b);
printf("Naibolshiy obshiy delitel: \t ");
printf("%d", nod(a, b));
return 0;
}
