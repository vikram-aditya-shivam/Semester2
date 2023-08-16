#include <stdio.h>
const int MAX_LENGTH = 100;
int main() {
    char a[MAX_LENGTH];
    int i,len=0;
    printf("Enter a string: ");
    scanf("%s", a); 
    for (i = 0; a[i] != '\0'; i++) {
        len++;
    }
    //printf("length of the string is : ");
    //printf("%d",len);
    char b[MAX_LENGTH];
    for(i=1; i<len+2 ; i++){
        b[i] = a[len+1-i];
        printf("%c",b[i]);
    }
   /* printf("\nthe string after reversal is ");
    for(i=0; b[i] != '\0';i++)
    {
        printf("%c",b[i]);
    } */
    return 0;
}
