#include <stdio.h>
#define MAX 50

int main(){
	int arr[MAX], n,i;
	printf("Enter size of Array:\n");
	scanf("%d", &n);
	printf("Enter %d positive elements:\n", n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("\n\nEven elements:");

	for (i = 0; i < n; i++){
		if (arr[i] % 2 == 0)
			printf("\n%d", arr[i]);
	}
	printf("\n");
	printf("\n\nOdd elements");
	
	for (i = 0; i < n; i++) {
		if (arr[i] % 2 != 0)
			printf("\n%d", arr[i]);
	}
	printf("\n");
return 0;

}
