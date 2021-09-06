#include <stdio.h>
#include <math.h>

int main() {
	int arr[4][4], ans[4][4];

	for (int i = 0; i < 4; i++) {
		
		for (int j = 0; j < 4; j++) {
			printf("Enter Number: ");
			scanf_s("%d", &arr[i][j]);
			fflush(stdin);
		}
	}

	for (int i = 0; i < 4; i++) {
		
		for (int j = 0; j < 4; j++) {
			ans[i][j] = arr[j][i];
		}
	}

	for (int i = 0; i < 4; i++) {
		
		for (int j = 0; j < 4; j++) {
			printf("%d ", ans[i][j]);
		}
		printf("\n");
	}

}