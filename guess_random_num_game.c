#include <stdio.h>
#include <stdlib.h> // rand function is defined in stdlib.h
#include <time.h>

int main()
{
    int num, count = 0, rand_num;
    srand(time(0));
    rand_num = rand() % 100 + 1;
    // printf("Computer random number is %d\n\n", rand_num);
    printf("Guess the number between 1 and 100\n");
    scanf("%d", &num);

    while (num != rand_num)
    {
        if (num > rand_num)
        {
            printf("Lower number please!\n");
            count++;
        }
        else if (num < rand_num)
        {
            printf("Higher number please!\n");
            count++;
        }
        printf("Guess the number between 1 and 100\n");
        scanf("%d", &num);
    }

    printf("You guess the number in %d attempts\n", count + 1);

    return 0;
}