#include <stdio.h>
#include <unistd.h>

int main()
{
    int height;

    do
    {
        printf("Height: ");
        scanf("%i", &height);
    } while (height < 0);


    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        { 
            if (j < height / 2)
            {    
                for (int k = 0; k < height - (2 * j) - 2; k++)
                {
                    printf(" ");
                }
                    printf("## \n");   
            }  
            else
            {
                for (int k = 0; k < 2 * (j - 4); k++)
                {
                 printf(" ");
                }

                printf("## \n");  
            }

            usleep(100000);         
        }
    }   
}