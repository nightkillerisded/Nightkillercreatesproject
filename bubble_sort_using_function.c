#include<stdio.h>
int *bubbleSort(int arr[],int n);
int main()
{
    int n;
    printf("enter n:");
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
   int *ptr;
   ptr=bubbleSort(arr,n);
   for(int i=0;i<n;i++)
         {
             printf("%d ",*(ptr+i));
         }
   return 0;
}

int *bubbleSort(int arr[],int n){

   int i,j,k;
   for(k=0;k<n;k++){
     for(i=0;i<n-1;i++)
       if(arr[i]>arr[i+1]){
         j=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=j;
       }
   }
         printf("\nAfter sorting:\n");
         
         return arr;

}
