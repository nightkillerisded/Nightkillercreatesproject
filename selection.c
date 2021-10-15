#include<stdio.h>
int main()
{
    int n;
  printf("Enter size of array:");
  scanf("%d",&n);

  int A[n];
  for(int i=0;i<n;i++){
  printf("Enter %dst element of array:",i+1);
  scanf("%d",&A[i]);
  }
  printf("\nbefore sorting:\n");
  for(int i=0;i<n;i++)
  {
      printf("%d ",A[i]);
  }

for(int i=0;i<n-1;i++)
{
    int min,loc;
    min=A[i];
    loc=i;
    for(int j=i+1;j<n;j++)
    {
        if(A[j]<min)
        {
            min=A[j];
            loc=j;
        }
    }
    int temp;
        temp=A[i];
        A[i]=A[loc];
        A[loc]=temp;


}




  printf("\nAfter sorting:\n");
  for(int i=0;i<n;i++)
  {
      printf("%d ",A[i]);
  }

    return 0;
}