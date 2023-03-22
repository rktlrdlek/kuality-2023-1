#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>

int main()
{
	int no, in, out;

	printf("Enter 3 values : ");
	scanf(" %d %d %d", &no, &in, &out);

	printf("\n");

	printf("%d, %#o, %#x\n", no, no, no);
	printf("\n");
	printf("%d, %#o, %#x\n", in, in, in);
	printf("\n");
	printf("%d, %#o, %#x\n", out, out, out);

}