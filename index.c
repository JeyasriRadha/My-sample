#include<stdio.h>

int main()
{
  int n;
  int arr[100];

  scanf("%d",&n);

  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    if(i==arr[i])
      printf("\n%d is correct",arr[i]);
  }

  return 0;

}
