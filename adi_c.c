#include <stdio.h>
int main() {
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int temp,c=100;
    for(int i=0;i<3;i++)
    {for(int j=0;j<3;j++)
    {
        temp=a[i][j]+c;
        a[i][j]=a[j][i];
        a[j][i]=temp-c;
    }}
    for(int i=0;i<3;i++)
    {for(int j=0;j<3;j++)
    {printf("%d",a[i][j]);
    }
    printf("\n");
    }
    return 0;
}
