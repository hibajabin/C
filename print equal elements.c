/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int i,n,j;

int isequal(int array[n],int array2[n]) {
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(array[i]==array2[j]) {

				printf("%d ",array[i]);
			}
		}
	}
}
	int main()
	{
		int array[100],array2[100];
		printf("enter number of elements:");
		scanf("%d",&n);
		printf("enter %d elements:\n",n);
		for(i=0; i<n; i++) {
			scanf("%d",&array[i]);
		}
		printf("enter %d elements:\n",n);
		for(j=0; j<n; j++) {
			scanf("%d",&array2[j]);
		}
		printf("equal elements:");
		isequal(array,array2);

		return 0;
	}