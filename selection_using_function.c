#include<stdio.h>
int selection_sort(int A[],int,int);
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
  int loc,temp;
  for(int k=0;k<n;k++)
  {
      loc=selection_sort(A,k,n);
          temp=A[k];
          A[k]=A[loc];
           A[loc]=temp;
  }
  printf("\nAfter sorting:\n");
  for(int i=0;i<n;i++)
  {
      printf("%d ",A[i]);
  }

    return 0;
}
int selection_sort(int A[],int k,int n){
  int loc,min,j;
  min=A[k];
  loc=k;
  for(j=k+1;j<n;j++)
  {
      if(A[j]<min)
       {
           min=A[j];
           loc=j;
       }
  }

 return loc;

}
