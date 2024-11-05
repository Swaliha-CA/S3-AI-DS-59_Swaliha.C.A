//program of linear search
//swaliha_59
#include<stdio.h>
 void main()
   {
    int search,n,i,arr[10];
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
     for(i=0;i<n;i++)
		 {
		   scanf("%d",&arr[i]);
		   }
       printf("enter the search element");
       scanf("%d",&search);
       for(i=0;i<n;i++)
       {
		   
		    
				if(arr[i]==search)
				{
				printf("%d is present at location %d",search,i+1);
				break;
		    	}
		    }
		    
    
        
       
         {
           
        if(i==n)
        {
        
         printf("%d is not  present in array",search);
         }
         }
         }
         

Output

enter the number of elements 4
enter the elements 
1
3
5
7
enter the search element 5

5 is present at location 3
[Process completed (code 27) - press Enter]
