#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	printf("Enter the year;");
	if(n%4==0)
	printf("%d is the leap year.",n);
	else
	printf("%d is the not leap year.",n);
	return 0;
}
