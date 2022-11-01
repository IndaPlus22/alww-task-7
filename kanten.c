/***
 * Template to a Kattis solution.
 * See: https://open.kattis.com/help/c
 * Author: Viola Söderlund <violaso@kth.se>
 */

#include <stdio.h> // standard input/output library
#include <string.h>

int calculate_distance(int i, int j, int row, int column)
{
    if (i == 1 || i == row)
        return 1;
    if (j == 1 || j == column)
        return 1;

    if (i > (row / 2))
    {
        i = row - i + 1;
    }

    if (j > (column / 2))
    {
        j = column - j + 1;
    }
    if (i > j)
        return j;
    return i;
}

/// Kattis calls main function to run your solution
int main()
{
    int numbers[2];
    for (int i = 0; i < 2; i++)
    {
        scanf("%i", &numbers[i]);
    }

    int i, j;

    for (i = 1; i <= numbers[0]; ++i)
    {

        for (j = 1; j <= numbers[1]; ++j)
        {
            int distance = calculate_distance(i, j, numbers[0], numbers[1]);
            if (distance > 9)
            {
                printf(".");
            }
            else
            {
                printf("%d", distance);
            }
        }
        printf("\n");
    }
}
