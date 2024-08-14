
#include<stdio.h>
void main()
{
  int arr[5],n;
  int i,j,temp;
  printf("enter the size of array");
  scanf("%d",&n);
  printf("enter the elements\n");
           for(i=0;i<n;i++)
           {
                scanf("%d",&arr[i]);
            }
               for(i=0;i<n-1;i++)
              {
                  for(j=0;j<n-i-1;i++)
                 {
                  if(arr[j]>arr[j+1])
                  {
                  temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
                  }
               }
            }
                  printf("the sorted array is\n");
                  for(i=0;i<n;i++)
                  {
                  printf("%d",arr[i]);
                  }
           }


Output


enter the size of array5
enter the elements
33
56
14
99
455
the sorted array is
33      56      14      99      455
[Process completed (code 4) - press Enter]


                  
