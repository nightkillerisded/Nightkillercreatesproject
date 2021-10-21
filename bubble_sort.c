#include<stdio.h>

int main()
{
  int n;
  printf("Enter size of array:");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
      printf("Enter %dst element:",i+1);
      scanf("%d",&arr[i]);
  }
   printf("\nbefore sorting:\n");
  for(int i=0;i<n;i++)
    printf("%d ",arr[i]);

   int i,j,k;
   for(k=0;k<n-1;k++){
     for(i=0;i<n-1;i++)
       if(arr[i]>arr[i+1]){
         j=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=j;
       }
   }
          printf("\nAfter sorting:\n");
         for(i=0;i<n;i++)
         {
             printf("%d ",arr[i]);
         }
        
return 0;
}