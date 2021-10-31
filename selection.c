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
    int select;
    char operation;
  printf("\nwhich one do you want to select?");
    scanf("%d",&select);
    printf("press d if you want to delete selected number otherwise it will stop here.");
    scanf("%c",&operation);
    switch (operation)
    {
        case 'd':
            for ( int c = select - 1 ; c < n - 1 ; c++ ) 
        array[c] = array[c+1];        
        
        printf("Resultant array is\n");
for(int c = 0 ; c < n - 1 ; c++ )        
        printf("%d\n", array[c]);  

            break;
           default :
            printf("stop.............");
    }
    return 0;
}
