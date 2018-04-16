/* Program that implements the FIFO page replacement algorithm */


#include <stdio.h>
#include <stdlib.h>


#define ReferenceLength 100

typedef struct
{
    int *PG_Number1;
    int CountforElem;	
}Framing;

int ForReference, SecondFrame;

MF;

int *StringPointer;
 

/* Function Declaration */

void reference();

void frameinit();

void reference2();

void frameinit2();


/* Functions for Algorithms*/

int FIFO();

int LRU();


void reference()
{
   int i;
   srand(time(0));
   StringPointer = (int *)malloc( sizeof(int) * ReferenceLength );
   printf("The randomized Reference String: ");
   for(i=0; i< ReferenceLength; i++)
   {
	StringPointer[i] = rand() % ref2;
        printf("%d ", StringPointer[i]);       
   }
   printf("\n");
}


void frameinit()
{
   int i;
   memory.PG_Number1 = (int *)malloc( sizeof(int)* SecondFrame );
   memory.CountforElem =0;    
   for(i=0; i< SecondFrame; i++)
   {
	memory.PG_Number1[i] = -1;       
   }

}

void frameinit2()
{
   int i;
   for(i=0; i< SecondFrame; i++)
   {
	printf("%2d ",memory.PG_Number1[i]);       
   }
   printf("\n");
}

void reference2()
{
   int i;
   printf("The Same Reference String: ");
   for(i=0; i< ReferenceLength; i++)
   {
        printf("%d ", StringPointer[i]);       
   }
   printf("\n");

}



int FIFO()
{
    int countpage=0;
    int i;

   for( i=0; i<ReferenceLength; i++ ) 
   {
       countpage+=FIFOInsert(StringPointer[i]);
       frameinit2();
   }


   return countpage;
}




int FIFOInsert(int PageNumber)
{
    int Pagefault=0;
    if( 0==FIFOSearch(PageNumber) )
    {

    }

    return Pagefault;      
}


int LRU()
{
    int countpage=0;
    int i;

   for( i=0; i<ReferenceLength; i++ ) 
   {
       countpage+=LRUInsert(StringPointer[i]);
       frameinit2();
   }


   return countpage;

}

int LRUInsert(int PageNumber)
{
    int PageFault=0;

    int pos = -1;
    pos = LRUSearch(PageNumber);

    if ( -1 == pos ) 
    { 
    }
    else
    {
       LRUupdatePageTable(pos);
    }
    return PageFault;

}
int main(int argc, char* argv[])
{


 
    if( argc != 3 )
    {
        printf("Command format: Test <reference string size> <number of page frames>");
    }


    ref2 = atoi(argv[1]);
    SecondFrame = atoi(argv[2]);


   reference();


   frameinit();
   printf("page fault of FIFO: %d\n",FIFO());
   free(memory.PG_Number1);

   printf("\n");
   printf("\n");


   reference2();

   frameinit();
   printf("page fault of LRU: %d\n",LRU());
   free(memory.PG_Number1);


   free(StringPointer);	

   return 0;

}

