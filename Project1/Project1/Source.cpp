#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num[1000], ber, max, min;
	scanf("%d", &ber);
	for (int i = 0; i < ber; i++) {
		scanf("%d", &num[i]);
	}
	max = -2000000000;
	min = 2000000000;
	for (int j = 0; j < ber; j++) {
		if (min > num[j]) {
			min = num[j];
		}
		else if (max < num[j]) {
			max = num[j];
		}
	}
	printf("min : %d \nmax : %d", min, max);
}
