#include<stdio.h>

int main()
{
	char a = 'L';
	int b = 123;

	char* pa = &a;
	int* pb = &b;

	printf("a=%c\n", *pa);
	printf("b=%d\n", *pb);

	*pa = 55;
	*pb +=1;

	printf("new a=%d\n", *pa);
	printf("new b=%d\n", *pb);

	printf("sizeof pa=%d\n", sizeof(pa));
	printf("sizeof pb=%d\n", sizeof(pb));

	printf("The address of pa is %p\n", pa);
	printf("The address of pb is %p", pb);


	return 0;

}