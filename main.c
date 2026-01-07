#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("Welcome to the Number Analyzer!\n");
printf("This program will let you enter an integer,\n");
printf("identify if it's positive or negative,\n");
printf("and finally, check if it's odd or even.\n\n");

    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num>=1 && num%2 == 1) {
        printf("\nYou entered: %d\nYour number is: Positive.\nYour number is: Odd.\n", num);
    }else if (num>=1 && num%2 == 0) {
        printf("\nYou entered: %d\nYour number is: Positive.\nYour number is: Even.\n", num);
    }else if (num==0) {
        printf ("\nYou entered: %d\nYour number is 0\nYour number is: Even.\n", num);
    }else if  (num<0 && num%2 == 1) {
    printf ("\nYou entered: %d\nYour number is: Negative.\nYour number is: Odd.\n", num);
    }else printf ("\nYou entered: %d\nYour number is: Negative.\nYour number is: Even.\n" , num);

    return 0;
}
