/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    char str[9]="aaabbbcc";
    int count=1;
    for(i=0;i<9;i++){
        if(str[i]==str[i+1]){
            count++;
        }
        else{
        printf("%c%d",str[i],count);
        count=1;
        }
    }

    return 0;
}
