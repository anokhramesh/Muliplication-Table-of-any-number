// print multiplication table of given number with for loop in C programming
#include <stdio.h>
#include <stdlib.h>

int main()
{   int num,c,i;// variable num,c,i are integer data type
    printf("Enter a number to print the Multiplication Table\n");
    scanf("%d",& num);// taking input from user and storing to num variable
    printf("Printing the Multiplication Table of %d\n",num);
    for(i=1;i<=12;i++){
            c=num*i;//function
        printf("\t%d * %d = %d\n",num,i,c);
    }
    return 0;
}
