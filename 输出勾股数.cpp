

#include <stdio.h>

int main()
{
	int a, b, c,i,n;
for(a=1;a<=100;a++)
for(b=a+1;b<=100;b++)
for (c = b+1; c <= 100; c++)
{
	if (a * a + b * b == c * c)
		printf("%2d %2d %2d\n", a, b, c);
}
	
}

