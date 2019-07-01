/****************************************************************
//  Name : DHKim
//  ogan : MDS Aca
//  Data : 19.06.24
****************************************************************/

#define KEY_RUTIN do{printf("\ncontinue to press any key");fflush(stdin);getc(stdin);}while(0);
#define MID_DBL_LINE do{puts("=====================================================");}while(0);
#define WAIT_RUTIN do{puts("Looding");sleep(1);puts("Looding..");sleep(1);puts("Looding......");sleep( 1 );}while(0);
#define MAXLEN 100 //max len of buf

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "DBLL.h"

char Str_asterk[] = "***********************************\n\r";
char Str_welcom[] = "Hellow! This program eval DatSTRUCT\r\n";
char Str_initsq[] = "init sequence !!\n\r";
char Str_blckfc[] = "------------not yet dev..-----------";
char Str_pgskip[] = "\r\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\r\n";

int UI_selmenu(void);
int UI_ADI_N(List * plist,Data * pdata);
int UI_ADI_P(List * plist,Data * pdata);
int UI_Autoinsert(List * plist);




int main(void)
{
	printf(&Str_asterk);
	printf(&Str_welcom);
	printf(&Str_asterk);
	List list;
	ListInit(&list);
	int data;
    int i_buf = 0;
    unsigned int Looiter = 0;
	WAIT_RUTIN
    
    for(Looiter=0;Looiter<100;Looiter++)
    {
        UI_selmenu();
        fflush(stdin);
        scanf("%d",&i_buf);

        switch(i_buf)
        {
            case 1 : 
                if(LFirst(&list, &data))
                {
                    UI_ADI_P(&list, &data);
                }
            break;

            case 2 : 
                if(LFirst(&list, &data))
                {
                     UI_ADI_N(&list, &data);
                }
            break;

            case 3 : UI_Autoinsert(&list);
            break;

            case 4 : puts(&Str_blckfc);
            break;
            
            case 5 : puts(&Str_blckfc);
            break;

            case 6 : printf("Current data : %d",data);
            break;

            default : printf("default case number : %d inserted\n\rprogram terminated!",i_buf);
            i_buf=0;
            break;
        }
        if(i_buf==0)
        {
            break;
        }
        puts("\r\n\r\n ...done!!!");
		fflush(stdin); 
        KEY_RUTIN


    }
	return 0;
}



int UI_selmenu(void)
{
	puts(&Str_pgskip);
    puts("(1) : All data inquire - NEXT Mode");
    puts("(2) : All data inquire - PRE Mode");
    puts("(3) : Insert Data");
    puts("(4) : Delete Data");
    puts("(5) : Auto TEST");
    puts("(6) : Current Data inquire");
    puts(&Str_asterk);
    puts("(0) : Exit Program");
    puts(&Str_asterk);
    return 1;    
}

int UI_ADI_N(List * plist,Data * pdata)
{
    puts("All data inquire - order down below");
    while(LNext(plist, pdata)) 
    {
		printf("%d ", pdata);
    }	
    return 1;
}

int UI_ADI_P(List * plist,Data * pdata)
{
    puts("All data inquire - reverse order down below");
    while(LPrevious(plist, pdata))
    {
        printf("%d ",pdata);
    }
    return 1;
}

int UI_Autoinsert(List * plist)
{
    puts("Insert 1~8");
    LInsert(plist, 1);  
    LInsert(plist, 2);
	LInsert(plist, 3); 
    LInsert(plist, 4);
	LInsert(plist, 5);  
    LInsert(plist, 6);
	LInsert(plist, 7);  
    LInsert(plist, 8);
}

int UI_2(int argc)
{

}
