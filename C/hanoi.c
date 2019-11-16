#include <stdio.h>

int count = 0;
void H(int n, int from, int to, int using);

void main(){
	int n;
	count = 0;
	n=3;
	H(n,1,2,3);
	printf("# move for %d discs : %d\n", n, count);
	count = 0;
	n=4;
	H(n,1,2,3);
	printf("# move for %d discs : %d\n", n, count);
}

void H(int n, int from, int to, int using)
{
	count++;
	if (n == 1) printf("Disc %d, moved from Ploe (%d) to (%d)\n", n, from, to);
	else 
	{
		H(n-1, from, using, to);
		printf("Disc %d, moved from Ploe (%d) to (%d)\n", n, from, to);
		H(n-1, using, to, from);
	}

}