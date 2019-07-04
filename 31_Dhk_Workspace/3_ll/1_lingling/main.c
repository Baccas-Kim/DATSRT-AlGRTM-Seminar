#include <stdio.h>
//#include <stdlib.h>
#include "DBLL.h"


int main(int argc, char *argv[]) {

  List list;
  int data;
  ListInit(&list);
  
  
  LInsert(&list,1);
  LInsert(&list,2);
  LInsert(&list,3);
  LInsert(&list,4);
  LInsert(&list,5);
  LInsert(&list,6);
  LInsert(&list,7);
  LInsert(&list,8);


  if(LFirst(&list, &data)) 
  {
  	printf("%d",data);
    while(LNext(&list, &data)) {
    	printf("%d",data);
  	}
  	
	while(LPrevious(&list, &data)) {
    	printf("%d",data);
    	//printf("DEBUGGGG\n\r");
  	}
  	
  	printf("\n\r");
  }

  printf("\n\n");
  
  return 0;
}
