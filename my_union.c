#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define f(s1, s2) s1 ## s2
char* my_union(char* str1, char* str2)
{
    char * str3 = (char *) malloc(1 + strlen(str1)+ strlen(str2) );
    strcpy(str3, str1);
    strcat(str3, str2);
    char * res = (char *) malloc(strlen(str3) + 1);
    res[0] = str3[0];
    int j;
    int i = 0;
    while(str3[i] != '\0'){
      
        for(j = 0; j < strlen(res); j++)
        {
            if(str3[i] == res[j]){
                break;
            }
        }
        for (int p = 1; p < strlen(str3); p++){
            if (str3[i] != str3[p]){
                res[j] = str3[i];
            } else
                break;
        }
    }
    return res;
}
int main(){
    printf("%s", my_union("df6v", "gtwthgdwth"));
}
