#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num;
	char c;
	printf("input a string:");	
	
	while((c=getchar())!='\n')
	{
	if(48<=c&&c<=57)
		num++;		
	else
		continue;
	}

	printf("The number of digits is %i", num);	
		
	return 0;
}
