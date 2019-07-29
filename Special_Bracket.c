#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,n,a;
  char b[20];
  printf("Enter the size");
  scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%c",&b[i]);

}
    a=(n/2);
    if(b[a]=='(')         //when ever the middle char is '(' then hole series is special bracket series where hole size of the array is  special bracket series
      {printf("%d\n",n);
      }
     else{                //if not '(' then it is not a continous special bracket series which half of the original size of array of pairs will be formed
       printf("%d\n",n/2);
       }
  getch();
  return(0);
 }
