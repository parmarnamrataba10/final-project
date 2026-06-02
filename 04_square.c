
#include<stdio.h>

void square (int *p){

*p = (*p) * (*p);

}

int main (){


   int size;

   printf(" enter the size :");
   scanf("%d",&size);

   int a[size];

   for(int i=0;i<size;i++){

    printf("\n array is [%d]=",i);
    scanf("%d",&a[i]);

   }

  for(int i=0;i<size;i++){

     square(&a[i]);

  }
  printf("\n the squares are :");

  for(int i=0;i<size;i++){

printf("\n %d",a[i]);


  }

    return 0;

}