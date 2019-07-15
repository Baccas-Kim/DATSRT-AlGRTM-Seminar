#include <stdio.h>
#include "ListBaseStack.h"

void main()
{
	int num;
	int* digit;
	Stack p;
	StackInit(&p);
	//SPush(&p, 1);
	//SShow(&p);
	
	printf("Enter and interger : ");
	scanf_s("%d", &num);

	while (num > 0) {
		digit = (int*)malloc(sizeof(int));
		*digit = num % 2;
		SPush(&p, digit);
		num = num / 2;
	}

	printf("The binary number is ");

	while (!SIsEmpty(&p)) {
		digit = (int*)SPop(&p);
		printf("%1d", *digit);
	}

/*
	while (!SIsEmpty(&p))
	{
		printf("%d \n",SPop(&p));
	}
*/

	printf("스택 프로그램 종료 ... \n");

}