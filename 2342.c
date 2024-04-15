

#include <stdio.h>

int main()
{

	int a;
	int b,c;
	char x;

	scanf("%d", &a);
	scanf("%d %c %d", &b,&x,&c);

	if (x == '+')
		if (b+c>a)
			printf("OVERFLOW\n");
		else
			printf("OK\n");
	else
		if (b*c>a)
			printf("OVERFLOW\n");
		else
			printf("OK\n");


}
