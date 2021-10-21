#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter %dst elemnt:",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nBefore sorting:\n");
 for(int i=0;i<n;i++)
 {
     printf("%d ",a[i]);
 }

 int j,temp;
 for(int i=1;i<n;i++){
    temp=a[i];
    for(j=i-1;j>=0 && temp<a[j];j--)
     {
      a[j+1]=a[j];
     }
    a[j+1]=temp;

 }
 printf("\nafter sorting:\n");
 for(int i=0;i<n;i++)
 {
     printf("%d ",a[i]);
 }


    return 0;
}
