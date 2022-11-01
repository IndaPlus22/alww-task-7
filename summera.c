/***
 * Template to a Kattis solution.
 * See: https://open.kattis.com/help/c
 * Author: Viola Söderlund <violaso@kth.se>
 */

#include <stdio.h> // standard input/output library
#include <string.h>

/// Kattis calls main function to run your solution
int main()
{
    int number_of_numbers;
    char str[15];
    int other_number[1000000];
    scanf("%i", &number_of_numbers);
    for (int i = 0; i < number_of_numbers; i++)
    {
        scanf("%i", &other_number[i]);
    }
    if (number_of_numbers % 2 != 0)
        number_of_numbers++;
    int howManyINeed = (int)number_of_numbers / 2;

    int i, j, a;

    for (i = 0; i < number_of_numbers; ++i)
    {

        for (j = i + 1; j < number_of_numbers; ++j)
        {

            if (other_number[i] < other_number[j])
            {

                a = other_number[i];
                other_number[i] = other_number[j];
                other_number[j] = a;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < howManyINeed; i++)
    {
        sum += (int)other_number[i];
    }
    printf("%d", sum);
}
