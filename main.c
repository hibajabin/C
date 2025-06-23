/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int voters,i,vote;
	int candidateA=0,candidateB=0,candidateC=0,spoiledvotes=0;
	printf("enter number of voters: ");
	scanf("%d",&voters);



	for(i=0; i<voters; i++) {
		printf("Vote %d (1=A, 2=B, 3=C): ",i+1);
		scanf("%d",&vote);
	
	
	if(vote==1) {
		candidateA++;
	}
	else if(vote==2) {
		candidateB++;
	}
	else if(vote==3) {
		candidateC++;
	}
	else {
		spoiledvotes++;
	}
	}

printf("votes for A:%d\n",candidateA);
printf("votes for B:%d\n",candidateB);
printf("votes for C:%d\n",candidateC);
printf("spoiled votes:%d\n",spoiledvotes);

if(candidateA>candidateB&&candidateA>candidateC){
    printf("winner:candidate A");
}
else if(candidateB>candidateA&&candidateB>candidateC){
    printf("winner:candidate B");
}
else if(candidateC>candidateA&&candidateC>candidateB){
    printf("winner:candidate C");
}
else{
    printf("No winner");
}


	return 0;
}
