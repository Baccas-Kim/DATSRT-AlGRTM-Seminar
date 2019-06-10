#include "common.h"
//void ConvToRPNExp(char exp[]);
//int GetOpPrec(char op)
//int WhoPrecOp(cahr op1, char op2)


int GetOpPrec(char op)
{
	switch(op)
	{
		case '*':
		case '/':
			return 5;
			break;
		case '+':
		case '-':
			return 3;
			break;
		case '(':
			return 1;
			break;
	}
		case '':
			return -1;			
}


int WhoPrecOp(cahr op1, char op2)
{
	int op1Prec = GetOpPrec(op1);
	int op2Prec = GetOpPrec(op2);
	
	if(op1Prec > op2Prec) {
		return 1;
	}
	else if(op1Prec < op2Prec) {
		return -1;
	}
	else
		return 0;
}


void ConvToRPNExp(char exp[]) {
	Stack stack;
	int expLen= strlen(exp);
	char * convExp = (char *)malloc(expLen+1);
	
	int i,idx=0;
	char tok, popOp;

  memset(convExp, 0, sizeof(char)*expLen+1);
  StackInit(&stack);

  for(i=0;i<expLen;i++) {
    tok = exp[i];
    if(isdigit(tok)) 
    {
sdf
	
}













