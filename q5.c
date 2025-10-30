/*-5. Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to make it store 15 number (from 7 x 1 to 7 x 15).*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int n = 7;
    int *ptr;

    ptr = (int *) calloc( n , sizeof(int));


    for (int i = 0 ; i<10 ; i++){
       printf("%d X %d = %d \n" ,n, (i+1), (n*(i+1)) );
        
    }
     
    printf("\n");
    n =7;
     ptr = realloc (ptr , 10* sizeof(int));
     printf("the new table is ");
     for (int i = 0 ; i<15 ; i++){
        
       printf("%d X %d = %d \n" ,n, (i+1), (n*(i+1)) );
        
     }
  
 return 0;
}