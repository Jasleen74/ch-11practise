 /*4. Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers*/
 #include<stdio.h>
#include<stdlib.h>
int main() {
    int n = 5;
    int *ptr;

    ptr = (int *) calloc( n , sizeof(int));


    for (int i = 0 ; i<n ; i++){
        printf("enter the num pls : ");
        scanf("%d", &(ptr[i]));
    }
     printf("the array is \n");
     for (int i = 0 ; i<n ; i++){
         printf("%d \n" , ptr[i]);
        
    }
    printf("\n");
    n =10;
     ptr = realloc (ptr , 10* sizeof(int));

     for (int i = 0 ; i<n ; i++){
        printf("enter the num pls : ");
        scanf("%d", &(ptr[i]));
    }

    printf("the new array is \n");
     for (int i = 0 ; i<n ; i++){
         printf("%d \n" , ptr[i]);
        
    }

    
     
  
 return 0;
}