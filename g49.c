/*Ben, a data analyst, needs to efficiently determine the smallest and largest numbers from a series of input values. He requires a program to handle this task, wherein the first input specifies the total count of numbers to be analyzed. 



Subsequently, the program reads each number and identifies the smallest and largest values. Upon execution, it outputs both the smallest and largest numbers for Ben's analysis.

Input format :
The first line of input consists of an integer value n, representing the total count of numbers to be analyzed.

The second line of input consists of n space-separated integers, representing the number in the series.

Output format :
The first line displays "Smallest number = " followed by the smallest number in the series.

The second line displays "Largest number = " followed by the largest number in the series.*/


#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int number;
    int smallest, largest;

    scanf("%d", &number);
    smallest = largest = number;

    int i = 1;
    while (i < N) {
        scanf("%d", &number);
        if (number < smallest) {
            smallest = number;
        }
        if (number > largest) {
            largest = number;
        }
        i++;
    }

    printf("Smallest number = %d\n", smallest);
    printf("Largest number = %d", largest);

    return 0;
}

