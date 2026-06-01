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