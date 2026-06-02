
question 1:


#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num > 0)
    {
        case 1:
            printf("Positive Number");
            break;

        case 0:
            switch(num < 0)
            {
                case 1:
                    printf("Negative Number");
                    break;

                case 0:
                    printf("Zero");
            }
    }

    return 0;
}

question 2:



#include<stdio.h>

int main(){

int size;

printf("enter the size :"); 

scanf(" %d",&size);

int a[size];

for(int i=0;i<size;i++){


    printf(" array is [%d]=",i);
    scanf("%d",&a[i]);

}

 int min = a[0];

    for(int i = 1; i < size; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Smallest element = %d", min);

    return 0;
}

question 4:


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

question 5:

#include<stdio.h>

int main(){


int num;
num=10;

for(int i=1;i<=5;i++){

    for(int j=1;j<=i;j++){

    printf(" %d",num*num);

    }
   num--;

printf("\n");

}

return 0;

}
