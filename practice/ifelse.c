#include <stdio.h>

int main(int argc, const char** argv)
{
	
	int x;

	printf("Type a number: ");
	scanf("%d", &x);

	if(x > 5)
	{

		printf("Number was greater than 5!");
	}

	else
	{

		printf("Number was not greater than 5!");
	}
}