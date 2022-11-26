#include <stdio.h>
int main()
{
    int values[2];
    int function;
    printf("Please enter first Value :");
    scanf("%d", &values[0]);
    printf("\nPlease enter second value :");
    scanf("%d", &values[1]);
    printf("Plese enter Function");
    printf("\n1 , 2, 3 and 4");
    printf("\n1 : Sum");
    printf("\n2 : Subtract");
    printf("\n3 : Multiply");
    printf("\n4 : Divide");
    printf("\n5: Check for even or odd, will take further values!");
    printf("\nPlease enter any Above funtions :");
    scanf("%d", &function);
    if (function == 1 )
    {
        printf("%d + %d is %d",values[0], values[1], values[0] + values[1]);
    }
    else
    {
        if (function == 2)
        {
            printf("%d - %d is %d",values[0], values[1], values[0] - values[1]);
        }
        else
        {
            if (function == 3)
            {
                printf("%d * %d is %d",values[0], values[1], values[0] * values[1]);
            }
            else if(function == 4)
            {
                printf("%d / %d is %d",values[0], values[1], values[0] / values[1]);
            }
            else if(function == 5)
            {
                int even_odd;
                int result;
                int values_1;
                printf("Enter the value whom you want to know is even or odd :");
                scanf("%d", &values_1);
                if(even_odd % 2 == 0)
                {
                    printf("Value %d is even!", values_1);
                }
                else if(even_odd % 3 == 0)
                {
                    printf("Value %d is odd!",values_1);
                }
                else
                {
                    printf("The value is either 0 or 1!");
                }
            }
            else
            {
                printf("Invaild input!");
            }
        }      
    }
    return 0;
}