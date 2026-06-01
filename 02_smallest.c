

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

