#include <stdio.h>
// question number 2
int main()
{
    char a[10]={'1','2','5','$','$','$','$','$','$','$'};
    int n=10,i=0;
    int flag=0;
    for (i=0;i<n;i++)
    {
        if (a[i]=='$')
        {
          flag=i;
          break;
        }
        else
        {
            printf("qwertyuiopl,mnbvcxzsdfghj");
        }

    }
    printf("%d",flag);
      return 0;
}   