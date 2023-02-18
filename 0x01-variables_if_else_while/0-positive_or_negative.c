include <stdio.h>
include <stdlib.h>
include <time.h>
int main()
{
       	int n;//Declaring the n variable
       	srand(time(0));
       	n = rand() % RAND_MAX;
       	printf("The number %d ", n);
       	if (n > 0) printf("is positive\n");
       	else if (n == 0) printf("is zero\n");
       	else printf("is negative\n");
       	return 0;
}
