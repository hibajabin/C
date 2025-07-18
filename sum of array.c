/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,limit,array[100],sum=0;
    printf("enter the limit : ");
    scanf("%d",&limit);
    
    printf("enter the elements : ");
    
    for(i=1;i<=limit;i++){
        scanf("%d",&array[i]);
    }
    
    for(i=1;i<=limit;i++){
        sum=sum+array[i];
    }
    printf("Result = %d",sum);

    return 0;
}
