#include <stdio.h>
#include <string.h>

#define N 100

int main(){
	char str[N], c;
	int i, flag = 1;

	for (i = 0; (c = getchar()) != '\n'; i++){
		str[i] = c;
	}
	str[i] = '\0';
	
	for (i = 0; i < strlen(str); i++)
		if (str[i] != str[strlen(str) - 1 -i]){
		printf("No\n");
		flag = 0;
		break;
		}
	if (flag == 1) printf("Yes\n");
}
